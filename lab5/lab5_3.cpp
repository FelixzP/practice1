#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double Value;
    cout << "Enter floating number : ";
    cin >> Value;

    cout << "Ceiling of " << Value << " is " << ceil(Value) << endl;
    cout << "floor   of " << Value << " is " << floor(Value) << endl;
    cout << "Abs     of " << Value << " is " << abs(Value) << endl;
    
    return 0;
}