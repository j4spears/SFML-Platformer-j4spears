#include "Player.h"

Player::Player(){}

Player::~Player()
{}

void Player::Init()
{
  initialiseSprite(*texture, "../Data/Images/kenney_pixelplatformer/Characters/character_0000.png");
  getSprite()->setScale(2.0f,2.0f);

  stateMachine.initialise(std::make_shared<IDLE>());
}

void Player::update(float dt)
{
  stateMachine.update(dt);
}