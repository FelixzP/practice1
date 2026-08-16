#include <iostream>
using namespace std;

int main(){
    float type,Rtotal,R1,R2,R3;
    cout << "R1\n"; cin >> R1;
    cout << "R2\n"; cin >> R2;
    cout << "R3\n"; cin >> R3;
    cout << "type\n"; cin >> type;
    
    if (type == 1) {Rtotal = R1+R2+R3;cout << Rtotal << "Serial Resistance";}
    
    if (type == 2) {Rtotal = 1.0/((1.0/R1)+(1.0/R2)+(1.0/R3));cout << Rtotal << "Parallel Resistance";}
    if(type != 1 && type != 2) {cout << "Incorrect Circuit Type";}
}