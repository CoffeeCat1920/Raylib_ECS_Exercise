#include "EntityManager.hpp"
#include "entity/entity.hpp"
#include <memory>

std::shared_ptr<Entity> EntityManager::AddEntity(const std::string& tag) {
  m_totalEntities++;
  std::shared_ptr<Entity> entity = std::make_shared<Entity>(m_totalEntities, tag);
  m_entities.push_back(entity); 
  m_entityMap[tag].push_back(entity);
  return entity;
}
