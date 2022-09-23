#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;


int main(){
    vector<int> v1;
    const vector<int> v2;
    auto it1 = v1.begin();
    auto it2 = v2.begin();
    auto it3 = v1.cbegin();
    auto it4 = v2.cbegin();
    cout << typeid(it2).name()<<endl;  // 获得变量的类型
    cout << typeid(it1).name()<<endl;
    cout << typeid(it3).name()<<endl;

    // 9.11
    vector<double> v4 = {1.4,1.7,1.23,1.5};
    vector<int> v3(v4.begin(), v4.end());
    return 0;
}