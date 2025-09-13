#include "raylib/raylib.h"
#include "core/settings.hpp"
#include "core/colors.hpp"

#include "entity/entity.hpp"
#include "systems/system.hpp"

#include <vector>

int main () {

  std::vector<Entity> entities;
  
  InitWindow( RENDERING_WIDTH, RENDERING_HEIGHT, "Animation Test");
  
  SetTargetFPS(60);

  while ( !WindowShouldClose() )
  { 

    BeginDrawing();

    ClearBackground(GRUVBOX_DARK0);

    sMovement(entities);
    sRender(entities);

    EndDrawing();
    
  }

  CloseWindow();

  return 0;
}
