#include "iostream"
#include "map"

using namespace std;

int main(){
    map<int, int> money_map = {
            {1, 0},
            {5, 0},
            {10, 0},
            {20, 0},
            {50, 0},
            {100, 0}
    };
    int money;
    cin >> money;
    auto it1 = prev(money_map.end());
    while (money != 0){
        if (money < it1->first)
            --it1;
        else{
            money -= it1->first;
            it1->second += 1;
        }
    }
    for (auto it2 = money_map.rbegin(); it2 != money_map.rend(); ++it2)
        cout << it2->second << endl;
    return 0;
}

// C++20 支持
//for (auto & it2 : std::ranges::reverse_view(money_map))
//cout << it2.second << endl;