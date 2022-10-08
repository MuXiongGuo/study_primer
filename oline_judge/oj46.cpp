#include "iostream"
#include "string"
#include "map"
#include "sstream"

using namespace std;

int main() {
    string s;
    getline(cin, s);
    stringstream line_stream(s);
    map<char, int> m;
    for (const auto &a : s)
        ++m[a];
    cout << m['a'] << ' ' << m['e'] << ' ' << m['i'] << ' ' << m['o'] << ' ' << m['u'] << endl;
    return 0;
}