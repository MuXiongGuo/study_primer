#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ivec(n);
    for (int i = 0; i < n; ++i)
        cin >> ivec[i];
    for (const auto &a: ivec)
        if (a < 100)
            cout << "Walk" << endl;
        else if (a > 100)
            cout << "Bike" << endl;
        else
            cout << "All" << endl;
    return 0;
}