#include <iostream>
using namespace std;

int main(){
    float vat,price,allvat;
    cout << "VAT Calculator \n";
    cout << "==================================\n";
    cout << "Enter PRICE :";cin >> price;
    cout << "Enter VAT :";cin >> vat;
    cout << "=\n";
    vat = vat / 100;
    allvat = price + (price * vat);
    cout << "Net Price (Including VAT) :" << allvat << endl;
    cout << "Price Excluding VAT = " << price << endl;
    cout << "VAT Amount = " << price*vat << endl;
    cout << "==================================";

}