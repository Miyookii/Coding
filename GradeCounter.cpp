#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
	int scores = 0;
	int totalPoints = 0;
	int counter;

	// For loop, repeatedly asks user for input 5 times.
	for(counter = 1;counter < 6; counter ++){
	    cout << "Enter score #" << counter << ": ";
	    cin >> scores;
	    totalPoints += scores;
    }	// end loop
    
    cout << "Total Grade: " << totalPoints << " Points" << endl;
    
    if(totalPoints >= 315 && totalPoints <= 350) cout << "Grade: A";		// Only for Points 315 <= x <= 350
    else if(totalPoints >= 280 && totalPoints <= 314) cout << "Grade: B";	// Only for Points 280 <= x <= 314
    else if(totalPoints >= 245 && totalPoints <= 279) cout << "Grade: C";	// Only for Points 245 <= x <= 279
    else if(totalPoints >= 210 && totalPoints <= 244) cout << "Grade: D";	// Only for Points 210 <= x <= 244
    else if(totalPoints >= 0 && totalPoints < 210) cout << "Grade: F";		// Only for Points 0 <= x < 210
    else cout << "Total Points Entered does not fit the range of 0 - 350";	// If Points are not within the range of 0-350
    
return 0;
}
