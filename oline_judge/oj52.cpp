#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int main() {
    int n;
    while (cin >> n){
        if (n == 0)
            break;
        vector<int> ivec;
        for (int i = 0; i < n; ++i) {
            int temp;
            cin >> temp;
            ivec.push_back(temp);
        }
        sort(ivec.begin(), ivec.end());
        if (ivec.size() % 2 == 0)
            cout << (ivec[ivec.size()/2] + ivec[ivec.size()/2-1])/2 << endl;
        else
            cout << ivec[ivec.size()/2] << endl;
    }
    return 0;
}