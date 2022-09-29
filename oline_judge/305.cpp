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

int TotalNumberVec(const vector<int> &ivec) {
    int sum = 0;
    for (auto i: ivec)
        sum += i;
    return sum;
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


    water_needed[1] = 1;
    int min_water = 0;
    for (int i = 2; i <= n; ++i) {
        // 先看有没有直接一桶倒满
        for (const auto &a: bucket_sheet)
            if (i == a) {
                min_water = 1;
                break;
            }
        // 再取子集最优解
        if (min_water == 0)
            for (int j = 1; j <= i/2; ++j){
                if (j = 1) {
                    min_water = water_needed[j] + water_needed;

                }
            }
    }
}