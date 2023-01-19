//
//  main.cpp
//  CS 32 - Project 1
//
//  Created by Jeremiah Leonor on 1/18/23.
//


#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
#include <cctype>

using namespace std;

#include "Rabbit.h"
#include "Player.h"
#include "Game.h"
#include "globals.h"
#include "Arena.h"
#include "History.h"

/////////////////////////////////////////////////////////////////////////
// main()
/////////////////////////////////////////////////////////////////////////


int main()
{
      // Create a game
      // Use this instead to create a mini-game:   Game g(3, 5, 2);
    Game g(10, 12, 40);

      // Play the game
    g.play();
}






