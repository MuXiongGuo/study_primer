#include <iostream>
#include <vector>

using namespace std;

vector<int>::iterator FindGivenValue(vector<int>::iterator begin, vector<int>::iterator end, int i) {
    for (auto it = begin; it != end; ++it)
        if (*it == i)
            return it;
    return end;  // 处理失败返回尾迭代器
}

int main(){
    vector<int> value_list = {1, 2, 3, 4, 5, 8};
    cout << *FindGivenValue(value_list.begin(), value_list.end(),3);
    cout << FindGivenValue(value_list.begin(), value_list.end(),6) - value_list.begin();  // 尾指针在内存中位置不确定
    return 0;
}

// 传递迭代器的引用没有意义 而且.begin()这种是临时对象