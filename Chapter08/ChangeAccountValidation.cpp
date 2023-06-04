//
//  main.cpp
//  ChargeAccountValidation
//
//  Created by brian on 4/12/22.
//  checks if a user input matches the list of valid ints from an array
//
#include <iostream>
using namespace std;

bool linearSearch(int[], int, int);

int main()
{
    const int SIZE = 18;
    int intArray[] {5658845, 4520125, 7895122, 8777541,  8451277,  1302850,
        8080152,  4562555,  5552012,  5050552,  7825877,  1250255,
        1005231,  6545231,  3852085,  7576651,  7881200,  4581002};
    int accNumber;
    
    cout << "Enter a valid account number: ";
    cin >> accNumber;
    
    linearSearch(intArray, accNumber, SIZE) > 0 ? cout << "The account number is valid.\n" : cout << "The account number is invalid.\n";
    
    
}

bool linearSearch(int array[], int accountNumber, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] == accountNumber)
        {
            return true;
        }
    }
    
    return false;
}
