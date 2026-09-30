#include <iostream>
#include <iomanip>
using namespace std;

void DisplayArray(int Temp[][4],int r , int c);

int main(){
    int Data[3][4];
    for (int r = 0; r < size(Data); r++)
    {
        for (int c = 0; c < size(Data[0]); c++)
        {
            Data[r][c] = (r+1)*(c+1);    
        }
        
    }
    cout << "Values in the array by row are :" << endl;
    DisplayArray(Data,size(Data),size(Data[0]));
}
void DisplayArray(int Temp[][4],int r, int c){
    // cout << sizeof(Temp)/sizeof(Temp[0]);
    // cout << sizeof(Temp[0]) << endl;
    for (int x = 0; x < r; x++)
    {
        for (int y = 0; y < c; y++)
        {
            cout << setw(5) << Temp[x][y];   
        }
        cout << endl;
    }
}