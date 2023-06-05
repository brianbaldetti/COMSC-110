//
//  main.cpp
//  MagicSquare
//
//  Created by brian on 4/5/22.
//  program checks if a 2D array qualifies as a magic square
//
#include <iostream>
using namespace std;

const int COL = 3;
bool magicSquareTester(const int[][COL]);

int main()
{
    int arrayOne[3][3] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}};
    int arrayTwo[3][3] = {{4, 9, 3}, {2, 99, 7}, {6, 1, 8}};
    
    if (magicSquareTester(arrayTwo))
        cout << "It is true!" << endl;
}

bool magicSquareTester(const int numbers[][COL])
{
    int sumCol1 =0, sumCol2 = 0, sumCol3 = 0;
    int sumRow1 = 0, sumRow2 = 0, sumRow3 = 0;
    int sumDiag1 = 0, sumDiag2 = 0;
    
    for (int  row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            if (row == 0)
            {
                sumCol1 += numbers[row][col];
            }
            if (row == 1)
                sumCol2 += numbers[row][col];
            if (row == 2)
                sumCol3 += numbers[row][col];
        }
    }

    if (sumCol1 != sumCol2 || sumCol1 != sumCol3)
    {
        cout << "Returning false columns.";
        return false;
        
    }
    
    for (int col = 0; col < 3; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            if (col == 0)
                sumRow1 += numbers[row][col];
            else if (col == 1)
                sumRow2 += numbers[row][col];
            else
                sumRow3 += numbers[row][col];
        }
    }
    
    if (sumRow1 != sumRow2 || sumRow3 != sumRow1 || sumRow1 != sumCol1)
    {
        cout << "Returning false rows.";
        return false;
    }
    
    for (int row = 0; row < 3; row++)
    {
        for (int col = row; col < 3; col += 3)
        {
            sumDiag1 += numbers[row][col];
        }
    }
    
    for (int row = 0; row < 3; row++)
    {
        for (int col = 2; col > -1; col -= 3)
        {
            sumDiag2 += numbers[row][col];
        }
    }
        
    if (sumDiag1 != sumDiag2 || sumDiag1 != sumCol1)
    {
        cout << "Returning false diagnals.";
        return false;
    }
    
        return true;
}
