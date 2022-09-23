#include "iostream"
#include "vector"

using namespace std;

int Parition(vector<int> &ivec, int low, int high) {
    int x = ivec[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (ivec[j] > x) {
            ++i;
            swap(ivec[i], ivec[j]);
        }
    }
    swap(ivec[i + 1], ivec[high]);
    return i + 1;
}

int Select(vector<int> &ivec, int low, int high, int i) {
    if (low == high)
        return ivec[low];
    int q = Parition(ivec, low, high);
    int k = q - low + 1;
    if (k == i)
        return ivec[q];
    else if (k > i)
        return Select(ivec, low, q - 1, i);
    else
        return Select(ivec, q + 1, high, i - k);
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int>ivec(n);
    for (int i = 0; i != n;++i){
        cin >> ivec[i];
    }
    cout << Select(ivec, 0, ivec.size()-1, k);
}