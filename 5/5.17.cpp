#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1 = {0, 1, 1, 2, 7};
    vector<int> v2 = {0, 1, 1, 2, 3, 5, 8};
    auto it_v1 = v1.cbegin();
    auto it_v2 = v2.cbegin();
    while (it_v1 != v1.cend() && it_v2 != v2.cend()) {
        if (*it_v1 != *it_v2) {
            cout << "No" << endl;
            break;
        }
        ++it_v1;
        ++it_v2;
    }
    return 0;
}