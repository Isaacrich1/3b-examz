#include <iostream>
using namespace std;

int main(){

    double balance, waterUnits, totalCost, surcharge, vat, remainingBalance;

    
    cout << "Enter the amount of money loaded onto your account (UGX): ";
    cin >> balance;


    cout << "Enter the number of water units consumed: ";
    cin >> waterUnits;

   
    if (waterUnits <= 10) {
        totalCost = waterUnits * 150;
    } else if (waterUnits <= 20) {
        totalCost = 10 * 150 + (waterUnits - 10) * 175;
    } else {
        totalCost = 10 * 150 + 10 * 175 + (waterUnits - 20) * 200;
    }


    surcharge = totalCost * 0.15;
    totalCost += surcharge;

    
    vat = totalCost * 0.18;
    totalCost += vat;

    
    if (balance >= totalCost) {
        remainingBalance = balance - totalCost;
        cout << "Transaction successful. Remaining balance: " << remainingBalance << " UGX" << endl;
    } else {
        cout << "Error: Insufficient balance. Remaining balance: " << balance << " UGX" << endl;
    }

    return 0;
}