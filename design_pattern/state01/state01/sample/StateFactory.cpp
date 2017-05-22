#include "StateFactory.h"
#include "StateA.h"
#include "StateB.h"
#include "StateC.h"
#include "StateDummy.h"

StateFactory::StateFactory() 
: stateA_(new StateA())
, stateB_(new StateB())
, stateC_(new StateC())
, stateDummy_(new StateDummy())
{}

StateFactory::~StateFactory() 
{
	delete stateA_;
	delete stateB_;
	delete stateC_;
	delete stateDummy_;
}

StateFactory& StateFactory::getInstance()
{
	static StateFactory ins;
	return ins;
}

IState* StateFactory::getStateA()
{
	return stateA_;
}

IState* StateFactory::getStateB()
{
	return stateB_;
}

IState* StateFactory::getStateC()
{
	return stateC_;
}

IState* StateFactory::getStateDummy()
{
	return stateDummy_;
}

