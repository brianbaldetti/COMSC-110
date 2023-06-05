//
//  main.cpp
//  PalindromeDetector
//
//  Created by brian on 5/9/22.
//  program creates and uses a func to detect a palindrome string
//
#include <iostream>
#include <string>
using namespace std;

bool detector(string, int, int);

int main()
{
    string palindrome = "desserts i stressed";
    
    cout << detector(palindrome, 18, 0) << endl;
    
    return 0;
}

bool detector(string word, int end, int start)
{
    if (word[end] != word[start])
        return false;
    else
    {
        detector(word, end - 1, start + 1);
    }
    
    return true;
}
