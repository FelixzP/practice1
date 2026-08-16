#include <iostream>
using namespace std;
int main(){
    char Ch;
    int Count =0;
    string Str;
    cout << "Enter String : ";
    while((Ch = cin.get())!='.'){
        Count++;
        Str += Ch;
    }
    cout << "\nLength of String("<< Str << ") is ";
    cout << Count << endl;
}