#include <iostream>
#include <iterator>
using namespace std;

int main(){
    int A[5] = {16,12,6,8,14};
    int s = sizeof(A)/sizeof(A[0]);
    char B[5] = {'A','E','I','O','U'};
    float C[10] = {0.66,0.77,0.88,0.99,1.11,0,0,0,0};

    cout << "Address" << &B << endl;
    cout << sizeof(A)/sizeof(A[0]) << endl; //วิธีการหา index แบบโบราณ
    for(int i = 0 ; i < sizeof(B) ;i++){
        cout << i  << ": " << &B+i << "|" << B[i] << endl;
    }
    for(int i = 0 ; i < sizeof(B) ;i++){
        cout << i  << ": " << &C[i] << "|" << C[i] << endl;
    }
    cout << "For each " << endl;
    for (int i:A){
        cout << i << endl;
    }
    
    return 0;
    
}