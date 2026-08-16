#include <iostream>
using namespace std;

int main(){
    float X;
    cout << "Enter Value X :";
    cin >> X;
    float Result (0);
    Result  = X*X*X+3*X-10;
    cout << "\n Result of X*X*X+3*X-10 = "
        << Result << endl; //สามารถละ cout ได้หากยังคงใช้แสดงผลเหมือนเดิม
    return 0;
}