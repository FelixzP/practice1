#include <iostream>
using namespace std;
int main(){
    char choice;
    cout << "Enter choice [R,W]";
    cin >> choice;

    // choice = toupper(choice);
    switch(choice){
            case 'r':
            case 'R':cout << "RED";     break;
            case 'W':cout << "WHITE";   break;
            default : cout << "I don't know.";
    }
    cout << endl;
    if (choice == 'R' || choice == 'r') cout << "RED";
    else if (choice == 'W') cout << "WHITE";
    else cout << "I don't know.";
    cout << endl;
    return 0;
}