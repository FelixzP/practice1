#include <iostream>
#include <fstream>
#include <iomanip>
#include <time.h>

using namespace std;

int main(){
    string FileName;
    ofstream Outfile;
    ifstream InFile;
    int Value;
    srand(time(0));
    cout << "Enter file name:";
    cin >> FileName;
    Outfile.open(FileName,ios_base::app);
    cout << "Now open file " << FileName << " for write" << endl;
    for (int i = 1; i <= 10; i++)
    {
        Value = rand()% 100;
        cout << left << setw(5) << Value;
        Outfile << Value << " ";
    }
    Outfile << endl;
    cout << endl;
    Outfile.close();

    InFile.open(FileName, ios_base::in);
    cout << "Now open file " << FileName << " for read.\n";
    for (int i = 0; !InFile.eof(); i++)
    {
        InFile >> Value;
        cout << left << setw(5) << Value;
        if(i % 10 == 9) cout << endl;
    }
    
    InFile.close();
    return 0;
}    