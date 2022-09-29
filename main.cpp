#include "iostream"
#include "vector"
#include "map"
#include "string"

using namespace std;

void InsertSort(vector<int> &ivec){
    if (ivec.size() <= 1)
        return;
    int j = 1;
    for (;j < ivec.size();++j){
        int k = ivec[j];
        int i = j - 1;
        while (i >= 0 && ivec[i] > k){
            ivec[i+1] = ivec[i];
            --i;
        }
        ivec[i+1] = k;
    }
}

int main(){
    vector<int>ivec = {1,3,2,4,5,6,7,8,9,0};
    InsertSort(ivec);
//    for (auto i: ivec)
//        cout << i << ' ';
    //学习测试 map
//    map<int, vector<int>> m;
//    cout << m.size();
//    m[8];
//    cout << m.size();
    // 继续测试
    map<int, int> m2;
    cout << m2.size();
    m2[8];
    cout << m2[8];

}