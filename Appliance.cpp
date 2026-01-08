#include <iostream>
using namespace std;

int main(){
    int oldStock;           // Stock at the beginning of the month
    int purchasedStock;     // Stock purchased during the month
    int soldStock;          // Stock sold during the month
    int currentStock;       // Stock at the end of the month

    cout << "Enter the current number of units stocked before the month: ";
        cin >> oldStock;
    cout << "Enter the number of units purchased during the month: ";
        cin >> purchasedStock;
    cout << "Enter the number of units sold during the month: ";
        cin >> soldStock;

    currentStock = oldStock + purchasedStock - soldStock; // Calculate the stock at the end of the month

    cout << "The stock of dishwashers at the end of the month is: " << currentStock << " units." << endl;
    return 0;   
}