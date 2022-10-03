#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int main() {
    vector<int> odd_ivec;
    vector<int> even_ivec;
    for (int k = 0; k < 10; ++k) {
        int n;
        cin >> n;
        if (n % 2 == 0)
            even_ivec.push_back(n);
        else
            odd_ivec.push_back(n);
    }
    sort(odd_ivec.begin(), odd_ivec.end());
    sort(even_ivec.begin(), even_ivec.end());
    for (const auto &a: odd_ivec)
        cout << a << " ";
    for (const auto &a: even_ivec)
        cout << a << " ";
    return 0;
}