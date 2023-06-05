//
//  main.cpp
//  hw06b
//  calculates avg of the top four scores of a given data set of 5
//  Created by  brian on 3/16/22.
//
#include <iostream>
using namespace std;

//declares func prototypes
void getScore(int&);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
    //declares and initializes test scores
    int a, b, c, d, e;
    getScore(a);
    getScore(b);
    getScore(c);
    getScore(d);
    getScore(e);
    
    //passes validated test scores as arguements to CalcAverage func
    calcAverage(a, b, c, d, e);
    
    return 0;
}

//func ask the user to enter a score and if the score is valid it passes the score to the reference
void getScore(int& score)
{
    do
    {
        cout << "Please enter a test score between 0-100 inclusive: ";
        cin >> score;
        
        if (score < 0 || score > 100)
            cout << "Please enter a valid score between 0-100 inclusive.\n";
        
    } while (score < 0 || score > 100);
}

//func calculates the average of the top 4 scores using the findLowest func and displays their avg
void calcAverage(int a, int b, int c, int d, int e)
{
    //finds average of arguements by using findLowest func
    double sum = a + b + c + d + e;
    sum -= findLowest(a, b, c, d, e);
    sum /= 4;
    
    //outputs sverage of the top 4 scores
    cout << "The average of the test scores, excluding the lowest test score is: " << sum << ".\n";
}

//func finds the lowest of the 5 test scores and returns the value
int findLowest(int a, int b, int c, int d, int e)
{
    int lowest = a;

    if (b < lowest)
        lowest = b;
    if (c < lowest)
        lowest = c;
    if (d < lowest)
        lowest = d;
    if (e < lowest)
        lowest = e;
    
    return lowest;
}
