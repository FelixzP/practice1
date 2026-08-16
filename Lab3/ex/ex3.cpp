#include <iostream>
using namespace std;

int main(){
    float c,f;
    cout << "Enter F:";
    cin >> f;
    c = (5.0/9.0) * (f-32);
    // cout << "debugg" <<(5.0/9.0) <<endl;
    cout << "F"  << " convert to C = " << c << endl; 
    
    f = (9.0/5.0) * c+32;
    cout << "C"  << " convert to F = " << f << endl;
    
    return 0;
}

/*<< f*/
/*<< c*/