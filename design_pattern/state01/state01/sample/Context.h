#pragma once

#include "IContext.h"
#include "IState.h"
#include "StateFactory.h"

class Context : public IContext
{
public:
	enum Event
	{
		EventA,
		EventB,
		EventC,
	};

	Context() 
		: curState_(StateFactory::getInstance().getStateDummy())
	{
	}
	~Context() {}

	void onEvent(Event evt)
	{
		switch (evt)
		{
		case EventA:
			this->curState_->changeState(*this, IState::TriggerA);
			break;
		case EventB:
			this->curState_->changeState(*this, IState::TriggerB);
			break;
		case EventC:
			this->curState_->changeState(*this, IState::TriggerC);
			break;
		}
	}

	void excute()
	{
		this->curState_->showCurrentState();
		this->curState_->excute();
	}

	void changeState(IState *state)
	{
		this->curState_ = state;
	}

private:
	IState *curState_;

};