#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x1,y1,x2,y2,Dt,De;
    cout << "Taxicab geometry calculator " << endl;
    cout << "Enter Start point x1 y1 : ";
    cin >> x1 >> y1;
    cout << "Enter End point   x2 y2 : ";
    cin >> x2 >> y2;
    Dt = abs(x1-x2) + abs(y1-y2);
    cout << "Dt = " << Dt << endl;
    De = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
    cout << "De = " << De << endl;
    return 0;
}