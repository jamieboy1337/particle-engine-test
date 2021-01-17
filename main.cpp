#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>


int main(int, char**) {
  if (!glfwInit()) {
    std::cout << "could not initialize glfw" << std::endl;
    exit(EXIT_FAILURE);
  }

  GLFWwindow* window;
  if (!(window = glfwCreateWindow(1024, 768, "hello spongebob", NULL, NULL))) {
    glfwTerminate();
    std::cout << "could not create window" << std::endl;
    exit(EXIT_FAILURE);
  }

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwMakeContextCurrent(window);
  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    glfwDestroyWindow(window);
    glfwTerminate();
    std::cout << "could not load gl calls" << std::endl;
    exit(EXIT_FAILURE);
  }

  // setup particle engine from here

  glfwDestroyWindow(window);
  glfwTerminate();
  exit(EXIT_SUCCESS);
}
