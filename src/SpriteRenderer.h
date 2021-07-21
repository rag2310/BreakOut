//
// Created by rodolfo_pc on 20/7/2021.
//

#ifndef BREAKOUT_SPRITERENDERER_H
#define BREAKOUT_SPRITERENDERER_H

#include "../include/glad/glad.h"
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>

#include "Shader.h"
#include "Texture2D.h"

class SpriteRenderer {
public:
    // Constructor (inits shaders/shapes)
    SpriteRenderer(Shader &shader);
    // Destructor
    ~SpriteRenderer();
    // Renders a defined quad textured with given sprite
    void DrawSprite(Texture2D &texture, glm::vec2 position, glm::vec2 size = glm::vec2(10.0f, 10.0f), float rotate = 0.0f, glm::vec3 color = glm::vec3(1.0f));
private:
    // Render state
    Shader       shader;
    unsigned int quadVAO;
    // Initializes and configures the quad's buffer and vertex attributes
    void initRenderData();
};


#endif //BREAKOUT_SPRITERENDERER_H
