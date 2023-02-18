#include "MainGameOpenGL.h"

MainGameOpenGL::MainGameOpenGL()
{

}

void MainGameOpenGL::BeginUpdate()
{
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
}

void MainGameOpenGL::Update()
{

}

void MainGameOpenGL::EndUpdate()
{
    glfwSwapBuffers(window);
    glfwPollEvents();
}

void MainGameOpenGL::InitGame()
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(800, 600, "Game", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return;
    }
    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return;
    }
}

bool MainGameOpenGL::ShouldBreakLoop()
{
	return glfwWindowShouldClose(window);
}