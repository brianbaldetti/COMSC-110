//
//  main.cpp
//  RandomNumberGuessingGame
//  Generates a random number and ask the user to guess the random number
//  Created by brian on 3/11/22.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    unsigned short seed = time(0);
    srand(seed);
    
    int randomNum = (rand() % (10 - 0 + 0)) + 0;
    int guess = 0;
    int count = 0;
    
    while (guess != randomNum)
    {
        cout << "Enter a guess: ";
        cin >> guess;
        
        if (guess == randomNum)
            cout << "Congrats! You got the right number!\n";
        else if (guess > randomNum)
            cout << "Your guess was too high.\n";
        else
            cout << "Your guess was too low.\n";
        
        count++;
    }
    
    cout << "You got the correct guess on your #" <<  count << " attempt.\n\n\n";
    
    return 0;
}
