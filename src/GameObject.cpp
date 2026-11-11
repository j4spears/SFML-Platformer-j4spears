#include "GameObject.h"
#include <iostream>

GameObject::GameObject()
{
  sprite  = new sf::Sprite();
  texture = new sf::Texture();
}

GameObject::~GameObject()
{
  /*delete sprite;
  delete texture;*/
}

bool GameObject::initialiseSprite(sf::Texture& texture, std::string filename)
{
  if (!texture.loadFromFile(filename))
  {
    std::cout << "Failed to load texture: " << filename << std::endl;
    return false;
  }

  sprite->setTexture(texture);

  return true;
}

sf::Sprite* GameObject::getSprite()
{
  return sprite;
}

void GameObject::setVisiblilty(bool visibility)
{
  visible = visibility;
}

bool GameObject::isVisable()
{
  return visible;
}