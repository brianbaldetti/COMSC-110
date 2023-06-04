//
//  main.cpp
//  NumericalProcessing
//  inputs a list of numbers and finds the sum, average, and number of lines from the list of numbers
//  Created by brian on 3/11/22.
//
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    double sum, avg, line, count = 0;
    ifstream inputFile;
    inputFile.open("/Users/messenger01/Downloads/school firefox profile/S2022/source_code/Chapter 05/Random.txt");
    
    if (inputFile.is_open())
    {
        while (inputFile >> line)
        {
            sum += line;
            count++;
        }
        
        avg = sum / count;
        inputFile.close();
    }
    else
    {
        cout << "The file could not be opened." << endl;
        inputFile.close();
    }
    
    cout << "The sum of the data is: " << sum << endl;
    cout << "The number of lines of data is: " << count << endl;
    cout << "The average of the data is: " << avg << endl;
    
    return 0;
}
