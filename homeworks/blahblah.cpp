//
//  main.cpp
//  hw20
//
//  Created by brian on 5/9/22.
//  uses recursive function to print line of char with user defined length
#include <iostream>
using namespace std;

void recursivePrint(char, int);

int main()
{
    //defining variables
    int length;
    char type;

    //initilizing variables
    cout << "What character should be printed: ";
    cin >> type;
    cout << "How many times should that character be printed: ";
    cin >> length;
    
    //calls function
    recursivePrint(type, length);
    
    return 0;
}

//defining recursivePrint func
void recursivePrint(char input, int length)
{
    if (length == 0)
        cout << endl;
    else
    {
        cout << input;
        recursivePrint(input, length - 1);
    }
}
