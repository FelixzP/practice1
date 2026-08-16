#include <iostream>
using namespace std;

int main(){
    int length,width,area,perimeter;
    cout << "Program Calculate Rectangle" << endl;
    cout << "Enter Length :" ;cin >> length;
    cout << "Enter Width :" ;cin >> width;

    area = length * width;
    perimeter = 2 * (length + width);
    cout << "Area of Rectangle = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
    return 0;
}