#include <iostream>
using namespace std;

int main(){
    char Ch;
    string Message;
    cout << "Enter character : ";
    cin >> Ch;
    cout << "Ch = " << Ch << endl;
    if(isalnum(Ch)){
        Message = "alnum";
        if(isalpha(Ch)){
            if(isupper(Ch)){
                Message = "upper character";
                cout << "'" << Ch << "' convert to lower " << (char)tolower(Ch) << endl; 
            }
            else{
                Message = "lower character";
                cout << "'" << Ch << "' convert to upper " << (char)toupper(Ch) << endl; 
            }
        }else if(isdigit(Ch)){
            Message = "digit";
        }
    }else{
        Message = "special character";
    }
    cout << "'" << Ch << "' is " << Message << endl;
    return 0;
}