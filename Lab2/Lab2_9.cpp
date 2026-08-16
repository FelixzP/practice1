#include <iostream>
#include <iomanip> //สำหรับทำให้แสดงทศนิยม
using namespace std;

int main(){
    string Id = "6906021411022";
    string Name = "Peeranat A.";
    float Gpa = 4.00;
    float Age = 20;
    string Department = "Information Technology";
    string Room = "214";
    cout << "Student Code : " << Id << endl;
    cout << "Student Name : " << Name << endl;
    cout << "Department   : " << Department << endl;
    cout << "        Room : " << Room << endl;
    cout << "        Age  : " << Age << endl;
    cout << fixed << setprecision(2);
    cout << "        Gpa  : " << Gpa << endl;

}