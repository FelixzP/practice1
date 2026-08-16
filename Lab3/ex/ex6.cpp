#include <iostream>
using namespace std;

int main(){
    int height,ticket_price;
    cout << "Enter Ticket Price : "; 
    cin >> ticket_price; 
    cout << "Enter Height (cm) : ";
    cin >> height;
    cout << "You are [adult/kid].\n";
    cout << "Total Price : " << (height >= 150?ticket_price:ticket_price/2);
    return 0;
}