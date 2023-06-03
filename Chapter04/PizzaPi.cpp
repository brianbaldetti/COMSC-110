//
//  main.cpp
//  PizzaPi
//
//  Created by brian on 2/21/22.
//  Program calculates the number of slices for pizza size
//
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //initializes variables
    const double PI = 3.14159;
    const double SLICE_AREA = 14.125;
    const short SLICES_PER_PERSON = 4;
    double diameter, radius, area, numSlices, numSlicesPerPizza, numPizzas, ppl;
    
    //ask usr for diameter of pizza and num of ppl
    cout << "How many people are attending your pizza party\n";
    cin >> ppl;
    cout << "\nWhat is the diameter of your pizza?";
    cin >> diameter;
    
    //calculates numSlices per pizza
    radius = diameter / 2;
    area = PI * pow(radius, 2.0);
    numSlicesPerPizza = area / SLICE_AREA;
    
    //calculates numPizzas
    numSlices = ppl * SLICES_PER_PERSON;
    numPizzas = numSlices / numSlicesPerPizza;
    
    cout << setprecision(1) << fixed;
    cout << "\nYou need to order " << numPizzas << " pizzas.\n";
    
    return 0;
}
