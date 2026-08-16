#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string StrValue;
    int IntValue;
    float FloatValue;

    cout << "Enter string number : ";
    cin >> StrValue;
    IntValue = atoi(StrValue.c_str());
    FloatValue = atof(StrValue.c_str());
    cout << "Convert to Integer = " << IntValue << endl;
    cout << "Convert to Float   = " << FloatValue << endl;

    srand(IntValue);
    cout << "Now randow integer number 100 number:" << endl;
    int vmin=99999, vmax=0;
    int rmin = -10, rmax=10;
    for (long long N= 1,Num;N <= 500 ; N++){
        Num = (rand()%(abs(rmin) + abs(rmax)+1))+rmin; // 0 - 5 [0 1 2 3 4 5] 0-10 (-5 - 5)
        if(Num > vmax) vmax = Num;
        if(Num < vmin) vmin = Num;
        cout << setw(6)<< Num << " ";
        if(N%10 == 0) cout << endl;
    }
    cout << endl;
    cout << "min = " << vmin << endl;
    cout << "max = " << vmax << endl;
    return 0;
}
// ข้อสอบไฟนอลกำหนดสุ่มช่วงค่า rand