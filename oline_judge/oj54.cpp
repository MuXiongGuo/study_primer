#include "iostream"
#include "vector"
#include "iomanip"
#include "cmath"

using namespace std;

double Distance_2points(double x1, double y1, double x2, double y2){
    return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}

int main(){
    int n;
    cin >> n;
    vector<double> x(n), y(n);
    for (int i = 0; i < n; ++i)
        cin >> x[i] >> y[i];
    double max_distance = 0;
    for (int i = 0; i < n; ++i)
        for (int j = i+1; j < n; ++j)
            max_distance = max(max_distance, Distance_2points(x[i], y[i], x[j], y[j]));

    // 加fix后控制了小数点后的位数  但是会有多余的0
    //cout << setiosflags(ios::fixed) << setprecision(num) << max_distance << endl;
    // fabs 是 浮点数版的
    cout << setprecision(4+int(log10(max_distance))+1) << max_distance << endl;
    return 0;
}

