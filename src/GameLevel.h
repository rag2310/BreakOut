//
// Created by rodolfo_pc on 20/7/2021.
//

#ifndef BREAKOUT_GAMELEVEL_H
#define BREAKOUT_GAMELEVEL_H

#include <vector>
#include <fstream>
#include <sstream>

#include "../include/glad/glad.h"
#include <glm.hpp>

#include "GameObject.h"
#include "ResourceManager.h"
#include "SpriteRenderer.h"

class GameLevel {
public:
    std::vector<GameObject> Bricks;

    GameLevel();
    ~GameLevel();

    void Load(const char *file, unsigned int levelWidth, unsigned int levelHeight);

    void Draw(SpriteRenderer &renderer);

    bool IsCompleted();

private:
    void init(std::vector<std::vector<unsigned int>> tileData,
              unsigned int levelWidth, unsigned int levelHeight);
};


#endif //BREAKOUT_GAMELEVEL_H
