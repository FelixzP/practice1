#include <iostream>
#include <cstdint>
using namespace std;

int main(){
    cout << "boot \t= " << sizeof(bool) << " bytes" << endl;
    cout << "char \t= " << sizeof(char) << " bytes" << endl;
    cout << "short \t= " << sizeof(short) << " bytes" << endl;
    cout << "int \t= " << sizeof(int) << " bytes" << endl;
    cout << "long \t= " << sizeof(long) << " bytes" << endl;
    cout << "int64 \t= " << sizeof(int64_t) << " bytes" << endl; //ถามอาจารย์เรื่องต้อง import <cstdint>
    cout << "float \t= " << sizeof(float) << " bytes" << endl;
    cout << "double \t= " << sizeof(double) << " bytes" << endl;
    cout << "long double \t= " << sizeof(long double) << " bytes" << endl;
    cout << "long long \t= " << sizeof(long long) << " bytes" << endl;
    return 0;
}