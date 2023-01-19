//
//  Arena.h
//  CS 32 - Project 1
//
//  Created by Jeremiah Leonor on 1/18/23.
//

#ifndef ARENA
#define ARENA

#include <string>
#include "globals.h"
#include "History.h"
using namespace std;


class Player;
class Rabbit;

class Arena
{
  public:
      // Constructor/destructor
    Arena(int nRows, int nCols);
    ~Arena();
    
    History& history(); //returns a reference to the Arena history object

      // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    int     rabbitCount() const;
    int     getCellStatus(int r, int c) const;
    int     numberOfRabbitsAt(int r, int c) const;
    void    display(string msg) const;

      // Mutators
    void setCellStatus(int r, int c, int status);
    bool addRabbit(int r, int c);
    bool addPlayer(int r, int c);
    void moveRabbits();

  private:
    int     m_grid[MAXROWS][MAXCOLS];
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Rabbit* m_rabbits[MAXRABBITS];
    int     m_nRabbits;
    int     m_turns;
    
    History m_history; //data member type history to be used in Arena.cpp

      // Helper functions
    void checkPos(int r, int c, string functionName) const;
    bool isPosInBounds(int r, int c) const;
    
};

#endif
