#include <iostream>
using namespace std;

double calcAverage(double num1, double num2, double num3, double num4); // Declare the function calcAverage

double calcAverage(double num1, double num2, double num3, double num4){
    double sum;
    sum = num1 + num2 + num3 + num4; // Solve for the sum
    return (sum/4); // Return the average value
}

int main(){
    double quotient = 0.0;
    double num1 = 0.0;
    double num2 = 0.0;
    double num3 = 0.0;
    double num4 = 0.0;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    cout << "Enter the fourth number: ";
    cin >> num4;
    
    quotient = calcAverage(num1, num2, num3, num4); // Call the function calcAverage and return the value to quotient variable
    
    cout << "The average of the four numbers is: " << quotient;
    
    return 0;
}

