#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "input : ";
    cin >> num ; //input
    int a = num % 10; //แยกหลักหน่วยโดยการหารเอาเศษ
    int b = (num / 10) % 10; //แยกหลักสิบโดยการหารเอาเศษโดยหารธรรมดาเพื่อหาเช่น 1010 / 10 = 101 /10 =1.01
    int c = (num / 100) % 10; //แยกหลักร้อยโดยการหารเอาเศษ
    int d = (num / 1000) % 10; //แยกหลักพันโดยการหารเอาเศษ
    cout << "digit 1 = " << a  << endl;
    cout << "digit 2 = " << b  << endl;
    cout << "digit 3 = " << c  << endl;
    cout << "digit 4 = " << d  << endl;
    int ans1 = a * 1;
    int ans2 = b * 8;
    int ans3 = c * (8*8);
    int ans4 = d * (8*8*8);
    int all = ans1 + ans2 +ans3 +ans4;
    cout << "1 = " << ans1  << endl;
    cout << "2 = " << ans2  << endl;
    cout << "3 = " << ans3  << endl;
    cout << "4 = " << ans4  << endl;
    cout << "Answer 8 to 10 :" << all;
}