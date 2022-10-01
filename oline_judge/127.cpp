#include <iostream>
using namespace std;
class A {
public:
    int val;

    A(int
// 在此处补充你的代码
    tem = 123):val(tem){
    }
    int& GetObj(){
        return val;
    }
    // 加explicit 是规范 但是题目要求就达不到了
    operator int(){
        return val;
    }
};
int main()
{
    int m,n;
    A a;
    cout << a.val << endl;
    while(cin >> m >> n) {
        a.GetObj() = m;
        cout << a.val << endl;
        a.GetObj() = A(n);
        cout << a.val<< endl;
    }
    return 0;
}
