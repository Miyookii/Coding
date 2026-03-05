#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void calcGrossPay(double hours, double payRate, double &grossPay);
double totalGrossPay(double grossPay, double totalPay);

int main(){
    double hours = 0.0;
    double payRate = 0.0;
    double grossPay = 0.0;
    double totalPay = 0.0; 

    cout << fixed << setprecision(2);
    cout << "Gerston Blankets Employee Pay Calculator" << endl;
    cout << "----------------------------------------" << endl;

    // Ask hours first to check sentinel before entering loop
    cout << "Enter the number of hours worked (-1 to end): ";
    cin >> hours;

    // Keep looping until user enters -1
    while(hours != -1){

        // If user enters a negative number other than -1, skip and ask again
        if(hours < 0){
            cout << "Invalid input. Please enter a positive number to continue or -1 to end." << endl;
        } else {
            // Only runs if hours is valid (0 or above)
            cout << "Enter the pay rate per hour: $";
            cin >> payRate;
            
            // calcGrossPay uses & so it can write the result back to grossPay
            calcGrossPay(hours, payRate, grossPay);

            cout << "Gross Pay: $" << grossPay << endl;

            // Add current employee's gross pay to the running total
            totalPay = totalGrossPay(grossPay, totalPay);
        } // end if-else

        // Ask again at the end of each loop
        cout << "\nEnter the number of hours worked (-1 to end): ";
        cin >> hours;

    } // end while

    cout << "\n---------------------------------------" << endl;
    cout << "Total Gross Pay: $" << totalPay << endl;

    return 0;
} // end main

// Void function: calculates gross pay for one employee
// Uses & so the result is written directly to grossPay in main
void calcGrossPay(double hours, double payRate, double &grossPay){
    if(hours <= 40)
        // Regular pay: hours x rate
        grossPay = hours * payRate;
    else
        // Overtime pay: first 40 hours normal, anything over 40 is 1.5x rate
        grossPay = (40 * payRate) + ((hours - 40) * payRate * 1.5);
} // end calcGrossPay

// Value-returning function: adds grossPay to totalPay and returns the new total
double totalGrossPay(double grossPay, double totalPay){
    return totalPay + grossPay;
} // end totalGrossPay
