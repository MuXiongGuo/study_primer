#include "iostream"

using namespace std;

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    int flag = y%x == 0 ? 0 : 1;
    int apple_remained = n - y/x - flag;
    cout << apple_remained << endl;
    return 0;
}