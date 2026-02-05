#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int incomeCounter = 0;
    int income = 0;
    int incomeTotal = 0;
    int expensesCounter = 0;
    int expenses = 0;
    int expensesTotal = 0;
    int netTotal = 0;
    
    cout << "\n-----Please enter the company's incomes-----" << endl;
    cout << "Enter (-1) if done inputting income values\n" << endl;
  
    // (initialize counter to 0 : check if income input is -1 : increment counter by 1 every loop)
    for(incomeCounter = 0; income != -1; incomeCounter++){  
        cout << "Income #" << incomeCounter + 1 << ": $";
        cin >> income;
        if(income == -1) break; // Break loop if -1 is inputted
        if(income < -1) {  // Check if user inputs negative value that is not -1 and end the program
          cout << "Income cannot be a negative number.";
          return 0;
        } // end if
        incomeTotal += income;  // Add income inputted to total Income
    } // end for
    
    cout << "\n-----Now please enter the company's expenses-----" << endl;
    cout << "Enter (-1) if done inputting income values\n" << endl;

  // (initialize counter to 0 : check if expense input is -1 : increment counter by 1 every loop)
    for(expensesCounter = 0; expenses != -1; expensesCounter++){
        cout << "Expense #" << expensesCounter + 1 << ": $";
        cin >> expenses;
        if(expenses == -1) break; // Break loop if -1 is inputted
        if(expenses < -1) {  // Check if user inputs negative value that is not -1 and end the program
          cout << "Expense cannot be a negative number.";
          return 0;
        } // end if
        expensesTotal += expenses;  // Add expenses inputted to total Expenses
    } // end for
    
    netTotal = incomeTotal + expensesTotal;  
    
    cout << "\n-----Company Financial Report-----" << endl;
    cout << "Number of income: " << incomeCounter << endl;
    cout << "Number of expenses: " << expensesCounter << endl;
    cout << "------------------------------------" << endl;
    cout << "Total Income: \t$" << incomeTotal << endl;
    cout << "Total Expenses: $" << expensesTotal << endl;
    cout << "------------------------------------" << endl;
    
    if(netTotal > 0)        cout << "Net Profit: \t$" << netTotal << " (PROFIT)"; // Output message if netTotal is more than 0
    else if(netTotal < 0)   cout << "Net Loss: \t $" << netTotal << " (LOSS)";  // Output message if netTotal is less than 0
    
    return 0;
}
    
