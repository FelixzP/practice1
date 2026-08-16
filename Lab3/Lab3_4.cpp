#include <iostream>
using namespace std;

int main(){
    int A,B;
    cout << "Enter first Number (A) :"; cin >> A;
    cout << "Enter second Number (B) :"; cin >> B;
    cout << "\nTesting usage operator\n";
    cout << "========================\n";
    cout << "A < B = " << (A < B) << endl;   // น้อยกว่า
    cout << "A <= B = " << (A <= B) << endl; // น้อยกว่าหรือเท่ากับ
    cout << "A > B = " << (A > B) << endl;   // มากกว่า
    cout << "A >= B = " << (A >= B) << endl; // มากกว่าหรือเท่ากับ
    cout << "A == B = " << (A == B) << endl; // เท่ากับ
    cout << "A != B = " << (A != B) << endl; // ไม่เท่ากับ
    cout << "A && B = " << (A && B) << endl; // AND กัน
    cout << "A || B = " << (A || B) << endl; // OR กัน
    cout << "!A     = " << !A << ",!B = " << !B << endl; //ถ้าค่าไม่ใช่ 0 จะเป็นจริงเสมอไม่ว่าเป็นตัวเลขใดๆก็ตาม

}