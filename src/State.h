#ifndef PLATFORMER_STATE_H
#define PLATFORMER_STATE_H

#include "GameObject.h"

class State
{
 public:
  State();
  ~State();
  virtual void enter();
  virtual void update(float dt);
  virtual void exit();
	
};

#endif // PLATFORMER_STATE_H
