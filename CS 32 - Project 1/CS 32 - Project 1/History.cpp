//
//  History.cpp
//  CS 32 - Project 1
//
//  Created by Jeremiah Leonor on 1/18/23.
//
#include <iostream>
using namespace std;

#include "History.h"

History::History(int nRows, int nCols)
{
    m_nRows = nRows;
    m_nCols = nCols;
    
    for (int i = 0; i < nRows; i++)
    {
        for (int k = 0; k < nCols; k++)
        {
            m_array[i][k] = 0;
        }
    }
}

bool History::record(int r, int c)
{
    if (r > m_nRows || r <= 0)
    {
        return false;
    }
    if (c > m_nCols || c <= 0)
    {
        return false;
    }
    
    m_array [r-1][c-1] += 1;
    return true;
}

void History::display() const
{
    char Arr [MAXROWS][MAXCOLS];
    
    clearScreen();

    for (int i = 0; i < m_nRows; i++)
    {
        for (int k = 0; k < m_nCols; k++)
        {
            if (m_array[i][k] == 0)
            {
                Arr[i][k] = '.';
            }
            else if (m_array[i][k] > 0 && m_array [i][k] < 26)
            {
                Arr[i][k] = 'A' + m_array[i][k] - 1;
            }
            else if (m_array[i][k] >= 26)
            {
                Arr[i][k] = 'Z';
            }
        }
    }
    
    for (int i = 0; i < m_nRows; i++)
    {
        for (int k = 0; k < m_nCols; k++)
        {
            cout << Arr[i][k];
        }
        cout << endl;
    }
    
    cout << endl;
    
     // writes empty line after history grid
}

