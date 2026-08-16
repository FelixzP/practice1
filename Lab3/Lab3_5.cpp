#include <iostream>
using namespace std;

int main(){
    int A,B;
    cout << "Enter first number (A):";
    cin >> A;
    cout << "Enter second number (B):";
    cin >> B;
    cout << endl;
    // ++operand กับ operand++
    cout << "Before A = " << A << "\tB    = " << B <<endl;
    cout << "     ++A = " << ++A << "\tB++  = " << B++ << endl;
    cout << "After  A = " << A <<  "\tB    = " << B << endl;
    // --operand กับ operand--
    cout << "Before A = " << A << "\tB    = " << B <<endl;
    cout << "     --A = " << --A << "\tB++  = " << B-- << endl;
    cout << "After  A = " << A <<  "\tB    = " << B << endl;
    return 0;
}