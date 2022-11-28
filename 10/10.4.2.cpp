#include "algorithm"
#include "functional"
#include "vector"
#include "iostream"
#include "string"
#include "list"
#include "iterator"
#include "fstream"

using namespace std;
using namespace std::placeholders;

int main(int argc, char *argv[]) {
    // 10.29
//    ifstream in(argv[1]);
//    if (!in) {
//        cout << "open file failed" << endl;
//        return -1;
//    }
//    istream_iterator<string> in_iter(in), eof;
//    vector<string> vec;
    // copy(in_iter, eof, back_inserter(vec));
//    while (in_iter != eof) {
//        vec.push_back(*in_iter++);
//    }
//    for (const auto &a: vec)
//        cout << a << " ";

    // 10.30
//    istream_iterator<int> in_iter1(cin), eof1;
//    ostream_iterator<int> out_iter(cout, " ");
//
//    vector<int> vec1;
//    while (in_iter1 != eof1) {
//        vec1.push_back(*in_iter1++);
//    }
//    sort(vec1.begin(), vec1.end());
//    copy(vec1.begin(), vec1.end(), out_iter);

    // 10.31
    // 最后输出元素时 一般用copy输出 用unique_copy可以避免输出重复元素
    // unique_copy(vec1.begin(), vec1.end(), out_iter);

    // 10.33
    if (argc != 4) {
        cout << "usage: ./a.out input_file output_file1 output_file2" << endl;
        return -1;
    }
    ifstream in(argv[1]);
    if (!in) {
        cout << "open file failed" << endl;
        return -1;
    }
    ofstream out1(argv[2]);
    if (!out1) {
        cout << "open file failed" << endl;
        return -1;
    }
    ofstream out2(argv[3]);
    if (!out2) {
        cout << "open file failed" << endl;
        return -1;
    }
    istream_iterator<int> in_iter(in), eof;
    ostream_iterator<int> out_iter1(out1, " "), out_iter2(out2, "\n");
    while (in_iter != eof) {
        if (*in_iter & 1) {
            *out_iter1++ = *in_iter++;
        } else {
            *out_iter2++ = *in_iter++;
        }
    }
    return 0;
}