#ifndef PLATFORMER_FALL_H
#define PLATFORMER_FALL_H

#include "State.h"

class FALL : public State
{
 public:
  FALL();
  ~FALL();
  void enter() override;
  void update(float dt) override;
  void exit() override;
};

#endif // PLATFORMER_FALL_H
