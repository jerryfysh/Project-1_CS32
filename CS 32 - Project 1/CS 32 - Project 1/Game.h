//
//  Arena.cpp
//  CS 32 - Project 1
//
//  Created by Jeremiah Leonor on 1/18/23.

#ifndef GAME
#define GAME
#include <string>

class Arena;

class Game
{
  public:
      // Constructor/destructor
    Game(int rows, int cols, int nRabbits);
    ~Game();

      // Mutators
    void play();

  private:
    Arena* m_arena;

      // Helper functions
    std::string takePlayerTurn();
};

#endif
