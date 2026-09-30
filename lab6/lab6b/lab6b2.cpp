#include <iostream>
#include <iomanip>
// #include <iterator> //กรณีที่ใช้คำสั่ง size ไม่ได้
using namespace std;
void func1();
void func2();
void func3();

int main(){
    // func1();
    // func2();
    func3();
}
void func1(){
    const int ROW=3,COL=5;
    int A[ROW][COL];
    int r,c;
    cout << "Size A:" <<size(A) << endl;
    cout << "Size A[0]:" <<size(A[0]) << endl;
    r = sizeof(A)/sizeof(A[0]);
    c = sizeof(A[0])/sizeof(A[0][0]);
    cout << r << "\n" << c << "\n";
    // cout << "A[0][0]:" << A[0][0] << endl;
    
    for (int r = 0; r < size(A); r++){
            for (int c = 0; c < size(A[0]); c++)
            {
                cout << setw(8) <<A[r][c];
            }
            cout << endl;
        }
        
    
    
    // for (auto && i :A)
    // {
    //     for (auto j : i)
    //     {
            
    //     }
        
    // }
    
}
void func2(){
    char CH[3][3] = {{'S','U','M'},{'M','O','N'},{'F','R','I'}};
    for (int i = 0; i < size(CH); i++)
    {
        for (int j = 0; j < size(CH[0]); j++)
        {
            cout << CH[i][j];
        }
        cout << endl;
        
    }
    
}

void func3(){
    char Month[12][10]={
        "January","February","March","Apirl",
        "May","June","July","August",
        "September","Octorber","November","December"
    };
    for (int i = 0; i < size(Month); i++)
    {
        cout << Month[i] << endl;
    }
    for (int r = 0; r < size(Month); r++)
    {
        for (int c = 0; c < size(Month); c++)
        {
            cout << "[]" << Month[r][c] << "]";
        }
        cout << endl;
    }
    
}