#include <iostream>
using namespace std;

int main(){
    int Listsize = 5;
    int ValuesProcessed =0;
    float ValueSum = 0;
    cout << "Please enter " << Listsize << " numbers" << endl;
    while(ValuesProcessed < Listsize){
        float Value;
        cin >> Value;
        ValueSum += Value;
        ++ValuesProcessed;
    }
    float Average = ValueSum /ValuesProcessed;
    cout << "Average : " << Average <<endl;
    return 0;
}