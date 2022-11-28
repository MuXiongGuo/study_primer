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
    // 10.27 unique 与 unique_copy 都是要求排序过的 重复元素必须相邻
    vector<int> vec = {1, 2, 3, 3, 4, 5, 5, 6, 7, 7, 7, 8, 9, 9, 9, 9};
    list<int> lst;
    unique_copy(vec.begin(), vec.end(), back_inserter(lst)); // back_inserter 和 inserter 都可以

    // 10.28
    vector<int> vec1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> lst1, lst2, lst3;
    copy(vec1.begin(), vec1.end(), inserter(lst1, lst1.begin()));
    copy(vec1.begin(), vec1.end(), back_inserter(lst2));
    copy(vec1.begin(), vec1.end(), front_inserter(lst3));
}