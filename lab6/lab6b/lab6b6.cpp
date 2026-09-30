#include <iostream>
using namespace std;

void selectionsort(int data[],int size);
void swap(int &n1, int &n2);
void bubblesort(int data[],int size);

int main(){
    int data[]={2,6,4,9,1};
    // selectionsort(data,size(data));
    bubblesort(data,size(data));
    cout << endl;
    for (int i = 0; i < size(data); i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
    return 0;
}

void swap (int &n1,int &n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
}
void selectionsort(int data[],int size){
    int n = size;
    int min;
    for (int i = 0; i < n-1; i++)
    {
        min = i;
        for (int j =i+1; j < n; j++)
        {
            if(data[min] < data[j]){ //ตัวการสลับค่าตัวเลข
                min = j;
            }
        }
        if (i < min)
        {
            swap(data[min],data[i]);
            
        }
        
    }
    
}
void bubblesort(int data[],int size){
    int flag = 1;
    int n = size;
    int e = n-1;
    while(flag == 1){
        flag= 0;
        for (int j = 0; j < e; j++)
        {
            if(data[j]<data[j+1]){
                swap(data[j], data[j+1]);
            //     for (int i = 0; i < size; i++) // check bubblesort debug
            //    {
            //      cout << data[i] << " ";
            //     }
            //     cout << " debug \n";
               flag =1;
            }
        }
        e = e-1;
    }
}