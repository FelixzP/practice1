#include <iostream>
#include <cstring>
using namespace std;
void displaychar(char[],int);
int main(){
    char Name[20]= "123456";
    strcpy(Name, "Bjarne Stoustrup");
    cout << Name << endl;
    displaychar(Name,size(Name));
    strcpy(Name,"Hello!");
    cout << Name << endl;
    displaychar(Name,size(Name));
    return 0;
}

void displaychar(char text[],int size){
    // cout << sizeof(text) << endl;
    for (int i = 0; i < size; i++)
    {
        cout << i << ":" << text[i] << endl;
    }
    
}
