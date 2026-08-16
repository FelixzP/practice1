#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string Str1 = "Micro";
    string Str2 = Str1 + "Soft";
    string Str3;

    cout << "Value Str1 = " << Str1.c_str();
    cout << ", Length Str1 =" << strlen(Str1.c_str());
    cout << "Value Str1 = " << Str1.c_str();
    cout << ", Length Str1 =" << Str1.length();
    cout << "Value Str1 = " << Str1;
    cout << ", Length Str1 =" << Str1.size();
}