#ifndef PLATFORMER_PLAYER_H
#define PLATFORMER_PLAYER_H
#include "GameObject.h"
#include "Vector2.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "StateMachine.h"
#include "IDLE.h"`
#include "RUN.h"

class Player : public GameObject
{
 public:
  Player();
  ~Player();
  void Init();
  void update(float dt);
  
  StateMachine stateMachine;
};

#endif // PLATFORMER_PLAYER_H
