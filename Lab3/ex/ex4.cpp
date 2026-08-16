#include <iostream>
using namespace std;

int main(){
    int number;
    float digit1,digit2,digit3,digit4;
    cout << "Enter number : "; cin >> number;
    digit4 = (number / 1000) % 10;
    // cout << digit4 << " d4 ";
    digit3 = (number / 100) % 10;
    // cout << digit3 << " d3 ";
    digit2 = (number / 10) % 10;
    // cout << digit2 << " d2 ";
    digit1 = number % 10;
    cout << digit4 <<"   "<< digit3 <<"   "<< digit2 <<"   "<< digit1;
    return 0;
}