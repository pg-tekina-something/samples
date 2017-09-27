#pragma once

#include "IState.h"
#include "IContext.h"

#include <iostream>
#include "StateFactory.h"

class StateC : public IState
{
public:
	StateC() {}
	~StateC() {}

	void excute()
	{
		std::cout << "excute by state C" << std::endl;
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
		default:
			break;
		}
	}

	void showCurrentState()
	{
		std::cout << "state C" << std::endl;
	}

};