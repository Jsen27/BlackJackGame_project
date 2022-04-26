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
};

class Dealer
{
private:
	string patton;
	int num;
public:

};