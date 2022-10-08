// 算法取自<<编程珠玑>> 堪称经典
#include "vector"
#include "iostream"
#include "algorithm"

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> ivec;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        ivec.push_back(temp);
    }
    // 三次反转实现循环右移
    k = n - k%n;
    reverse(ivec.begin(), ivec.begin()+k);
    reverse(ivec.begin()+k, ivec.end());
    reverse(ivec.begin(), ivec.end());
    for (const auto & i : ivec)
        cout << i << ' ';
    return 0;
}