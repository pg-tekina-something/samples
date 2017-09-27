#pragma once

#include "IState.h"
#include "IContext.h"

#include <iostream>
#include "StateFactory.h"

class StateB : public IState
{
public:
	StateB() {}
	~StateB() {}

	void excute()
	{
		std::cout << "excute by state B" << std::endl;
	}

	void changeState(IContext& ctx, Factor factor)
	{
		switch (factor)
		{
		case TriggerA:
			ctx.changeState(StateFactory::getInstance().getStateA());
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
		std::cout << "state B" << std::endl;
	}

};