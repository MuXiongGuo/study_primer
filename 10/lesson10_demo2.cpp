#include "iostream"
#include "algorithm"
#include "string"
#include "vector"

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

string make_plural(size_t ctr, const string &word, const string &ending) {
    return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);
    stable_sort(words.begin(), words.end(), isShorter);
    // wc为第一个满足 size() >= sz 的元素的迭代器, lambda表达式使得只能接受1个谓词的find_if可以接受2个
    auto wc = find_if(words.begin(), words.end(), [sz](const string &a) { return a.size() >= sz; });
    auto count = words.end() - wc;
    cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;
    // for_each 类似 python 的 map
    for_each(wc, words.end(), [](const string &s) { cout << s << " "; });
    cout << endl;
}

int main() {
    vector<string> words = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle", "jumps"};
    biggies(words, 4);
    return 0;
}