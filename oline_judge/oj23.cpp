#include "iostream"
#include "vector"
using namespace std;

int main(){
    vector<int> ivec(6);
    for (int i = 0; i < 6; ++i)
        cin >> ivec[i];
    int max_odd=-1, min_even = 1000;
    for (const auto &a : ivec){
        if (a%2==0 && a<min_even)
            min_even = a;
        else if (a%2!=0 && a>max_odd)
            max_odd = a;
    }
    cout << (max_odd - min_even > 0 ? max_odd - min_even: min_even - max_odd);
    return 0;
}