#pragma once

class PLAYER
{
private:
	int money;
	int num;
public:
	PLAYER() { money = 100000; num = 0; };
	//PLAYER(PLAYER& ref) { ref.money = money; ref.num = num; };
	void ShowMoney();
};