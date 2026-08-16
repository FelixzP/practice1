#include <iostream>
using namespace std;
void fn1(char,float);
void fn2(int,string);
void fn3(bool);

int main(){
    fn1('S',10.0); //fn1 T
    fn1(' ',10.0); //fn2 F
    fn2(2,"S-123"); //fn2 T
    fn2(-5,"A-456"); //fn2 F
    fn3(!false);
    fn3(true && false);
    return 0;
}

void fn1(char status,float pay){
    float tax;
    if(status == 'S') tax = 0.20 * pay ;else tax = 0.14 * pay;
    cout << "sol 1 : " << status << " tax = " << tax << endl;
    tax = ((status == 'S') ? 0.20*pay : 0.14 * pay);
    cout << "sol 2 : " << status << " tax = " << tax << endl;
}

void fn2(int pastdue, string account_no){
    float credit;
    if(pastdue > 0){
        cout << "Account number" << account_no << "is overdue";
        credit = 0;
    }
    else credit = 1000.0;
    cout << "credit " << credit << endl;
}

void fn3(bool circle){
    float area;
    if(circle){
        float radius;
        cin >> radius;
        area = 3.14159 * radius * radius;
        cout << "Area of circle = " << area << endl;
    }else{
        float length,width;
        cin >> length >> width;
        area = length * width;
        cout << "Area of rectangle = " << area << endl;
    }
}