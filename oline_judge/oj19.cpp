#include "iostream"
#include "vector"

using namespace std;

int main() {
    int total_num;
    cin >> total_num;
    vector<double> dvec(total_num);
    vector<int> index(total_num);
    for (int i = 0; i < total_num; ++i) {
        index[i] = i+1;
    }
    int current_num;
    double before, after;
    for (int i = 0; i < total_num; ++i) {
        cin >> current_num >> before >> after;
        dvec[i] = after / before;
    }
    // sort
    for (int i = 0; i < total_num; ++i) {
            for (int j = i + 1; j < total_num; ++j) {
                if (dvec[i] > dvec[j]) {
                    swap(dvec[i], dvec[j]);
                    swap(index[i], index[j]);
                }
            }
        }
    int max_diff = 0;
    int max_index = 0;
    for (int i = 0; i < total_num-1; ++i) {
        if (dvec[i+1] - dvec[i] > max_diff) {
            max_diff = dvec[i+1] - dvec[i];
            max_index = i;
        }
    }
    cout << total_num - max_index - 1 << endl;
    for (int i = max_index+1; i < total_num; ++i) {
        cout << index[i] << '\n';
    }
    cout << max_index+1 << endl;
    for (int i = 0; i < max_index+1; ++i) {
        cout << index[i] << '\n';
    }
}