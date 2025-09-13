#pragma once

#include "entity/entity.hpp"
#include <cstddef>
#include <map>
#include <memory>
#include <string>
#include <vector>

typedef std::vector<std::shared_ptr<Entity>> EntityVec;
typedef std::map<std::string, EntityVec> EntityMap;

class EntityManager {
  
private:
  EntityVec m_entities;
  EntityMap m_entityMap;
  EntityVec m_toAdd;
  size_t m_totalEntities = 0;

public:
  EntityManager();
  void Update();
  std::shared_ptr<Entity> AddEntity(const std::string& tag);
  EntityVec& GetEntities();
  EntityVec& GetEntities(const std::string& tag);

};
