#include "MainGame.h"

void MainGame::GameLoop()
{
	while (!ShouldBreakLoop())
	{
		BeginUpdate();
		Update();
		EndUpdate();
	}
}