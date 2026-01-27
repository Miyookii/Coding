#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double owedMoney = 0.0;
  double paidMoney = 0.0;
  double change = 0.0;

  int dollars, quarters, dimes, nickels, pennies = 0;

  cout << "Enter the amount owed : $";
  cin >> owedMoney;
  cout << "Enter the amount paid : $";
  cin >> paidMoney;

  if(paidMoney < owedMoney){
    cout << "Amount of money paid is not enough. Please enter exact or more than owed amount.";
    return 0;
  }

  change = paidMoney - owedMoney;               //                                                                                          || example change is 2.66
    dollars = static_cast<int>(change);         // Convert change to integer, getting rid of the decimal points only leaving dollars amount || 2.66 ->(conv to int) 2
  change -= dollars;                            // Deduct the amount of dollars from the change                                             || 2.66 - 2 = 0.66
    quarters = static_cast<int>(change / 0.25); // Divide the change by quarters and convert the amount to integer                          || 0.66 / 0.25 = 2.64 ->(conv to int) 2
  change -= (quarters * 0.25);                  // Deduct the amount of quarters from the change                                            || 0.66 x (2 * 0.25) = 0.23
    dimes = static_cast<int>(change / 0.1);     // Divide the change by dimes and convert the amount to integer                             || 0.23 / 0.1 = 2.3 ->(conv to int) 2
  change -= (dimes * 0.1);                      // Deduct the amount of dimes from the change                                               || 0.23 x (2 * 0.1) = 0.03
    nickels = static_cast<int>(change / 0.05);  // Divide the change by nickels and convert the amount to integer                           || 0.03 / 0.05 = 0.6 ->(conv to int) 0
  change -= (nickels * 0.05);                   // Deduct the amount of nickels from the change                                             || 0.03 x (0 * 0.05) = 0.03
    pennnies = static_cast<int>(change / 0.01); // Divide the change by pennies and convert the amount to intger                            || 0.03 / 0.01 = 3 ->(conv to int) 3

  cout << "\nBreakdown of Receipt: \nTotal Money Owed: $" << owedMoney << endl;
  cout << "Total Money Paid: $" << paidMoney << endl;
  cout << "------------------------------" << endl;
  cout << "Total Change: $" << fixed << setprecision(2) << (paidMoney - owedMoney) << endl;
  cout << "------------------------------" << endl;
  if((owedMoney - paidMoney) != 0) cout << "Breakdown of Change:" << endl;     // Only show message if there is change
  if(dollars > 0) cout << "Dollars: " << dollars << endl;                      // Only show message if there is dollars
  if(quarters > 0) cout << "Quarters: " << dollars << endl;                    // Only show message if there is quarters
  if(dimes > 0) cout << "Dimes: " << dollars << endl;                          // Only show message if there is dimes
  if(nickels > 0) cout << "Nickels: " << dollars << endl;                      // Only show message if there is nickels
  if(pennies > 0) cout << "Pennies: " << dollars << endl;                      // Only show message if there is pennies
  
  return 0;
}
