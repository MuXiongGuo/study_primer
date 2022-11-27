#include "algorithm"
#include "functional"
#include "vector"
#include "iostream"
#include "string"

using namespace std;
using namespace std::placeholders;

bool IsShorter(const string &s, int n) {
    return s.size() < n;
}

bool CheckSize(const string &s, int n) {
    return s.size() >= n;
}

int main() {
    // 10.22
    vector<string> words = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle", "jumps"};
    int length = 6;
    auto count = count_if(words.begin(), words.end(), bind(IsShorter, _1, length));

    // 10.24
    string s = "123456789";
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15};
    find_if (vec.begin(), vec.end(), bind(CheckSize, s, _1));

    // 10.25
    // 用bind加函数 替换 lambda 即可
}