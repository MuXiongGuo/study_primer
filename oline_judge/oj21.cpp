#include "cmath"
#include "iostream"

using namespace std;

int main() {
    int h, r;
    cin >> h >> r;
    double v = h * r * r * M_PI;
    double water_needed = 20 * 1e3;
    int need_times = ceil(water_needed / v);
    cout << need_times;
    return 0;
}