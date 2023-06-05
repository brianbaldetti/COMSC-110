//
//  main.cpp
//  ExamGrader
//
//  Created by brian on 4/6/22.
//  reads content of student answer file and correct answer file and compares answers; program counts the number of incorrect answers the percentage of incorrect answers
//
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //declares variables
    const int SIZE = 20;
    char reader, answers[SIZE], correct[SIZE];
    int count = 0;
    double score = 0;
    
    ifstream correctAnswers("/Users/messenger01/Downloads/school firefox profile/S2022/source_code/Chapter 07/CorrectAnswers.txt");
    ifstream studentAnswers("/Users/messenger01/Downloads/school firefox profile/S2022/source_code/Chapter 07/StudentAnswers.txt");
    
    if (correctAnswers.is_open() && studentAnswers.is_open())
    {
        for (int i = 0; i < 20 && correctAnswers >> reader; i++)
        {
            correct[i] = reader;
        }
        for (int i = 0; i < 20 && studentAnswers >> reader; i++)
        {
            answers[i] = reader;
        }
    }
    
    for (int i = 0; i < 20; i++)
    {
        if (correct[i] != answers[i])
        {
            cout << "For answer #" << setw(2) << (i + 1) << " the student answered " << answers[i] << " yet the correct answer is " << correct[i] << ".\n";
            count++;
        }
    }
    score = ((20.0 - count) / 20) * 100;
    
    cout << (count > 0 ? "\n" : "") << "In total the student answered " << count << " incorrect answers.\n";
    cout << "Their score is " << score << "%.\n";
    cout << "The student " << (score >= 70 ? "passed" : "failed") << " their exam.\n";
    
    return 0;
}
