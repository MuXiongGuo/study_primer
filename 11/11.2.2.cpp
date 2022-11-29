#include "bits/stdc++.h"

using namespace std;

string &trans(string &s) {
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] -= ('A' - 'a');
        } else if (s[i] == ',' || s[i] == '.') {
            s.erase(i, 1);
        }
    }
    return s;
}

int main() {
    // 11.9
    ifstream in("11.9.txt");
    if (!in) {
        cout << "open file failed" << endl;
        return -1;
    }
    map<string, list<int>> word_line;
    string line;
    string word;
    int line_num = 0;
    while (getline(in, line)) {
        ++line_num;
        istringstream l_in(line);
        // 有些单词出现在多个 行 所以要用列表
        // 数据流分别是 ifstream --getline()--> string ----> istringstream ----> string
        while (l_in >> word) {
            trans(word);
            word_line[word].push_back(line_num);
        }
    }

    for (const auto &el:word_line) {
        cout << el.first << " line position";
        for (const auto &item:el.second) {
            cout << " " << item;
        }
        cout << endl;
    }
    // 11.11
    // typedef ......
    // typedef void(*P)(int a);//可以把P理解为一个类
    // using P = void(*)(int a);//等价上一条
    return 0;
}