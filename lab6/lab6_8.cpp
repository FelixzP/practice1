#include <iostream>
using namespace std;
void ModifyArray(int Temp[],int size);
void ModifyElement(int Temp);
int main(){
    int Data[] = {1,2,3,4,5};
    int s = sizeof(Data)/sizeof(Data[0]);
    cout << "Effect of passing entrie array pass by ref\n";
    cout << "Original array value :";
    for (int i = 0; i < s; i++)
    {
        cout << Data[i] << " ";
    }
    cout << endl;

    ModifyArray(Data,s);
    //after modify
    cout << "Modify array value :";
    for (int i = 0; i < s; i++)
    {
        cout << Data[i] << " ";
    }
    cout << endl;
    cout << "Effect of passing entrie array pass by value\n";
    cout << "Data[3] before modify   :";
    cout << Data[3] << endl;

    ModifyElement(Data[3]);
    cout << "Data[3] After modify    :";
    cout << Data[3] << endl;
    return 0;
}

void ModifyArray(int Temp[],int size){
    for (int i = 0; i < size; i++)
    {
        Temp[i] *=2;
    }
    
}

void ModifyElement(int Temp){
    Temp *=2;
}
