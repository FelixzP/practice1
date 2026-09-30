#include <iostream>
#include <iomanip>
#include <time.h>
// #include <iterator>
using namespace std;
int main(){
    int Data[10];
    //srand((unsigned int )time(0));
    srand(13);
    for (int i = 0; i < 10; i++){ Data[i] = ((rand()%30)+1);}
    cout << "Element Value Histogram" << endl;
    for (int i = 0; i < size(Data); i++)
    {
        cout << setw(5) << i << " " << setw(4) << Data[i] << " ";
        // for (int k = 0; k < Data[i]; k++) cout << "*";
        for (int k =0; k<30 ; k++) 
        if(k < (30-Data[i]))cout << " ";else cout << "*";
        cout << endl;
    }
    
    // ลองแปลงเป็น histogram 30 แนวตั้ง
    return 0;
}
