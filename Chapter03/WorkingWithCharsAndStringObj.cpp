//
//  main.cpp
//  WorkingWithCharsAndStringObj
//
//  Created by brian on 2/15/22.
//  demonstration of char and string objects
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //test "getline" method
    /*string name, city;
    
    cout << "What is your name? \n";
    getline(cin, name); //fetches entire usr input including blank space
    
    cout << "Where do you live? \n";
    getline(cin, city); //fetches entire usr input including blank space
    
    cout << "Your name is " << name << " and you live in " << city << " .\n";*/
    
    //test cin.get method
    /*char a, b;
    
    cout << "Enter a char: ";
    cin.get(a); //ask for an char using form of cin.get
    
    cout << "\nEnter another char: ";
    cin.ignore(); //ignores next input in keyboard buffer
    b = cin.get(); //ask for a char using another form of cin.get
    
    cout << "\nPress any key 5 times or press \"a\" to unpause the program: ";
    cin.ignore(5, 'a');  //stops program till anykey is pressed 5 time or until a is pressed and enter is clicked
    
    cout << "\nFirst char is " << a << " second char is " << b << ".\n";*/
    
    //test string operators and methods
    string a = "Hello ", b = "World!", d = " Brian";
    string c;
    
    c = a + b; //initializes string c with the values of a and b
    c += d; //adds the srting d to the string c
    
    int sz = c.length(); //gets the legth of the string c
    
    cout << c << endl;
    cout << sz << endl;
    
    return 0;
}
