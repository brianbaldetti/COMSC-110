//
//  main.cpp
//  VariableInitialization
//
//  Created by brian on 2/9/22.
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int month; //variable assignment
    month = 2; //variable initialization
    
    int day = 22; //variable assignment and initialization
    
    int yr = 22, fullYr = 2022; //multiple variable assignment and initialization
    
    auto stringTest = "test"; //auto syntax used to automatically assign and initialize a variable
    
    int paren (5); //alternative way to assign and initalize variable
    int curly {5}; //alternatice way to assign ans initalize variable that verifies var type
    
    cout << month << day << fullYr << endl;
    cout << stringTest << '\n';
    cout << paren << '\n';
    
    return 0;
}
