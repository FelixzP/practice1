#include <iostream>
using namespace std;

int main(){
    int year , maxday;
    cout << "Enter year : ";
    cin >> year;
    if((year%4) == 0){
        /* Block of True Condition*/
        cout << "In " << year << " is leap year";
        maxday = 29;
    }else{
        /*Block of False Condition*/
        cout << "In " << year << " is not leap year";
        maxday = 28;
    }
    cout << " and February has " << maxday << " day.\n";
    return 0;
}