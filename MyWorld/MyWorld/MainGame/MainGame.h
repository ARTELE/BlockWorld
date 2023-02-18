#pragma once

class MainGame
{
	virtual bool ShouldBreakLoop() = 0;
	virtual void BeginUpdate() = 0;
	virtual void Update() = 0;
	virtual void EndUpdate() = 0;
public:
	virtual void InitGame() = 0;
	virtual void GameLoop();
};