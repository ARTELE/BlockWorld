#include <iostream>
#include "MainGame/MainGameOpenGL.h"
using namespace std;

int main()
{
	cout << "Hello World." << endl;
	MainGameOpenGL mainGame;
	mainGame.InitGame();
	mainGame.GameLoop();
	return 0;
}
