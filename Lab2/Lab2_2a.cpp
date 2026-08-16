#include <iostream>
using namespace std;

int main(){
    short i = 32760;
    for (long j = 0; j < 100; j++)
    {
        cout << i++ << " " << i+j << endl;
    }
    
    return 0;
}