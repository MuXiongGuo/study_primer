#include "iostream"
#include "unordered_set"

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    unordered_set<int> num_set;
    for (int i = 0; i < n; ++i) {
        int number;
        cin >> number;
        if (num_set.find(k - number) == num_set.end())
            num_set.insert(number);
        else {
            cout << "yes" << endl;
            return 0;
        }
    }
    cout << "no" << endl;
    return 0;
}