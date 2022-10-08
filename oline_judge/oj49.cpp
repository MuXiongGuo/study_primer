#include "iostream"
#include "string"
#include "sstream"

using namespace std;

int main() {
    string s;
    getline(cin, s);
    // 去掉.号
    s.pop_back();
    stringstream line_stream(s);
    string word;
    string result;
    int max_length = 0;
    while (line_stream >> word)
        if (word.length() > max_length) {
            max_length = word.length();
            result = word;
        }
    cout << result << endl;
    return 0;
}
