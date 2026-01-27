#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double owedMoney = 0.0;
  double paidMoney = 0.0;
  double change = 0.0;

  int dollars = 0, quarters = 0, dimes = 0, nickels = 0, pennies = 0;

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
  change -= (quarters * 0.25);                  // Deduct the amount of quarters from the change                                            || 0.66 x (2 * 0.25) = 0.16
    dimes = static_cast<int>(change / 0.1);     // Divide the change by dimes and convert the amount to integer                             || 0.16 / 0.1 = 1.6 ->(conv to int) 1
  change -= (dimes * 0.1);                      // Deduct the amount of dimes from the change                                               || 0.16 x (1 * 0.1) = 0.06
    nickels = static_cast<int>(change / 0.05);  // Divide the change by nickels and convert the amount to integer                           || 0.06 / 0.05 = 1.2 ->(conv to int) 1
  change -= (nickels * 0.05);                   // Deduct the amount of nickels from the change                                             || 0.06 x (1 * 0.05) = 0.01
    pennies = static_cast<int>(change / 0.01);  // Divide the change by pennies and convert the amount to intger                            || 0.01 / 0.01 = 1 ->(conv to int) 1

  cout << "\nBreakdown of Receipt: \nTotal Money Owed: $" << owedMoney << endl;
  cout << "Total Money Paid: $" << paidMoney << endl;
  cout << "------------------------------" << endl;
  cout << "Total Change: $" << fixed << setprecision(2) << (paidMoney - owedMoney) << endl;
  cout << "------------------------------" << endl;
  if((owedMoney - paidMoney) != 0) cout << "Breakdown of Change:" << endl;     // Only show message if there is change
  if(dollars > 0) cout << "Dollars: " << dollars << endl;                      // Only show message if there is dollars
  if(quarters > 0) cout << "Quarters: " << quarters << endl;                   // Only show message if there is quarters
  if(dimes > 0) cout << "Dimes: " << dimes << endl;                            // Only show message if there is dimes
  if(nickels > 0) cout << "Nickels: " << nickels << endl;                      // Only show message if there is nickels
  if(pennies > 0) cout << "Pennies: " << pennies << endl;                      // Only show message if there is pennies
  
  return 0;
}
