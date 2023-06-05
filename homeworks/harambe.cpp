//
//  main.cpp
//  hw05
//  program calculates distance and performs input validation
//  Created by brian on 3/12/22.
//
#include <iostream>
using namespace std;

int main()
{
    double speed = -1, time = 0;
   
   while (speed < 0)
   {
       cout << "What is the speed of the vehicle in MPH? ";
       cin >> speed;
       
       if (speed < 0)
           cout << "The speed must not be negative!\n";
   }

    while (time < 1)
    {
        cout << "How many hours has the vehivle travled? ";
        cin >> time;
        
        if (time < 1)
            cout << "The hours must not be less than 1\n";
    }
    
    cout << "Hour:        Distance Traveled:\n";
    cout << "_______________________________\n";
    
    for (int i = 1; i <= time; i++)
    {
        cout << i << "            " << (speed * i) << endl;
    }
    
    
    return 0;
}
