#include <iostream>
using namespace std;

int main(){
    int calories;
    int fatGrams;
    int roundedPercentage;
    double fatCalories;
    double fatCaloriePercentage;

    cout << "Enter the number of calories that the food contains: ";
    cin >> calories;
    cout << "Enter the number of fat grams that the food contains: ";
    cin >> fatGrams;

    if (calories <= 0 || fatGrams < 0) {
        cout << "Error: Calories must be greater than 0 and fat grams cannot be negative." << endl;
        return 1;
    }
    else if (fatGrams * 9 > calories) {
        cout << "Error: Fat calories cannot exceed total calories." << endl;
        return 1;
    }
    else {
    fatCalories = fatGrams * 9.0;
    fatCaloriePercentage = (fatCalories / calories) * 100.0;

    roundedPercentage = static_cast<int>(fatCaloriePercentage);

    cout << "The fat calories are " << fatCalories << " calories." << endl;
    cout << "The percentage of calories that come from fat is " << roundedPercentage << "%." << endl;
    return 0;
    }
}

    
