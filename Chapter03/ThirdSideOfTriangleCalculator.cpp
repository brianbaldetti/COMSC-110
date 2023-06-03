//
//  main.cpp
//  ThirdSideOfTriangleCalculator
//
//  Created by brian on 2/15/22.
//  program finds the third side of the right triangle using pythagarum theorum or whatever it is called
//
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //defines variables
    double side1, side2, side3;
    
    //gathers inputs
    cout << "This program finds the third side of a right triangle to two decimal places using the value of two other sides. \n";
    cout << "\nWhat is the value of the first side of the triangle? ";
    cin >> side1;
    cout << "\nWhat is the value of the second side of the triangle? ";
    cin >> side2;
    
    //performs calculations
    side3 = sqrt(pow(side1, 2.0) + pow(side2, 2.0));
    
    //sends formatted output
    cout << setprecision(2) << fixed;
    cout << "\nThe value of the third is is: " << side3 << ".\n";
    
    return 0;
}
