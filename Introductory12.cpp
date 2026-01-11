#include <iostream>
using namespace std;

int main() {
    int numberOfSlices;
    float radiusOfPizza;
    float areaOfPizza;
    const float AREAOFSLICE = 14.13;
    const float PI = 3.14;

    cout << "Enter the radius of the pizza: ";
    cin >> radiusOfPizza;
    areaOfPizza = PI * radiusOfPizza * radiusOfPizza;
    numberOfSlices = static_cast<int>(areaOfPizza / AREAOFSLICE);
    cout << "The pizza can be cut into " << numberOfSlices << " slices." << endl;
    return 0;

}
