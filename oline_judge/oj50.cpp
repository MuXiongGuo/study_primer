#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> matrix;
    for (int i = 0; i <n; ++i) {
        vector<int> ivec;
        for (int j = 0; j < n; ++j) {
            int temp;
            cin >> temp;
            ivec.push_back(temp);
        }
        matrix.push_back(std::move(ivec));
    }
    int sum = 0;
    for (int i = 1; i < n-1; ++i)
        for (int j = 1; j < n-1; ++j)
            if (matrix[i+1][j]-matrix[i][j]>=50 && matrix[i-1][j]-matrix[i][j]>=50 &&
                matrix[i][j+1]-matrix[i][j]>=50 && matrix[i][j-1]-matrix[i][j]>=50)
                ++sum;
    cout << sum;
    return 0;
}