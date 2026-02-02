#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
	int scores = 0;
	int totalPoints = 0;
	int counter;
	
	cout << "Grade Checker (Type -1 if done entering scores)" << endl;
	
		// Initialize counter to 0, keep looping if value of scores is not equal to -1, increment counter by 1 every loop
	for(counter = 0; scores != -1; counter ++){
	    cout << "Enter score #" << counter + 1 << ": ";
	    cin >> scores;
	    if(scores == -1) break;	// Stop the loop if user entered -1
	    totalPoints += scores;	// Add score entered to totalPoints
    }	// end of loop
    
    cout << "Total Number of Scores Entered: " << counter << endl;
    cout << "Total Points: " << totalPoints << " Points" << endl;
    
    if(totalPoints >= 315 && totalPoints <= 350) cout << "Grade: A";
    else if(totalPoints >= 280 && totalPoints <= 314) cout << "Grade: B";
    else if(totalPoints >= 245 && totalPoints <= 279) cout << "Grade: C";
    else if(totalPoints >= 210 && totalPoints <= 244) cout << "Grade: D";
    else if(totalPoints < 210) cout << "Grade: F";
    else cout << "Total Points Entered does not fit the range of 0 - 350";
    
return 0;
}
