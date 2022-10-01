#include "cmath"
#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> ivec(n);
    for (int i=0;i<n;++i)
        cin >> ivec[i];
    int min_distance = abs(ivec[0] - ivec[1]);
    for (int i = 0; i < n; ++i)
        for (int j = i+1; j < n; ++j)
            min_distance = min(min_distance, abs(ivec[i] - ivec[j]));
    cout << min_distance;
    return 0;
}