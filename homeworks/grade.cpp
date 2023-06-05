//
//  main.cpp
//  hw06a
//  uses 3 funcs to get the users name, their test scores, and their average score
//  Created by brian on 3/16/22.
//
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//func prototypes
string get_name();
double get_score();

int main()
{
    //variable declarations
    string name;
    double sum;
    
    //variable and sum initialization
    name = get_name();
    sum = get_score();
    sum += get_score();
    sum += get_score();
    
    //computes avg of sum
    sum = sum / 3;
    
    //outputs name, score, and grade
    cout << fixed << setprecision(2);
    cout << "Hello " << name << " you average score is a: " << sum << "%\n";
    
    if (sum >= 90)
        cout << "Your grade is a A!\n";
    else if (sum >= 80)
        cout << "Your grade is a B.\n";
    else if (sum >= 70)
        cout << "Your grade is a C.\n";
    else if (sum >= 60)
        cout << "Your grade is a D.\n";
    else
        cout << "Your grade is a F.\n";

    
    return 0;
}

//func initializes and returns a user defined string
string get_name()
{
    string name;
    cout << "What is your name: ";
    getline(cin, name);
    
    return name;
}

//func initializes and returns a user defined double for their test score
double get_score()
{
    double score = -1;
    
    //while loop performs input validation
    while (score < 0 || score > 100)
    {
        cout << "Enter a test score between 0-100 inclusive: ";
        cin >> score;
        
        if (score < 0 || score > 100)
            cout << "That is not a valid score, please enter a valid score.\n";
    }
    
    return score;
}
