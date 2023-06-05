//
//  main.cpp
//  ListMaker
//
//  Created by brian on 4/6/22.
//
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
    //creates a unsigned variable using time function and sets that value as the seed value
    unsigned seedValue = time(0);
    srand(seedValue);
    
    //creates and opens files to hold random values
    ofstream outputFile("RandomList.txt");
    
    for (int i = 0; i < 100; i++)
    {
        outputFile << rand() << endl;
    }
        
    return 0;
}


