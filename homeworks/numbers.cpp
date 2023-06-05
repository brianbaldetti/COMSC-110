//
//  main.cpp
//  hw07
//
//  Created by brian on 4/3/22.
//  Creates a user defined array of 10 integers then writes the even integers to a text file
//
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//function prototypes
void getNumbers(int[], int);
int countOddNumbers(const int[], int);
int writeEvenNumbers(string, const int[], int);

int main()
{
    //initializing variables
    const int SIZE = 10;
    int arr[SIZE];
    
    //calls getNumber function to have the user initialize the arr variable
    getNumbers(arr, SIZE);
    
    //outputs the number of odd intefers in the arr variable using the countOddNumbers array
    cout << "The Number of odd numbers in the array is: " << countOddNumbers(arr, SIZE) << endl;
    
    //calls and returns result of writeEvenNumbers function
    if (writeEvenNumbers("Evens.txt", arr, SIZE) == 0)
        cout << "The even numbers have been SUCCESSFULLY written to the file!\n";
    else
        cout << "The even numbers FAILED to be written to the file!\n";

    return 0;
}

//initializes an array with user defined input
void getNumbers(int inputArray[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Enter the #" << (i + 1) << " value: ";
        cin >> inputArray[i];
    }
}

//returns the count of the number of odd numbers in an array
int countOddNumbers(const int inputArray[], int arraySize)
{
    int oddCount = 0;
    
    for (int i = 0; i < arraySize; i++)
    {
        if (inputArray[i] % 2 == 1)
            oddCount++;
    }
        
    return oddCount;
}

//writes the even numbers in an array to a file
int writeEvenNumbers(string fileName, const int inputArray[], int arraySize)
{
    ofstream outputFile(fileName);
    
    if (outputFile.is_open() == false)
        return -1;
    else
    {
        for (int i = 0; i < arraySize; i++)
        {
            if (inputArray[i] % 2 == 0)
                outputFile << inputArray[i] << endl;
        }
        
        outputFile.close();
        return 0;
    }
}
