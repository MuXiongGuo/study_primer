//#include "iostream"
//#include "vector"
//
//using namespace std;
//
//void swapRowMatrix(vector<vector<int>> &matrix, int row1, int row2) {
//    if (row1>=matrix.size() || row2>=matrix.size() || row1<0 || row2<0){
//        cout << "error" << endl;
//        return;
//    }
//    swap(matrix[row1], matrix[row2]);
//    for (auto & i : matrix) {
//        for (int j : i) {
//            cout << j << ' ';
//        }
//        cout << endl;
//    }
//}
//
#include<bits/stdc++.h>
using namespace std;
int a[10][10];
int pan(int n,int m)
{
    if(n<0||n>4||m<0||m>4)
        return 0;
    return 1;
}
int main()
{
    int n,m;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    cin>>n>>m;
    if(!pan(n,m))
    {
        cout<< "error" << endl;
        return 0;
    }
    for(int i=0;i<5;i++)
    {
        swap(a[n][i],a[m][i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<< setw(4)<< a[i][j];
        }
        cout<<endl;
    }
}
