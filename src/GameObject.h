#ifndef PLATFORMER_GAMEOBJECT_H
#define PLATFORMER_GAMEOBJECT_H

#include "Vector2.h"
#include <SFML/Graphics.hpp>

class GameObject
{
 public:
  GameObject();
  ~GameObject();
  bool initialiseSprite(sf::Texture& texture, std::string filename);
  sf::Sprite* getSprite();
  void setVisiblilty(bool visibility);
  bool isVisable();

 protected:
  sf::Texture* texture = nullptr;
  sf::Sprite* sprite   = nullptr;
  Vector2 position;
  bool visible = true;
  bool collision_layer[10] = {true,false,false,false,false,false,false,false,false,false};
  bool collision_mask[10] = {true,false,false,false,false,false,false,false,false,false};
};

#endif // PLATFORMER_GAMEOBJECT_H
