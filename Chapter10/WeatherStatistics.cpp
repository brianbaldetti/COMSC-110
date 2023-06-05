//
//  main.cpp
//  WeatherStatistics
//
//  Created by brian on 4/26/22.
//  creates a structure to store weather data
//
#include <iostream>
using namespace std;

struct WeatherData
{
    double rainfall;
    double highTemp;
    double lowTemp;
    double avgTemp;
};

int main()
{
    double avgRainfall = 0, totalRainfall = 0, highTemp, lowTemp, avg = 0;
    WeatherData var[12];
    
    for (int i = 0; i < 12; i++)
    {
        cout << "Enter the data for month #" << (i + 1) << ":\n\n";
        cout << "Enter the highest temperature for the month: ";
        cin >> var[i].highTemp;
        
        if (var[i].highTemp > 140 || var[i].lowTemp < -100)
        {
            cout << "\nEnter a valid temperature between -100 and 140 degrees.\n";
            i--;
            continue;
        }
        
        cout << "Enter the lowest temperature for the month: ";
        cin >> var[i].lowTemp;
        
        if (var[i].highTemp > 140 || var[i].lowTemp < -100)
        {
            cout << "\nEnter a valid temperature between -100 and 140 degrees.\n";
            i--;
            continue;
        }
        
        cout << "Enter the average temperature for the month: ";
        cin >> var[i].avgTemp;
        cout << "Enter the rainfall for the month: ";
        cin >> var[i].rainfall;
    }
    
    highTemp = var[0].highTemp;
    lowTemp = var[0].lowTemp;
    
    for (int i = 0; i < 12; i++)
    {
        totalRainfall += var[i].rainfall;
        
        if (var[i].highTemp > highTemp)
            highTemp = var[i].highTemp;
        if (var[i].lowTemp < lowTemp)
            lowTemp = var[i].lowTemp;
        
        avg += var[i].avgTemp;
    }
    
    avgRainfall = (totalRainfall / 12);
    avg /= 12;
    
    cout << "The average raingfall for the year was: " << avgRainfall;
    cout << "The average temperature for the year was: " << avg;
    cout << "The highest temp for the year was: " << highTemp << " and the lowest temperature for the year was: " << lowTemp << endl;
    
    
    return 0;
}
