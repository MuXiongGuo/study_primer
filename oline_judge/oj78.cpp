#include "iostream"
#include "cmath"

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 1) {
        cout << "no" << endl;
        return 0;
    }
    for (int i = 2; i <= pow(n, 0.5) - 1; ++i) {
        if (n % i == 0) {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;

}