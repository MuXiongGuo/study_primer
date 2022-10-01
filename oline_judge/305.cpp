#include "iostream"
#include "vector"

using namespace std;

vector<int> SumVec(const vector<int> &ivec1, const vector<int> &ivec2) {
    vector<int> ivec;
    for (int i = 0; i != ivec1.size(); ++i) {
        ivec.push_back(ivec1[i] + ivec2[i]);
    }
    return ivec;
}


int main() {
    int n, m;
    cin >> n >> m;
    vector<int> bucket_sheet(m);
    for (int i = 0; i != m; ++i) {
        cin >> bucket_sheet[i];
    }

    vector<int> water_needed(n + 1);
    vector<vector<int>> water_scheme(n+1);
    for (auto &a : water_scheme)
        a.resize(m);

    for (int i = 1; i <= n; ++i) {
        int min_water = 0;
        vector<int> water_scheme_tem;
        // 先看有没有直接一桶倒满
        for (int k = 0; k < m; ++k)
            if (bucket_sheet[k] == i){
                min_water = 1;
                water_needed[i] = 1;
                water_scheme[i][k] = 1;
                break;
            }
        // 再取子集最优解
        if (min_water == 0){
            for (int j = 1; j <= i/2; ++j){
                if (j == 1 || (min_water > water_needed[j] + water_needed[i-j])) {
                    min_water = water_needed[j] + water_needed[i-j];
                    water_scheme_tem = SumVec(water_scheme[j], water_scheme[i-j]); // 能触发移动构造吗？
                }
            }
            water_needed[i] = min_water;
            water_scheme[i] = std::move(water_scheme_tem);
        }
    }
    for (const auto & a : water_scheme[water_scheme.size()-1])
        cout << a <<' ';
}