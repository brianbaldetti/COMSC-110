//
//  main.cpp
//  CommentsAndConstants
//
//  Created by brian on 2/9/22.
//
#include <iostream>
using namespace std;

/*
    const are variables that cant be changed in value
    const are usually written in call caps and with underscores between the words
    I'll write const in this format as I write my regular variables with camele casing
    
    endl comments can be created with // such as on line 21
    multi-line comments such as this one here can be created as well
 
    constants and comments are both very useful for clarifying a program
 */

int main()
{
    const double INTEREST_RATE = .01; //declares and initalizes const INSTANT_RATE
    double balance = 1231.21; //declares and initalizes doulbe
    double totalBalence = balance * (1 + INTEREST_RATE);
    
    cout << totalBalence << endl;
    return 0;
}
