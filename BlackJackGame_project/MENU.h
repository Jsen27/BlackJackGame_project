#pragma once
#include "PLAYER.h"

class PLAYER;

class MENU
{
private:
	
public:
	void ShowIntro();
	void ShowMenu();
	void Game(PLAYER&user);
	void Wallet(PLAYER& user);
	void Rule();
	void Bank(PLAYER& user);
	void Close();
};