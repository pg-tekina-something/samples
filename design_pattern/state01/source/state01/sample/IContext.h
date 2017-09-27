#pragma once

#include "IState.h"

class IContext
{
public:
	IContext() {}
	virtual ~IContext() {}

	virtual void changeState(IState *state) = 0;
};