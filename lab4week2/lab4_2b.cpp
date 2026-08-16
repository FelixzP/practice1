#include <iostream>
using namespace std;
void cal_grade(int);
void greeting_time(float);
int main(){
    // cal_grade(81);
    // cal_grade(79);
    // cal_grade(71);
    // cal_grade(70);
    // cal_grade(69);
    greeting_time(24.01);
    greeting_time(23.99);
    greeting_time(8.01);
    greeting_time(13.15);
    greeting_time(22.44);
    greeting_time(23.59);
}
void cal_grade(int mark){
    if (mark >= 80)
        cout << "A";
    else if (mark >= 70)
        cout << "B";
    else if (mark >= 60)
        cout << "C";
    else if (mark >= 50)
        cout << "D";
    else
        cout << "D";
    cout << endl;
}
void greeting_time(float time){
    int minute = (time - (int)time) * 100;
    cout << "time = " << time << " ";
    cout << "minute " << minute << "\t";

    if ((time >= 0.00) && (time < 24.00) && (minute >= 0) && (minute < 59)){
        if((time>0.00) && (time<12.00)){
            cout << "Good Moring";
        }else if ((time >= 12.00) && (time <18.00)){
            cout << "Good Afternoon";
        }else if ((time >= 18.00) && (time <24.00)){
            cout << "Good Evening";
        }
    }
    else{
        cout << "Time id out of range";
    }
    cout << endl;
}