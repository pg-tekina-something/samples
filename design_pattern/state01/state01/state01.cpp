// state01.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "Context.h"

int main()
{
	Context ctx;

	ctx.excute();
	
	ctx.onEvent(Context::EventA);
	ctx.excute();

	ctx.onEvent(Context::EventB);
	ctx.excute();

	ctx.onEvent(Context::EventC);
	ctx.excute();

	ctx.onEvent(Context::EventB);
	ctx.excute();

	ctx.onEvent(Context::EventA);
	ctx.excute();

	ctx.onEvent(Context::EventC);
	ctx.excute();

    return 0;
}

