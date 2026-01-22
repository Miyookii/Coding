#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int previousMonth = 0;
    int currentMonth = 0;
    double gallonsOfWater = 0.0;
    double finalPricePaid = 0.0;
    
    const double MINIMUM_FEE = 16.67;
    
    cout << "What was the previous month's reading: ";
    cin >> previousMonth;
    cout << "What is the current month's reading: ";
    cin >> currentMonth;
    
    gallonsOfWater = currentMonth - previousMonth;
    
    finalPricePaid = ( gallonsOfWater / 1000 ) * 7.0;
    
    if (finalPricePaid < MINIMUM_FEE) {
        finalPricePaid = MINIMUM_FEE;
    }   // end if
    
    cout << "\nPayment Breakdown:" << endl; 
    cout << "Gallons used for the month: " << gallonsOfWater << "gal" << endl;
    cout << "Total Bill: $" << fixed << setprecision(2) << finalPricePaid << endl;
    
    return 0;
}
