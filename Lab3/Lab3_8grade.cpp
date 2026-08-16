#include <iostream>
using namespace std;

int main(){
    int score ;
    string grade;
    cout << "input score :";
    cin >> score;
    grade = (score < 50?"Fail ":"Pass ");
    grade += (score < 50?"F":(score < 60?"D":(score <70?"C":(score<80?"B":"A")))); //ternary operator
    cout << score << " is " << grade << endl; 
}