#pragma once

#include "core/settings.hpp"
#include "raylib/raylib.h"

struct CTransform {
  Vector2 position = {0, 0};
  Vector2 velocity = {0, 0};
  CTransform() {}
  CTransform(Vector2 position, Vector2 velocity) :
    position(position),
    velocity(velocity)
  {}
};

struct CShape {
  Rectangle rec;  
  CShape() {
    rec.width = BLOCK;
    rec.height = BLOCK;
  }
  CShape(int width, int height) {
    rec.width = width;
    rec.height = height;
  }
};
