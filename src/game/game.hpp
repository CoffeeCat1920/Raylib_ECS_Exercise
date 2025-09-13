#pragma once

#include "entityManager/EntityManager.hpp"

class Game {
  
private:
  EntityManager m_entities;
  bool running;
  bool paused;

public:

  Game();

  void Init();
  void Update();
  void Draw();
};
