#include <iostream>
using namespace std;

int main(){
    int binary;
    int digit1,digit2,digit3,digit4,convert;
    cout << "Enter binary number : "; cin >> binary;
    digit4 = (binary / 1000) % 10;
    digit3 = (binary / 100) % 10;
    digit2 = (binary / 10) % 10;
    digit1 = binary  % 10;
    convert = (digit4*(2*2*2))+(digit3*(2*2))+(digit2*(2*1))+(digit1*1);
    cout << "Decimal value of " << binary << " = " << convert;
    return 0;
}