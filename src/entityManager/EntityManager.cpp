#include "EntityManager.hpp"
#include "entity/entity.hpp"
#include <algorithm>
#include <memory>

void EntityManager::Update() {
  for (auto entity : m_toAdd) {
    m_entities.push_back(entity);
    m_entityMap[entity->Tag()].push_back(entity);
  } 
  m_entities.clear();

  m_entities.erase(
    std::remove_if(m_entities.begin(), m_entities.end(), 
       [](const std::shared_ptr<Entity>& entity) {
          return !entity->Alive(); 
       }
    )
  );

  for (auto& [tag, vec] : m_entityMap) {
    vec.erase(
      std::remove_if(vec.begin(), vec.end(), 
         [](const std::shared_ptr<Entity>& entity) {
            return !entity->Alive(); 
         }
      )
    );
  }

}

std::shared_ptr<Entity> EntityManager::AddEntity(const std::string& tag) {
  m_totalEntities++;
  std::shared_ptr<Entity> entity = std::make_shared<Entity>(m_totalEntities, tag);
  m_toAdd.push_back(entity);
  return entity;
}
