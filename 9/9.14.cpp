#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;


int main() {
    list<char *> clist = {"aa", "ddd"};
    vector<string> ivec;
    ivec.assign(clist.begin(), clist.end());  // assign 的使用方法

    return 0;
}