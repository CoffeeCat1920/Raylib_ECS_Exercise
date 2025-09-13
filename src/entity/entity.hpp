#pragma once

#include <cstddef>
#include <memory>
#include <string>
#include "components/component.hpp"

class Entity {
private:
    const size_t m_Id;
    const std::string m_tag;
    bool m_alive = true;

public:
    std::shared_ptr<CTransform> cTransform = nullptr;
    std::shared_ptr<CShape> cShape = nullptr;

    Entity(size_t id, const std::string& tag)
        : m_Id(id), m_tag(tag) {}

    void Destroy() { m_alive = false; }

    size_t Id() { return m_Id; }
    std::string Tag() { return m_tag; }
    bool Alive() { return m_alive; }

};
