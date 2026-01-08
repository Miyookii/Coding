#include <iostream>
using namespace std;

int main() {
    float pizzaRadius;
    const float areaPerSlice = 14.125;
    const float pi = 3.14;

    cout << "Enter the radius of the pizza: ";
    cin >> pizzaRadius;
    float pizzaArea = pi * pizzaRadius * pizzaRadius;
    int numberOfSlices = static_cast<int>(pizzaArea / areaPerSlice);
    cout << "The pizza can be cut into " << numberOfSlices << " slices." << endl;
    return 0;
}