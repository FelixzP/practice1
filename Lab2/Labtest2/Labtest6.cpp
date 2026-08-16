#include <iostream>
using namespace std;
// #define Pi = 3.1415;
int main(){
    double radius,area,circumference;
    double Pi = 3.1415;
    cout << "Program Calculate Area Circle." << endl;
    cout << "Circle radius (real number) ? "; cin >> radius;
    cout << "\n";

    area = Pi * (radius*radius);
    circumference = 2*(Pi*radius);
    cout << "Area of circle with radius " << radius << " is " << area <<endl;
    cout << "Circumference" << " is " << circumference;
    return 0;
}