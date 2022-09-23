#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;


int main() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> ivec;
    list<int> ilist;
    for (auto i: ia) {
        ivec.push_back(i);
        ilist.push_back(i);
    }

    //删除要用while
//    for (auto it = ivec.begin(); it != ivec.end(); ++it){
//        if (!(*it & 1))
//            it = ivec.erase(it);
//    }
//    for (auto it = ilist.begin(); it != ilist.end(); ++it){
//        if (*it & 1)
//            it = ilist.erase(it);
//    }
//        return 0;
}