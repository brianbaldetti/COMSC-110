//
//  main.cpp
//  average
//
//  Created by brian on 2/15/22.
//  Program finds the average of five user defined variables
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //defines variables
    double score1, score2, score3, score4, score5, avg;
    
    //initializes variables
    cout << "Enter 5 test scores seperated by spaces: ";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    
    //calculates average
    avg = (score1 + score2 + score3 + score4 + score5) / 5;
    
    //prints average
    cout << setprecision(1) << fixed;
    cout << "The average is " << avg << ".\n";
    
    return 0;
}
