#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
	int scores = 0;
	int totalPoints = 0;
	int counter;
	
	for(counter = 1;counter < 6; counter ++){
	    cout << "Enter score #" << counter << ": ";
	    cin >> scores;
	    totalPoints += scores;
    }
    
    cout << "Total Grade: " << totalPoints << " Points" << endl;
    
    if(totalPoints >= 315 && totalPoints <= 350) cout << "Grade: A";
    else if(totalPoints >= 280 && totalPoints <= 314) cout << "Grade: B";
    else if(totalPoints >= 245 && totalPoints <= 279) cout << "Grade: C";
    else if(totalPoints >= 210 && totalPoints <= 244) cout << "Grade: D";
    else if(totalPoints < 210) cout << "Grade: F";
    else cout << "Total Points Entered does not fit the range of 0 - 350";
    
return 0;
}
