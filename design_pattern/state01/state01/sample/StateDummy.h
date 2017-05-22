#pragma once

#include "IState.h"
#include "IContext.h"

#include <iostream>
#include "StateFactory.h"

class StateDummy : public IState
{
public:
	StateDummy() {}
	~StateDummy() {}

	void excute()
	{
		std::cout << "excute by state Dummy" << std::endl;
	}

	void changeState(IContext& ctx, Factor factor)
	{
		switch (factor)
		{
		case TriggerA:
			ctx.changeState(StateFactory::getInstance().getStateA());
			break;
		case TriggerB:
			ctx.changeState(StateFactory::getInstance().getStateB());
			break;
		case TriggerC:
			ctx.changeState(StateFactory::getInstance().getStateC());
			break;
		default:
			break;
		}
	}

	void showCurrentState()
	{
		std::cout << "state Dummy" << std::endl;
	}

};