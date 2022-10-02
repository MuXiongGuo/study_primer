#include "iostream"

using namespace std;

int Gcd(int a, int b){
    // 默认要求 a>b
    int c;
    while ((c = a%b)){
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int num_total;
    cin >> num_total;
    int num_sum = 0, den_sum = 1;
    while (num_total--) {
        int numerator, denominator;
        char slash;
        cin >> numerator >> slash >> denominator;
        num_sum = num_sum*denominator + den_sum*numerator;
        den_sum = den_sum*denominator;
    }
    int gcd;
    if (num_sum > den_sum)
        gcd = Gcd(num_sum, den_sum);
    else
        gcd = Gcd(den_sum, num_sum);
    num_sum /= gcd;
    den_sum /= gcd;
    if (den_sum == 1)
        cout << num_sum << endl;
    else
        cout << num_sum << '/' << den_sum << endl;
    return 0;
}