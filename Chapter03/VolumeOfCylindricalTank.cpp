//
//  main.cpp
//  VolumeOfCylindricalTank
//
//  Created by brian on 2/14/22.
//
//computes volume of cylinder from usr input
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double radius, height, area;
    const double PI = 3.14159;
    
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;
    
    
    area = PI * pow(radius, 2.0) * height;
    cout << "\nThe area of the cylinder is: " << area << ".\n";
    
    return 0;
}
