#include <iostream>
#include <string>
using namespace std;
int main(){
    int LeftOperand,RightOperand;
    char Operator;
    int Result;

    cout << "Please enter a simple expression \n";
    cout << "(number operator number) : ";
    cin >> LeftOperand >> Operator >> RightOperand;

    switch (Operator){
        case '+': Result = LeftOperand + RightOperand;break;
        case '-': Result = LeftOperand - RightOperand;break;
        case '*': Result = LeftOperand * RightOperand;break;
        case '/': Result = LeftOperand / RightOperand;break;
        default : cout << Operator << " is unrecognized operation.\n";
                    return 1;
    }

    // char Choice;
    // float Area;

    // cout << " Program Calculate Area " << endl;
    // cout << "1. Circle" << endl;
    // cout << "2. Rectangle" << endl;
    // cout << "3. Exit" << endl;
    // cout << "Enter you choose number:  ";
    // cin >> Choice;

    // if (Choice == '1'){
    //     float Radius;
    //     cout << "\nEnter radius : ";
    //     cin >> Radius;
    //     Area = 3.14159F * Radius * Radius;
    //     cout << "Area of Circle = " << Area << endl;
    // }
    // else if (Choice == '2'){
    //     float Length,Width;
    //     cout << "\nEnter lenght and width : ";
    //     cin >> Length, Width;
    //     Area = Length * Width;
    //     cout << "Area of Rectangle = " << Area << endl;
    // }
    // else if (Choice == '3')
    //     cout << "\n . . . Exit Program . . .\n";
    // else    
    //     cout << "\nYou choose out of range is not process.\n";
    
    cout << LeftOperand << " " << Operator << " ";
    cout << RightOperand << " equals " << Result << endl;
    return 0;
}