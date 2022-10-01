#include "iostream"
#include "vector"

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> score_vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> score_vec[i];
    }
    int max_score = 0;
    for (const auto &a: score_vec)
        if (a > max_score)
            max_score = a;
    cout << max_score;
    return 0;
}