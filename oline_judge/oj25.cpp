#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> grade_vec = {95, 90, 85, 80, 70, 60, 0};
    for (int i = 0; i <= 6; ++i) {
        if (n >= grade_vec[i]){
            cout << i+1;
            break;
        }
    }
    return 0;
}