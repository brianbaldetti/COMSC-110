//
//  main.cpp
//  hokeypokey
//
//  Created by brian on 3/2/22.
//  Program finds the BMI of an indiv using ntheir height and weight and then finds if they are over or under weight
//
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //declares variables
    double height, weight, BMI;
    const int BMI_CONST = 703;
    
    //initializes variables
    cout << "What is your height in inches? ";
    cin >> height;
    cout << "What is your weight in pounds? ";
    cin >> weight;
    
    //calculates BMI
    BMI = (weight * BMI_CONST) / (pow(height, 2.0));
    
    //outputs BMI
    cout << setprecision(2) << fixed;
    cout << "Your BMI is: " << BMI;
    
    //outputs BMI classification
    if (BMI < 18.5)
        cout << "\nYou are underweight.\n";
    else if (BMI > 25)
        cout << "\nYou are overweight.\n";
    else
        cout << "\nYou are optimal.\n";
    
    return 0;
}
