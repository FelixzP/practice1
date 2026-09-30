#include <iostream>
#include <cstring>
#include <fstream>
#include <iomanip>

using namespace std;
int Menu();
void AddStudent(string FN); //FN mean FileName
void DisplayStudent(string FN);
void ReportGradeStudent(string FN);
void SearchStudentByName(string FN);

int main(){
    const string FileName = "studentgrade.dat";
    int c ;
    do{
        c = Menu();
        switch(c){
            case 0:break;
            case 1:AddStudent(FileName);
                   break;
            case 2:DisplayStudent(FileName);
                   break;
            case 3:ReportGradeStudent(FileName);
                   break;
            case 4:SearchStudentByName(FileName);
                   break;
            default: cout << "Error try again\n";
            
        }
    }while(c!=0);
    cout << "Exit Program." << endl;
    return 0;
}

int Menu(){
    int Choose;
    cout << "Program Add Display Student Data\n";
    cout << "================================\n";
    cout << ": Menu\n";
    cout << "================================\n";
    cout << ": 0 - Exit\n";
    cout << ": 1 - Add Student\n";
    cout << ": 2 - Display Student\n";
    cout << ": 3 - Report Student\n";
    cout << ": 4 - Sreach Student\n";
    cout << "================================\n";
    cout << "Enter choose : ";
    cin >> Choose;
    return (Choose);
}
void AddStudent(string FN){
    ofstream OutFile(FN,ios_base::out | ios_base::app);
    if(OutFile.is_open()){
        string Id, Name;
        int Score;
        cout << "Add Student\n";
        cout << "Enter Id : ";
        cin >> Id;
        cout << "Enter name : ";
        cin >> Name;
        cout << "Enter Score :";
        cin >> Score;

        OutFile << Id << " " << Name << " " << Score << endl;

        OutFile.close();
    }
}
void DisplayStudent(string FN){
    ifstream InFile(FN,ios_base::in);
    string Id,Name;
    int n = 0;
    if(InFile.is_open()){
        cout << "List Student\n";
        cout << "=======================================================\n";
        cout << "No. ID Name\n";
        cout << "=======================================================\n";
        while(!InFile.eof()){
            
            n = n + 1;
            cout << setw(10) << n 
                 << setw(10) << Id 
                 << setw(10) << Name << endl;
            InFile >> Id >> Name;
        }
        InFile.close();
    }else{
        cout << "File could not opened." << endl;
    }
}
void ReportGradeStudent(string FN){
    ifstream InFile(FN,ios_base::in);
    string Id,Name,calGrade;
    int Score;
    int n = 0;
    if(InFile.is_open()){
        cout << "List Student\n";
        cout << "=======================================================\n";
        cout << "No. ID Name Score Grade\n";
        cout << "=======================================================\n";
        while(!InFile.eof()){
            n = n + 1;
            if(Score >=80){calGrade = "A";}
            else if(Score >=70){calGrade = "B";}
            else if(Score >=60){calGrade = "c";}
            else if(Score >=50){calGrade = "D";}
            else {calGrade = "D";}
            
            cout << setw(10) << n 
            << setw(10) << Id 
            << setw(10) << Name
            << setw(10) << Score 
            << setw(10) << calGrade << endl;
            InFile >> Id >> Name >> Score;
        }
        InFile.close();
    }else{
        cout << "File could not opened." << endl;
    }
}

void SearchStudentByName(string FN){
    ifstream InFile(FN,ios_base::in);
    string Id,Name,calGrade,inputName;
    int Score;
    int n = 0;

    if(InFile.is_open()){
        cout << "Sreach Result\n";
        cout << "Enter Name : ";
        cin >> inputName;
        cout << "Debug " << strcmp("A","B") <<"\n"; // 0 = equal -1 = not equal
        cout << "=======================================================\n";
        cout << "No. ID Name Score Grade\n";
        cout << "=======================================================\n";
        while(!InFile.eof()){
            
            // cout << strcmp(inputName.c_str(),Name.c_str())<<endl;
            if(strcmp(inputName.c_str(),Name.c_str())==0){
            n = n + 1;
                if(Score >=80){calGrade = "A";}
                else if(Score >=70){calGrade = "B";}
                else if(Score >=60){calGrade = "c";}
                else if(Score >=50){calGrade = "D";}
                else {calGrade = "D";}
            
            cout << setw(10) << n 
            << setw(10) << Id 
            << setw(10) << Name
            << setw(10) << Score 
            << setw(10) << calGrade << endl;
            }
            
            InFile >> Id >> Name >> Score;
            
        }
        InFile.close();
    }else{
        cout << "File could not opened." << endl;
    }
    cout << "=======================================================\n";
}