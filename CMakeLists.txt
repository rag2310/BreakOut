cmake_minimum_required(VERSION 3.19)
project(BreakOut)

set(CMAKE_CXX_STANDARD 20)

link_directories("C:/OPENGL_LIBS/glfw/lib-mingw-w64")


include_directories("C:/OPENGL_LIBS/glfw/include")
include_directories("C:/OPENGL_LIBS/glad/include")
include_directories("C:/OPENGL_LIBS/glm/glm")
include_directories("C:/OPENGL_LIBS/stb")

add_executable(BreakOut main.cpp src/Game.cpp src/Game.h src/Shader.cpp src/Shader.h src/Texture2D.cpp src/Texture2D.h src/ResourceManager.cpp src/ResourceManager.h glad.c src/SpriteRenderer.cpp src/SpriteRenderer.h src/GameObject.cpp src/GameObject.h src/GameLevel.cpp src/GameLevel.h src/BallObject.cpp src/BallObject.h)

target_link_libraries(BreakOut libglfw3.a opengl32.lib)