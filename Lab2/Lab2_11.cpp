#include <iostream>
using namespace std;

int main(){
    int Number1, Number2, Result;
    cout << "Program Addittion 2 Values." << endl;
    // input two number 
    cout << "Enter first number : "; cin >> Number1;
    cout << "Enter second number : "; cin >> Number2;
    cout << endl;
    // Process addition two value
    Result = Number1 + Number2;
    // Display addition of two values.
    cout << "Sum " << Number1 << " + " << Number2;
    cout << " result " << Result << endl;
    return 0;
}