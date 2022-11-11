#include "iostream"
#include "string"
#include "algorithm"
#include "vector"

using namespace std;

int main() {
    // 10.20
    vector<string> words = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle", "jumps"};
    int length = 4;
    int res = count_if(words.begin(), words.end(), [length](const auto &word) { return word.size() > length; });
    cout << res << endl;
    // 10.21
    int a = 10;
    auto f = [a]() mutable -> bool { if (a > 0) { a--; return false; } else { return true; } };
    for (int i = 0; i < 10; i++) {
        cout << f() << endl;
    }
}