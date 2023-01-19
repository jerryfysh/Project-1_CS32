//
//  History.hpp
//  CS 32 - Project 1
//
//  Created by Jeremiah Leonor on 1/18/23.
//


#ifndef HISTORY
#define HISTORY

#include "globals.h"

class History
    {
    public:
        History(int nRows, int nCols);
        bool record(int r, int c);
        void display() const;
    private:
        int m_nRows;
        int m_nCols;
        int m_array[MAXROWS][MAXCOLS];
    };

#endif

