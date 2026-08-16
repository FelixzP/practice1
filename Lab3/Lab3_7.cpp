#include <iostream>
using namespace std;

int main(){ //ออกสอบในวิชาทฤษฎี 100% วิธีการทำ 8 4 2 1 แล้วเทียบ 0 1 แล้วทำตามสัญลักษณ์ AND OR ว่าได้ค่าเท่าไหร่
    int n;
    cout << "Enter integer number: ";
    cin >> n;
    cout << endl;
    cout << "n = " << n << endl;
    cout << "n >> 1 = " << (n >> 1) << endl;
    cout << "n = " << n << endl;
    cout << "n << 1 = " << (n << 1) << endl;
    cout << "n & 8  = " << (n & 8) << endl;
    cout << "n | 8  = " << (n | 8) << endl;
    cout << "n ^ 8  = " << (n ^ 8) << endl;
    return 0;
}