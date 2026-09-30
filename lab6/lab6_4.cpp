#include <iostream>
using namespace std;
int main(){
    char Name[20];
    cout << "Input First Word:";
    cin.getline(Name,20);
    cout << "Name = " << Name << endl;

    cout << "Input Any Word:";
    cin.getline(Name,20);
    cout << "Name = " << Name << endl;

    cout << "\nDebug" << endl;

    for (int i = 0; i < size(Name); i++){
        if(Name[i] == '\0'){
            cout << "["<< i <<"]=\\0" << endl ;
        }
        else{
            cout << "["<< i << "]=" << Name[i] << endl;
        }
    }
    return 0;
}