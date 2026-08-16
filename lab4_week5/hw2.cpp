#include <iostream>

using namespace std;

int main(){
    int line;
    char inputchar;
    cout << "Input number line : ";
    cin >> line;
    cout << "Input character   : ";
    cin >> inputchar;
    for(int i=1;i<=line;i++){
        for(int c=1;c<=i;c++){
            cout << inputchar ;
        }
        cout << endl;
    }
    return 0;
}