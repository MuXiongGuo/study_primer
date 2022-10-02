#include "iostream"
#include "vector"

using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> ivec(5);
    for (auto &a: ivec)
        cin >> a;
    int sum = 0;
    for (const auto &el: ivec)
        if (el < a)
            sum += el;
    cout << sum << endl;
    return 0;
}