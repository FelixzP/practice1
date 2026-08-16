#include <iostream>
#include "lib.h"

using namespace std;

int main(){
    int  num1, num2;
    cout << "Enter Number1 :"; cin >> num1;
    cout << "Enter Number2 :"; cin >> num2;
    cout << "Result ";
    cout << num1 << " + " << num2 << " = ";
    cout << sum(num1,num2);
    return 0;
}