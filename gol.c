#include <assert.h>
#include <stdbool.h>
#include "./celumato.h"

int main() {

  scc(SDL_Init(SDL_INIT_VIDEO));

  SDL_Window *window = celumato_create_window();
  SDL_Renderer *renderer = celumato_create_renderer(window);

  SDL_Quit();
  return 0;
}

