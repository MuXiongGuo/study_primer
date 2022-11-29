#include "algorithm"
#include "functional"
#include "vector"
#include "iostream"
#include "string"
#include "list"
#include "iterator"

using namespace std;
using namespace std::placeholders;

int main() {
    // 10.35
    // 使用普通迭代器 逆向打印，初始迭代器为 end 不断--即可

    // 10.36
    vector<int> lst = {1, 2, 5, 0, 4, 8, 0, 4, 0, 5};  // 若为list 则没法用减法了  只能for循环自己去找了
    auto index = find(lst.rbegin(), lst.rend(), 0).base() - lst.begin();
    cout << index << endl;

    list<int> lst2(lst.begin(), lst.end());
    auto index2 = find(lst2.rbegin(), lst2.rend(), 0);
    int cnt = 0;
    for (auto it = lst2.begin(); it != index2.base(); ++it) {
        ++cnt;
    }
    cout << cnt << endl;

    // 10.37
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    list<int> lst3;
    auto it = front_inserter(lst3);
    copy(vec.begin()+3, vec.begin()+7, it);
    //copy(vec.rbegin()+size-3, vec.rbegin()+size-7, it); it 为push_back也是可以的
    return 0;
}