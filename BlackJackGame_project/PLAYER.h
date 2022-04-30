#pragma once

class PLAYER
{
private:
	string patton;
	int money;
	int number;
public:
	PLAYER() { money = 100000; number = 0; };
	void ShowMoney();
	int GetMoney();
	void GetCard(int num, int pat);
	int Getnumber();
	void Gameset();
	void Gamelose(int batmoney);
	void Gamewin(int batmoney);
	void Bank(int bankmoney);
};

class Dealer
{
private:
	string patton;
	int number;
public:
	Dealer() { number = 0; };
	void GetCard(int num, int pat);
	int Getnumber();
};