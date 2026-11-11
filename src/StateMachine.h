#ifndef PLATFORMER_STATEMACHINE_H
#define PLATFORMER_STATEMACHINE_H

#include <iostream>
#include "State.h"
#include "GameObject.h"

class StateMachine
{
 public:
  StateMachine();
  ~StateMachine();
  void initialise(std::shared_ptr<State> initialState);
  void changeState(std::shared_ptr<State> new_state);
  void update(float dt);

  private:
  std::shared_ptr<State> current_state;
  GameObject owner;
};

#endif // PLATFORMER_STATEMACHINE_H
