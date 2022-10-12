// 用线段树？？？时间会快很多，重要的是区间交叉的问题
// leetcode 56 区间合并问题
// 这里采用 暴力算法（笨笨的）
#include "vector"
#include "iostream"
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> street_trees(n, 1);
    while (m){
        int start, end;
        cin >> start >> end;
        for (int i = start; i <= end; ++i)
            street_trees[i] = 0;
        --m;
    }
    int remain_trees = 0;
    for (const auto &a : street_trees)
        if (a == 1)
            ++remain_trees;
    cout << remain_trees+1;
    return 0;
}