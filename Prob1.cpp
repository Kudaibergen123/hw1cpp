#include <iostream>
using namespace std;
const double PI = 3.141592653589793238463;

int main()
{
    double circumference = 0.0;
    double radius = 0.0;
    double area = 0.0;

    cout << "Please enter circumference of the circle:";
    cin >> circumference ;
    radius = circumference / (2 * PI);
    area = PI * radius * radius;
    cout << "The radius and area of the circle are "<<radius<<" and "<<area<<endl;
}
