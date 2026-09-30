#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>

using namespace std;

void GetandWrite(ofstream &OutFile);
void ReadandDisplay(ifstream &InFile);

int main(){

    string FileName;
    ifstream InFile;
    ofstream OutFile;
    cout << "Enter file Name : ";
    cin >> FileName;

    OutFile.open(FileName);
    GetandWrite(OutFile);
    OutFile.close();

    InFile.open(FileName);
    ReadandDisplay(InFile);
    InFile.close();
    
    return 0;

}
void GetandWrite(ofstream &OutFile){
    string Id, Name, Surname;
    int Score;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Student No. " << i << endl;
        cout << "     Enter ID : ";
        cin >> Id;
        cout << "   Enter Name : ";
        cin >> Name;
        cout << "Enter Surname : ";
        cin >> Surname;
        cout << "  Enter Score : ";
        cin >> Score;
        OutFile << Id << " "<< Name << " "<< Surname << " "<< Score << endl;
    }
    
}
void ReadandDisplay(ifstream &InFile){
    string Id, Name, Surname;
    int Score;
    for (int n = 1; n <= 3; n++)
    {
        InFile >> Id >> Name >> Surname >> Score;
        cout << Id << " " << Name << " " << Surname << " " << Score << endl; 
    }   
    
}