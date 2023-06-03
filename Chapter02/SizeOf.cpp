//
//  main.cpp
//  SizeOf
//
//  Created by brian on 2/9/22.
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sizeOfString;
    sizeOfString = "brian";
    
    long long sizeOfLongLong;
    sizeOfLongLong = 91892839819203; //yo mama's weiht (int metric tons)
    
    long double sizeOfLongDouble;
    sizeOfLongDouble = 23213.11232131;
    
    char sizeOfChar;
    sizeOfChar = 'd';
    
    bool sizeOfBool;
    sizeOfBool = false;
    
    cout << sizeof(long) << endl;
    cout << sizeof(sizeOfBool) << endl;
    cout << sizeof(sizeOfLongLong) << endl;
    cout << sizeof(char) << endl;
    
    cout << "the bool value is: " << sizeOfBool << '\n';
    
    return 0;
}
