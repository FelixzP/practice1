#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    unsigned int seed;
    int z1;
    cout << "To initialize the random number generator\n";
    cout << "Please enter an integer value : ";
    cin >> seed ;
    srand(seed);
    z1 = rand();
    cout << z1 << ":" << (z1%8)+5 << endl;
    // 5 12
    // 5 6 7 8 9 10 11 12

    return 0;
}