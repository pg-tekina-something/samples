#pragma once

class IContext;

class IState
{
public:
	enum Factor
	{
		TriggerA,
		TriggerB,
		TriggerC,
	};

	IState() {}
	virtual ~IState() {}

	virtual void excute() = 0;
	virtual void changeState(IContext& ctx, Factor factor) = 0;
	virtual void showCurrentState() = 0;
};