#include "iostream"
#include "algorithm"

using namespace std;

int main() {
    // 10.14
    auto f1 = [](int a, int b) -> int { return a + b; };
    cout << f1(1, 2) << endl;
    // 10.15
    int a = 1;
    auto f2 = [a](int b) -> int { return a + b; };
    cout << f2(2) << endl;
    // 10.16

}