//
//  main.cpp
//  OceanLevels
//  displays the ocean lvl over 25 yr period assuming that it rises 1.5mL every yr
//  Created by brian on 3/9/22.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double RATE = 1.5;
    double waterLvl = 0.0;
    
    for (int i = 1; i <= 25; i++)
    {
        waterLvl += RATE;
        
        cout << "The water level rate for year " << setw(2) << i << " is: " << setw(4) << waterLvl << "mL" << endl;
    }
    
    return 0;
}
