#ifndef PLATFORMER_IDLE_H
#define PLATFORMER_IDLE_H

#include "State.h"

class IDLE : public State
{
 public:
  IDLE();
  ~IDLE();
  void enter() override;
  void update(float dt) override;
  void exit() override;
};

#endif // PLATFORMER_STATE_H
