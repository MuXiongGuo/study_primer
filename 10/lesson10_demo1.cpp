#include <iostream>
#include <algorithm>

using namespace std;

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    // 将重复元素放到后面去, 并返回第一个重复位置的迭代器
    auto end_unique = unique(words.begin(),words.end());
    // 删除多余的元素
    words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{

    vector<string> words = {"the","quick","red","fox","jumps","over","the","slow","red","turtle","jumps"};


    elimDups(words);
    // 保证原来的字典顺序不变
    stable_sort(words.begin(), words.end(), isShorter);

    for ( const auto &s : words )
        cout << s << " ";
    cout << endl;

    return 0;
}