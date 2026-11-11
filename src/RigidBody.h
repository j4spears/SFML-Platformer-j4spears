#ifndef PLATFORMER_RIGIDBODY_H
#define PLATFORMER_RIGIDBODY_H

#include "GameObject.h"


class RigidBody : public GameObject
{
 public:
  RigidBody();
  ~RigidBody();
  void update(float dt);
  void applyForce(Vector2 force);

 private:
  Vector2 velocity;
  float gravity_scale = 1.0f;
  bool freeze = false;
};

#endif // PLATFORMER_RIGIDBODY_H
