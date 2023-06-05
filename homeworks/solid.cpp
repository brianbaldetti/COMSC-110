//
//  solid.cpp
//  hw02
//
//  Created by brian on 2/9/22.
//
#include <iostream>
using namespace std;

int main()
{
    //defines double variables
    double length, width, height, surfaceArea, volume;
    
    //ask user to assign variables
    cout << "What is the length of the solid? ";
    cin >> length;
    
    cout << "What is the width of the solid? ";
    cin >> width;
    
    cout << "What is the height of the solid? ";
    cin >> height;
    
    //calculates surface area and volume
    surfaceArea = 2 * (height * width + length * width + length * height);
    volume = length * width * height;
    
    //displays output of surfaceArea and volume
    cout << "The surface area of the solid is: " << surfaceArea << endl;
    cout << "The volume of your solid is: " << volume << endl;
    
    //ends program
    return 0;
}
