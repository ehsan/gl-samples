#include "SDL/SDL.h"
#include "SDL/SDL_opengl.h"

int main() {
  if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
    return 1;
  }

  if (SDL_SetVideoMode(500, 500, 32, SDL_OPENGL) == NULL) {
    return 2;
  }

  glClearColor(1, 0, 0, 1);
  glClear(GL_COLOR_BUFFER_BIT);
  glEnable(GL_SCISSOR_TEST);
  glScissor(100, 100, 200, 50);
  glClearColor(1, 1, 0, 1);
  glClear(GL_COLOR_BUFFER_BIT);

  SDL_GL_SwapBuffers();

  SDL_Delay(10 * 1000);

  SDL_Quit();

  return 0;
}
