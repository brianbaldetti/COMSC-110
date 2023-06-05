//
//  main.cpp
//  MovieData
//
//  Created by brian on 4/26/22.
//  creates 2 movie data structure variables and uses a function to print them out
//
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct MovieData
{
    string title;
    string director;
    int time;
    int yr;
};

void printMovieData(const MovieData&);

int main()
{
    MovieData var1 = {"Fight Club", "yo mama", 169, 2003};
    printMovieData(var1);
    
    return 0;
}

void printMovieData(const MovieData& printData)
{
    cout << "The data for the movie " << printData.title << " is:\n";
    cout << "Title: " << printData.director << endl;
    cout << "Release year: " << printData.yr << endl;
    cout << "Length of film: " << printData.time << endl;
}
