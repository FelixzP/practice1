#include <iostream>
#include <cmath>
using namespace std;

void fn1(int);
void fn2(int);
void fn3(float);
void fn4(float,char);
void fn5(float,float);

int main(){
    fn1(-2);   //fn1 true
    fn1(0);    //fn1 false
    fn2(1);    //fn2 true
    fn2(0);    //fn2 false
    fn3(2.1);  //fn3 true
    fn3(3.1);  //fn3 false
    fn4(2.1,'R');     //fn4 true
    fn4(1000.0,'S');  //fn4 false
    fn5(1,4);     //fn5 true
    fn5(-2.5,4);  //fn5 false
    return 0;
}

void fn1(int x){

    if (x<0) cout << x << endl;
}
void fn2(int pastdue){
    if (pastdue > 0){
        int credit = 0;
        cout << credit << endl;
    }
}
void fn3(float x){
    if(x <= 3.0){
        float y = 3 * sqrt(x);
        cout << y << endl;
    }
}
void fn4(float balance,char status){
    if((balance < 1000.0 ) || (status == 'R')){
        cout << balance << endl;
    }
}
void fn5(float a,float b){
    if ((a >=0 ) && (b <= 5)){
        float xmid = (a+b) / 2;
        float ymid = sqrt(xmid);
        cout << ymid << endl; 
    }
}