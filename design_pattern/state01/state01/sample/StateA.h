#pragma once

#include "IState.h"
#include "IContext.h"

#include <iostream>
#include "StateFactory.h"

class StateA : public IState
{
public:
	StateA() {}
	~StateA() {}

	void excute()
	{
		std::cout << "excute by state A" << std::endl;
	}

	void changeState(IContext& ctx, Factor factor)
	{
		switch (factor)
		{
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
		std::cout << "state A" << std::endl;
	}

};