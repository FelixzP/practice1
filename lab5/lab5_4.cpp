#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char Str1[30], Str2[30];
    cout << "Enter string 1 :";
    cin >> Str1;

    cout << "Enter string 2 :";
    cin >> Str2;

    // cout << "strcat(Str1, Str2) = " << strcat(Str1, Str2) << endl;
    // cout << Str1 << " : " << Str2 << endl;
    cout << "strchr(Str1, 's') = " << strchr(Str1, 's') << endl;
    cout << Str1 << " : " << Str2 << endl;
    cout << "strcmp(Str1, 's') = " << strcmp(Str1, Str2) << endl;
    cout << Str1 << endl;
    for(int N=strlen(Str1)-1;N>=0;N--){
        cout << Str1[N];        
    }
    cout << endl;
}