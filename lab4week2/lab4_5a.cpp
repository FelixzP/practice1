#include <iostream>
using namespace std;
void fn1();
void fn2();
void fn3();
int main(){
    fn1();
    fn2();
    fn3();
    return 0;
}
void fn1(){
    int digit;
    for(digit = 0;digit <= 9;++digit){
        cout << digit << " ";
    }
    for(digit = 0;digit <= 9;digit++){
        cout << digit << " ";
    }
    cout << ":" <<digit << endl;
}

void fn2(){
    for(int n= 0; n <= 20;n++){
        cout << n << " ";
    }
    // cout << n << endl;

    cout << endl;
    for(int n= 10; n >= 1;n--){
        cout << n << " ";
    }
    cout << endl;
}

void fn3(){
    int sum = 0;
    for(int n = 10; n>= 1;n--){
        cout << n << ":";
        sum = sum + n ;
        cout << sum << endl;
    }
    cout << "sum = " << sum << endl;
}