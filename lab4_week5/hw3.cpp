#include <iostream>
using namespace std;

int main(){
    char inputch;
    int upper = 0, lower = 0, space = 0, special = 0;
    int total = 0;
    cout << "Enter message : ";
    
    while(cin.get(inputch) && inputch != '\n'){
        total++;

        if (inputch >= 'A' && inputch <= 'Z')
            upper++;
        else if (inputch >= 'a' && inputch <= 'z')
            lower++;
        else if (inputch == ' ')
            space++;
        else
            special++;
    }
    cout << "Total " << total << " characters." << endl;
    cout << "Your message has " << upper << " upper characters." << endl;
    cout << "Your message has " << lower << " lower characters." << endl;
    cout << "Your message has " << space << " space characters." << endl;
    cout << "Your message has " << special << " special characters." << endl;
    return 0;
}