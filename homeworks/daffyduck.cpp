//
//  main.cpp
//  hw09
//
//  Created by brian on 4/20/22.
//  creates a array of strings and searches through the array of strings for a specific string
//  functions: getSize, createArray, getWords, findWord, doSearch, main
//
#include <iostream>
#include <string>
using namespace std;

//function prototypes
int getSize();
string* createArray(int);
void getWords(string[], int);
bool findWord(string[], string, int);
void doSearch(string[], int);

int main()
{
    //initializes variable
    string *ptrArray = nullptr;
    const int ARRAY_SIZE = getSize();
    
    //calls functions
    ptrArray = createArray(ARRAY_SIZE);
    getWords(ptrArray, ARRAY_SIZE);
    doSearch(ptrArray, ARRAY_SIZE);
    
    //clears memory and sets ptrArray to 0 address
    delete [] ptrArray;
    ptrArray = nullptr;
    
    return 0;
}



//returns a integer of >= 1
int getSize()
{
    int arraySize = 0;
    
    while (arraySize < 1)
    {
        cout << "Enter a integer for the size of the array of strings you would like to create: ";
        cin >> arraySize;
        
        if (arraySize < 1)
            cout << "Please enter a value of at least 1. Try again.\n";
    }
    
    return arraySize;
}

//creates and returns a pointer to a string array using dynamic memory allocation
string* createArray(int arraySize)
{
    string* stringPtrArray = new string[arraySize];
    return stringPtrArray;
}

//fills array with string
void getWords(string stringArrayPtr[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Enter a word for the #" << (i + 1) << " element in the array: ";
        cin >> stringArrayPtr[i];
    }
}

//performs linear search for string
bool findWord(string stringArrayPtr[], string searchString, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (stringArrayPtr[i] == searchString)
            return true;
    }
    
    return false;
}

//accepts the array of string and the size of the array and then calls the findWord Function to search for the user defined string
void doSearch (string stringArrayPtr[], int arraySize)
{
    string searchTerm;
    cout << "Enter a word that you would like to search for: ";
    cin.ignore(); //took me a good hour to realize that this is why my code wouldnt work
    getline(cin, searchTerm);
        
    findWord(stringArrayPtr, searchTerm, arraySize) ? cout << "The word was found!\n" : cout << "The word was not found.\n";
    cout << endl << endl;
}
