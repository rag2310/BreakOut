//
// Created by rodolfo_pc on 20/7/2021.
//

#ifndef BREAKOUT_BALLOBJECT_H
#define BREAKOUT_BALLOBJECT_H

#include "../include/glad/glad.h"
#include <glm.hpp>

#include "GameObject.h"
#include "Texture2D.h"

class BallObject : public GameObject {
public:
    float Radius;
    bool Stuck;

    BallObject();

    BallObject(glm::vec2 pos, float radius, glm::vec2 velocity, Texture2D sprite);

    glm::vec2 Move(float dt, unsigned int window_width);

    void Reset(glm::vec2 position, glm::vec2 velocity);
};


#endif //BREAKOUT_BALLOBJECT_H
