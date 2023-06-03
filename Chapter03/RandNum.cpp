//
//  main.cpp
//  RandNum
//
//  Created by brian on 2/15/22.
//  practice using rand method
//
#include <iostream>
#include <cstdlib> //necessary for using rand()
#include <ctime> //necessary for using time function

using namespace std;

int main()
{
    //assigns rand num to defined variable
    double randNum = rand();
    
    //displays the same 4 random nums every time the program is run
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << randNum << endl;
    
    //specifies a rand unsigned seed value for rand()
    unsigned seed = time(0);
    srand(seed);
    
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    
    return 0;
}
