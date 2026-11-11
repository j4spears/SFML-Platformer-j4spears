#ifndef PLATFORMER_RUN_H
#define PLATFORMER_RUN_H

#include "State.h"

class RUN : public State
{
 public:
  RUN();
  ~RUN();
  void enter() override;
  void update(float dt) override;
  void exit() override;
};

#endif // PLATFORMER_RUN_H
