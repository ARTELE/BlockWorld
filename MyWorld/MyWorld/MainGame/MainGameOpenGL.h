#pragma once
#include "RenderAPI/OpenGLRenderContext.h"
#include "MainGame.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
class MainGameOpenGL : public MainGame
{
	GLFWwindow* window = nullptr;
	bool ShouldBreakLoop();
	void BeginUpdate();
	void Update();
	void EndUpdate();
public:
	MainGameOpenGL();
	void InitGame();
};