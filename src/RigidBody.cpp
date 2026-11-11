#include "RigidBody.h"

RigidBody::RigidBody() {}

RigidBody::~RigidBody() {}

void RigidBody::update(float dt)
{
  position.x += velocity.x * dt;
  position.y += velocity.y * dt;
  velocity.y += 98.1f * gravity_scale * dt;

  if (!freeze)
  {
	getSprite()->setPosition(position.x, position.y);
  }
}

void RigidBody::applyForce(Vector2 force)
{
  velocity.x += force.x;
  velocity.y += force.y;
}