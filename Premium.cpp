#include <iostream>

using namespace std;

int main(){
    
    char programStart = 'Y';

    while(programStart == 'y' || programStart == 'Y'){ // Only run while loop if programStart == Y or y

    int incomeCounter = 0, expensesCounter = 0;
    int income = 0, expenses = 0;;
    int incomeTotal = 0, expensesTotal = 0;
    int netTotal = 0;
    bool validInput = true;
        
    cout << "\n-----Please enter the company's incomes-----" << endl;
    cout << "Enter (-1) if done inputting income values\n" << endl;
  
    // (initialize counter to 0 : check if income input is -1 : increment counter by 1 every loop)
    for(; income != -1; incomeCounter++){ 
        cout << "Income #" << incomeCounter + 1 << ": $";
        cin >> income;
        
        if(cin.fail()){ // Check for invalid inputs (characters and float numbers)
            cout <<"Invalid Input (Please only input integers)." << endl;
            cin.clear();  // Clear the invalid input
            cin.ignore(1000, '\n'); // Ignore the input or next line
            validInput = false;   // Set validInput state to false
            break;    // Break out of for loop
        } // end if
        
        if(income == -1) break; // Break loop if -1 is inputted
        
        if(income < -1) {  // Check if user inputs negative value that is not -1 and end the program
          cout << "Income cannot be a negative number.";
          validInput = false; // Set validInput state to false
          break;    // Break out of for loop
        } // end 

        incomeTotal += income;  // Add income inputted to total Income
        
    } // end for

    if(validInput == false){  // If there was a valid input from previous for loop, prompt to restart program
        cout << "Do you wish to run the program again? (Y/N): ";
        cin >> programStart;
        continue; // Go back to the start of the while loop
    } // end if
        
    cout << "\n-----Now please enter the company's expenses-----" << endl;
    cout << "Enter (-1) if done inputting income values\n" << endl;

  // (initialize counter to 0 : check if expense input is -1 : increment counter by 1 every loop)
    for(; expenses != -1; expensesCounter++){
        cout << "Expense #" << expensesCounter + 1 << ": $";
        cin >> expenses;
        
        if(cin.fail()){ // Check for invalid inputs (characters and float numbers)
            cout <<"Invalid Input (Please only input integers)." << endl;
            cin.clear();  // Clear the invalid input
            cin.ignore(1000, '\n'); // Ignore the input or next line
            validInput = false;   // Set validInput state to false
            break;    // Break out of for loop
        } // end if
        
        if(expenses == -1) break; // Break loop if -1 is inputted
        
        if(expenses < -1) {  // Check if user inputs negative value that is not -1 and end the program
          cout << "Expense cannot be a negative number.";
          validInput = false;   // Switches validInput state to false
          break;    // break out of for loop
        } // end if
    
        expensesTotal += expenses;  // Add expenses inputted to total Expenses
        
    } // end for

    if(validInput == false){  // If there was a valid input from previous for loop, prompt to restart program
        cout << "Do you wish to run the program again? (Y/N): ";
        cin >> programStart;
        continue; // Go back to the start of the while loop
    } // end if
        
    netTotal = incomeTotal - expensesTotal;  
    
    cout << "\n-----Company Financial Report-----" << endl;
    cout << "Number of income: " << incomeCounter << endl;
    cout << "Number of expenses: " << expensesCounter << endl;
    cout << "------------------------------------" << endl;
    cout << "Total Income: \t$" << incomeTotal << endl;
    cout << "Total Expenses: $" << expensesTotal << endl;
    cout << "------------------------------------" << endl;
    
    if(netTotal > 0)        cout << "Net Profit: \t$" << netTotal << " (PROFIT)"; // Output message if netTotal is more than 0
    else if(netTotal < 0)   cout << "Net Loss: \t $" << netTotal << " (LOSS)";  // Output message if netTotal is less than 0
    else                    cout << "Break Even: $0";
        
    cout << "\nWould you like to run the program again? (Y/N): ";
    cin >> programStart;
    }
    cout << "Thank you for using the program!";
    return 0;
}
    
