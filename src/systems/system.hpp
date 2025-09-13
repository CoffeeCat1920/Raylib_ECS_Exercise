#pragma once

#include <vector>
#include "entity/entity.hpp"
#include "raylib/raylib.h"

inline void sMovement(std::vector<Entity>& entities) {
  for (auto& entity : entities) {
    if (entity.cTransform) {
      entity.cTransform->position.x += entity.cTransform->velocity.x;
      entity.cTransform->position.y += entity.cTransform->velocity.y;
    }
  }
}

inline void sRender(std::vector<Entity>& entities) {
  for (auto& entity : entities) {
    if (entity.cShape) {
      entity.cShape->rec.x = entity.cTransform->position.x;  
      entity.cShape->rec.y = entity.cTransform->position.y;  

      DrawRectangleRec(entity.cShape->rec, RED);
    }
  }
}
