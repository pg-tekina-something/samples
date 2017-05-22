#pragma once

#include "IState.h"

class StateFactory
{
public:
	static StateFactory& getInstance();

	IState* getStateA();
	IState* getStateB();
	IState* getStateC();
	IState* getStateDummy();

private:
	StateFactory();
	StateFactory(const StateFactory&);
	~StateFactory();

	IState* stateA_;
	IState* stateB_;
	IState* stateC_;
	IState* stateDummy_;
};