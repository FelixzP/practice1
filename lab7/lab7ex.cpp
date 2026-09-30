#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
    string fID,ID,Name,Surname;
    int Score;
    ifstream InFile("save.info",ios_base::in);
    ofstream OutFile("temp.tmp",ios_base::out);
    fID = "S-122";
    InFile >> ID >> Name >> Surname >> Score;
    while(!InFile.eof()){
        if (strcmp(fID.c_str(),ID.c_str()) != 0){
            cout << ID << endl;
            // cout << "*";
            OutFile << ID << " " << Name << " " << Surname << " " << Score << endl;
        }else{
            cout << "Del " << ID << endl;
        }
        InFile >> ID >> Name >> Surname >> Score;
    }
    InFile.close();
    rename("temp.tmp","s_new.data");
}