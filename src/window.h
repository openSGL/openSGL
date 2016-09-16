              //  written by antonio trpeski //
              
#ifndef WINDOW
#define WINDOW
#include <GLFW/glfw3>
#include <SGL_Vector.h>
class SGLwindow
{
  public:
    void open(SGLvector vec , std::string title)
    {
      window = glfwCreateglfwCreateWindow( vec.get_x	, vec.get_y , title.c_str() , NULL , NULL) 		
    }
    void SGLsetWindowSize(uint32_t x , uint32_t y)
    {
      glfwsetWindowSize(window , x , y);
    }
  
  private:
    GLFWwindow * window;
};

#endif // WINDOW
