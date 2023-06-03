//
//  main.cpp
//  HowMuchPaint
//
//  Created by brian on 2/9/22.
//
#include <iostream>
using namespace std;

int main()
{
    const int PAINT_GALLON = 340;
    int length = 100;
    int height = 6;
    int numOfCoats = 2;
    
    float area = length * height;
    float gallonsOfPaint =  (area / PAINT_GALLON) * numOfCoats;
    
    cout << "You will need aproxomitly: " << gallonsOfPaint << " gallons of paint.\n";
}
