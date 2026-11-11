#include "StateMachine.h"

StateMachine::StateMachine() {}

StateMachine::~StateMachine() {}

void StateMachine::initialise(std::shared_ptr<State> initialState) 
{
  current_state = initialState;
}


void StateMachine::changeState(std::shared_ptr<State> new_state) 
{
  current_state->exit();
  current_state = new_state;
  current_state->enter();
}

void StateMachine::update(float dt)
{
  current_state->update(dt);
}


