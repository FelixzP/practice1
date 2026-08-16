#include <iostream>
using namespace std;

int main(){
    string Id;
    string Name;
    int Age;
    cout << "Enter Id   : ";
    cin >> Id;
    cout << "Enter name : ";
    cin.ignore();
    getline(cin,Name); //ใช้ในกรณีรับค่าข้อความทั้งบรรทัด
    // cin >> Name;
    cout << "Enter Age : "; cin >> Age;
    
    cout << "\nHello, " << Name << "." << endl;
    cout << "You have " << Age << " year old."<< endl;
    cout << "You are beginner programmer." << endl;
    return 0; 
}