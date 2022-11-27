#include "iostream"
#include "algorithm"

using namespace std;

// biggies
void Biggies(vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);
    stable_sort(words.begin(), words.end(), isShorter);
    auto wc = find_if(words.begin(), words.end(), [sz](const string &a) { return a.size() >= sz; });
    auto count = words.end() - wc;
    cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;
    for_each(wc, words.end(), [](const string &s) { cout << s << " "; });
    cout << endl;
}

int main() {
    // 10.14
    auto f1 = [](int a, int b) -> int { return a + b; };
    cout << f1(1, 2) << endl;
    // 10.15
    int a = 1;
    auto f2 = [a](int b) -> int { return a + b; };
    cout << f2(2) << endl;
    // 10.16

}