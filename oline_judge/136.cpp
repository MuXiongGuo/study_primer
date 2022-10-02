#include <iostream>
using namespace std;
class Point {
private:
    int x;
    int y;
public:
    Point() { };
// 在此处补充你的代码
    friend ostream & operator<<(ostream &out, const Point &p){
        out << p.x << "," << p.y;
        return out;
    }

    friend istream & operator>>(istream &in, Point &p){
        in >> p.x >> p.y;
        return in;
    }

};
int main()
{
    Point p;
    while(cin >> p) {
        cout << p << endl;
    }
    return 0;
}