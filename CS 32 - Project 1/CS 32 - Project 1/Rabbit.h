//
//  Rabitt.hpp
//  CS 32 - Project 1
//
//  Created by Jeremiah Leonor on 1/18/23.
//

#ifndef RABBIT
#define RABBIT

class Arena;

class Rabbit
{
  public:
      // Constructor
    Rabbit(Arena* ap, int r, int c);

      // Accessors
    int  row() const;
    int  col() const;
    bool isDead() const;

      // Mutators
    void move();

  private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_health;
    int    m_idleTurnsRemaining;
};


#endif
