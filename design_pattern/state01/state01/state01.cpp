// state01.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
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

