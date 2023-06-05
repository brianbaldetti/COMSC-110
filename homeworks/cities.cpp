//
//  main.cpp
//  hw11
//
//  Created by brian on 4/27/22.
//  creates a structure to hold a cities name, pop, and avg age
//  processes city data to find the total pop of the entered cities and the city with the lowest avg age
//
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct City
{
    string name;
    int pop;
    double avgAge;
};

City getCity();
void fillArray(City[], int);
int findTotalPop(City[], int);
int findLowestAge(City[], int);
void printOutput(City[], int, int, int);

int main()
{
    //initializes variables
    const int ARRAY_SIZE = 5;
    City cityArray[ARRAY_SIZE];
    int lowestAvgSubscript = 0, totalPopulation = 0;
    
    //calls functions
    fillArray(cityArray, ARRAY_SIZE);
    totalPopulation = findTotalPop(cityArray, ARRAY_SIZE);
    lowestAvgSubscript = findLowestAge(cityArray, ARRAY_SIZE);
    printOutput(cityArray, ARRAY_SIZE, totalPopulation, lowestAvgSubscript);
    
    
    return 0;
}

City getCity()
{
    City temp;
    
    cout << "Enter the name of the city: ";
    getline(cin, temp.name);
    cout << "Enter the population of the city: ";
    cin >> temp.pop;
    cout << "Enter the average age of the citites population: ";
    cin >> temp.avgAge;
    cin.ignore();
    
    return temp;
}

void fillArray(City inputArray[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        inputArray[i] = getCity();
    }
}

int findTotalPop(City inputArray[], int arraySize)
{
    int total = 0;
    
    for (int i = 0; i < arraySize; i++)
    {
        total += inputArray[i].pop;
    }
    
    return total;
}

int findLowestAge(City inputArray[], int arraySize)
{
    double lowestAvg = inputArray[0].avgAge;
    int lowestSubscript = 0;
    
    for (int i = 1; i < arraySize; i++)
    {
        if (lowestAvg > inputArray[i].avgAge)
        {
            lowestAvg = inputArray[i].avgAge;
            lowestSubscript = i;
        }
    }
    
    return lowestSubscript;
}

void printOutput(City inputArray[], int arraySize, int totalPop, int lowAvgPop)
{
    cout << left << setw(20) << "City Name" << setw(20) << "Population" << setw(20) << "Average Age" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    
    for (int i = 0; i < arraySize; i++)
    {
        cout << setw(20) << inputArray[i].name << setw(20) << inputArray[i].pop << setw(20) << inputArray[i].avgAge << endl;
    }
    
    cout << "-----------------------------------------------------------------" << endl;
    cout << "The total population of these cities is: " << totalPop << endl;
    cout << "The city with the lowest average population is: " << inputArray[lowAvgPop].name << ", " << inputArray[lowAvgPop].avgAge << endl;
}


