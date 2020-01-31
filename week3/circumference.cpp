#include <iostream>
#include <cmath>
using namespace std;

double calculateCircumference(double radius);
const double PI = M_PI;

int main()
{
    int radius = 0;
    cout << "enter the radius of the circle: ";
    cin >> radius;
    cout << "\nthe circle's circumference is: " << calculateCircumference(radius) << endl;

    return 1;
}

double calculateCircumference(double radius){
    double circ = 2 * PI * radius;
    return circ;
}
