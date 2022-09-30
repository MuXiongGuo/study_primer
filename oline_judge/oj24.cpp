#include "iostream"
#include "vector"

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ivec;
    while (n != 0) {
        ivec.push_back(n % 10);
        n /= 10;
    }
    for (int i = ivec.size()-1; i >= 0; --i)
        cout << ivec[i] <<endl;
        return 0;
}