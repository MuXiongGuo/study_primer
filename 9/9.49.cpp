#include "iostream"
#include "string"

using namespace std;

void find_middle_char(const string &s, const string &obj) {
    string::size_type pos = 0;
    while ((pos = s.find_first_not_of(obj, pos)) != string::npos) {
        cout << s[pos++];
    }
}

int main() {
    string s = "dwajiohnogpjfpowepvuidsopdwaghivdgvb";
    string obj = "bdfghjklpqty";
    find_middle_char(s, obj);
    return 0;
}