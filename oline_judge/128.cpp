#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;

class Student {
// 在此处补充你的代码
public:
    Student() = default;
    void input(){
        getline(cin, all_information);
        stringstream line_stream(all_information);
        getline(line_stream, name, ',');
        getline(line_stream, age, ',');
        getline(line_stream, student_number, ',');
        getline(line_stream, grade_four_years[0], ',');
        getline(line_stream, grade_four_years[1], ',');
        getline(line_stream, grade_four_years[2], ',');
        getline(line_stream, grade_four_years[3], ',');
    }

    void calculate(){
        for(const auto &a : grade_four_years)
            total_grade += stoi(a);
    }

    void output(){
        cout << name << ',' << age << ',' << student_number << ',' << total_grade/4 << endl;
    }
private:
    string all_information;
    string name;
    string age;
    string student_number;
    string grade_four_years[4];
    double total_grade = 0;
};

int main() {
    Student student;        // 定义类的对象
    student.input();        // 输入数据
    student.calculate();    // 计算平均成绩
    student.output();       // 输出数据
}