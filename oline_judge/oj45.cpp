#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> ivec;
    for (int i=10; i<=n; ++i){
        int units_digit = i%10;
        int tens_digit = i/10%10;
        int sum = units_digit + tens_digit;
        if (i % sum == 0)
            ivec.push_back(i);
    }
    for (const auto &a : ivec)
        cout << a << '\n';
    return 0;
}