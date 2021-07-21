//
// Created by rodolfo_pc on 20/7/2021.
//

#ifndef BREAKOUT_GAME_H
#define BREAKOUT_GAME_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <vector>
#include <tuple>

#include "SpriteRenderer.h"
#include "ResourceManager.h"
#include "GameLevel.h"
#include "BallObject.h"

enum GameState {
    GAME_ACTIVE,
    GAME_MENU,
    GAME_WIN
};

enum Direction{
        UP,
        RIGHT,
        DOWN,
        LEFT
};

class Game {
public:
    GameState State;
    bool Keys[1024];
    unsigned int Width, Height;
    std::vector<GameLevel> Levels;
    unsigned int Level;

    Game(unsigned int width, unsigned int heigh);

    ~Game();

    void Init();

    void ProcessInput(float dt);

    void Update(float dt);

    void Render();

    void DoCollisions();

    // reset
    void ResetLevel();
    void ResetPlayer();
};


#endif //BREAKOUT_GAME_H
