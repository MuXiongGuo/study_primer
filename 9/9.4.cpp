#include <iostream>
#include <vector>

using namespace std;

bool FindGivenValue(vector<int>::iterator begin, vector<int>::iterator end, int i) {
    for (auto it = begin; it != end; ++it)
        if (*it == i)
            return true;
    return false;
}

int main(){
    vector<int> value_list = {1, 2, 3, 4, 5, 8};
    cout << FindGivenValue(value_list.begin(), value_list.end(),3);
    cout << FindGivenValue(value_list.begin(), value_list.end(),6);
    return 0;
}