#include <iostream>
#include <iomanip>
using namespace std;
void Sort(int temp[],const int max);
void Swap(int &n1,int &n2);
int main(){
    const int max = 10;
    int data[max] = {50,0,44,7,5,100,12,36,72,23};
    cout << "Data before sort in array\n";
    for (int n = 0; n < max; n++)
    {
        cout << setw(5) << data[n];
    }
    cout << " Start Sort\n";
    Sort(data,max);
    cout << "Data After Sort finish\n";
    for (int n = 0; n < max; n++)
    {
        cout << setw(5) << data[n];
    }
    
}
void Sort(int temp[],const int max){
    int i , j,n;
    for (i = 0; i < max-1; i++)
    {
        n = i;
        for (int j = i; j  < max; j++)
        {
            if(temp[n] >temp[j]) n = j;
        }
        if(n!= i){ 
            Swap(temp[i],temp[n]);
            for (int n = 0; n < max; n++)
            {
                cout << setw(5) << temp[n];
            }
            cout << " --- Data After Swap finish\n";
        }
    }
    
}
void Swap(int &n1,int &n2){
    int temp;
    temp = n1;
    n1= n2;
    n2 = temp;
}