#pragma once
#include "MENU.h"

class PLAYER
{
private:
	int money;
	int num = 0;
public:
	PLAYER(int n) :money(n) {};
	int draw(int n);
	void ShowMoney();
};