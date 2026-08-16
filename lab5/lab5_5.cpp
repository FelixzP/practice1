#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    float Radius,Angle;
    const int WIDTH = 8;

    cout << "+" << setfill('=')<<setw(46)<< "+" <<endl;
    cout << ":   Angle   :   Sine   :   Cosine :  Tangent :"<< endl;
    cout << "+" << setfill ('=') << setw(46) <<"+"<< endl;
    cout << setfill(' ');
    cout << fixed << setprecision(2);
    for(Angle =0.0; Angle <= 360.0; Angle += 20){
        Radius = (Angle > 0.0)? (180.0f*3.14f) /Angle : 0.0;
        cout << " : " << setw(WIDTH) << Angle;
        cout << " : " << setw(WIDTH) << sin(Radius);
        cout << " : " << setw(WIDTH) << cos(Radius);
        cout << " : " << setw(WIDTH) << tan(Radius);
        cout << " : " << endl;
    }   
    cout << "+" << setfill('=') << setw(46) << "+" << endl;
}