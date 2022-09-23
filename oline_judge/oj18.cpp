#include "iostream"

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    double price = 200;
    double money = 0;
    int i = 1;
    for (; i <= 20; ++i){
        money += n;
        if (money >= price)
            break;
        price *= (1 + m / 100.0);
    }
    if (i > 20)
        cout << "Impossible" << endl;
    else
        cout << i << endl;
    return 0;
}