#include "iostream"
#include "string"
#include "algorithm"

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    // 或者对每个元素用to_lower
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    if (s1 < s2)
        cout << '<' << endl;
    else if (s1 > s2)
        cout << '>' << endl;
    else
        cout << '=' << endl;
    return  0;
}
