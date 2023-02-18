# CMakeList.txt: MyWorld 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#

include_directories(ThridPart/glm)
include_directories(ThridPart/glfw/include)
include_directories(ThridPart/glad/include)

include_directories(./)

link_directories(ThridPart/glfw/lib-vc2022)


aux_source_directory(ThridPart/glad/src, GLAD_SOURCE_CPP)

# 将源代码添加到此项目的可执行文件。
add_executable (MyWorld "main.cpp" "ThridPart/glad/src/glad.c"  "RenderAPI/OpenGLRenderContext.cpp" "MainGame/MainGameOpenGL.h" "MainGame/MainGameOpenGL.cpp" "MainGame/MainGame.h" "MainGame/MainGame.cpp" "RenderAPI/OpenGLRenderContext.h")
target_link_libraries(MyWorld glfw3)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET MyWorld PROPERTY CXX_STANDARD 20)
endif()

# TODO: 如有需要，请添加测试并安装目标。
