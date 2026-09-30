#include <iostream>
using namespace std;

int main(){
    int A[]={1,2,3};
    int Square[10],i=99;
    for (int i : A)
    {
        cout << i << endl;
    }
    for (int i=0; i < 10;i++){
        Square[i] = i*i;
        cout << i << ":" << Square[i] << " ";
    }
    cout << "\nAfter : " << i << endl;
    cout << endl;
    return (0);
}