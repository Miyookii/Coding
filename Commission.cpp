#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double sale;
    double commission;

    cout << "Enter the sale made: $";
    cin >> sale;

    if(sale <= 0) { // valid input cheking
        cout << "ERROR: Sale cannot be less than 0 or equal to zero.";
        return 0;
    }   // end if

    else if(sale < 100000){ // Input for less than 100,000
        commission = sale * 0.02;
    }   // end if

    else if((sale < 400000) && (sale >= 100000)){    // Input for 100,000 < x < 400,000
        sale -= 100000;
        commission = (sale * 0.05) + 2000;
    }   // end if

    else if(sale >= 400000){     // Input for more than 400,000
        sale -= 400000;
        commission = (sale * 0.1) + 17000;
    }   // end if

    cout << "Total Commission for the sale: $" << fixed << setprecision(2) << commission << endl;
    return 0;
}
