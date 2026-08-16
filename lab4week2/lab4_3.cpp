#include <iostream>
using namespace std;
int main(){
    char ch ;
    cout << "Enter a character :";
    cin >> ch;
    cout << endl;
    cout << ch << endl;
    if (ch>='a'&&ch<='z') cout << ch << " is lower character.";
    else if (ch>='A'&&ch<='Z') cout << ch << " is upper character.";
    else if ((ch>='0'&&ch<='9') || ch == '.') cout << ch << " is numeric.";
    else if (ch==' ') cout << ch << " is numeric.";
    else cout << ch << " is special character";
    cout << endl;
}