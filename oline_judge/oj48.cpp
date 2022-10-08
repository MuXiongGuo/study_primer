#include "iostream"
#include "vector"
#include "iomanip"

using namespace std;

void swapRowMatrix(vector<vector<int>> &matrix, int row1, int row2) {
    if (row1>=matrix.size() || row2>=matrix.size() || row1<0 || row2<0){
        cout << "error" << endl;
        return;
    }
    swap(matrix[row1], matrix[row2]);
    for (auto & i : matrix) {
        for (auto & j : i) {
            cout << setw(4) << j;
        }
        cout << endl;
    }
}

int main(){
    vector<vector<int>> matrix;
    for (int i = 0; i <5; ++i) {
        vector<int> ivec;
        for (int j = 0; j < 5; ++j) {
            int temp;
            cin >> temp;
            ivec.push_back(temp);
        }
        matrix.push_back(ivec);
    }
    int n, m;
    cin >> n >> m;
    swapRowMatrix(matrix, n, m);
    return 0;
}
