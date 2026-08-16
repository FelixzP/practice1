#include <iostream>
using namespace std;

int main(){
    int Number;
    while(true){
        cin >> Number;
        if(Number == 0)break;
        cout << "You entered " << Number << endl;
    }
    cout << "End Program\n";
    return 0;
}