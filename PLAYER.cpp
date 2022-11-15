#include "CommonDec.h"
#include "PLAYER.h"
#include "MENU.h"

void PLAYER::ShowMoney()
{
	cout << money << '\n' << '\n';
}

int PLAYER::GetMoney()
{
	return money;
}

void PLAYER::GetCard(int num, int pat)
{
	switch (pat)
	{
	case 1:
		patton = "♠";
		break;
	case 2:
		patton = "♡";
		break;
	case 3:
		patton = "♣";
		break;
	case 4:
		patton = "◇";
		break;
	}

	cout << " 당신의 카드는 ";

	switch (num)
	{
	case 11:
		cout << patton << ' ' << 'J';
		number += 10;
		break;
	case 12:
		cout << patton << ' ' << 'Q';
		number += 10;
		break;
	case 13:
		cout << patton << ' ' << 'K';
		number += 10;
		break;
	default:
		cout << patton << ' ' << num;
		number += num;
	}
	cout << "입니다." << '\n' << '\n';
}

int PLAYER::Getnumber()
{
	return number;
}

void PLAYER::Gameset()
{
	number = 0;
}

void PLAYER::Gamelose(int batmoney)
{
	cout << '\n' << '\n' << '\n';
	cout << " 이번 게임에 배팅한 금액 : " << batmoney << '\n' << '\n';
	money -= batmoney;
	cout << " 현재 보유 금액 : " << money << '\n' << '\n' << '\n' << '\n' << '\n';
}

void PLAYER::Gamewin(int batmoney)
{
	cout << '\n' << '\n' << '\n';
	cout << " 이번 게임에 배팅한 금액 : " << batmoney << '\n' << '\n';
	money += batmoney;
	cout << " 현재 보유 금액 : " << money << '\n' << '\n' << '\n' << '\n' << '\n';
}

void Dealer::GetCard(int num, int pat)
{
	switch (pat)
	{
	case 1:
		patton = "♠";
		break;
	case 2:
		patton = "♡";
		break;
	case 3:
		patton = "♣";
		break;
	case 4:
		patton = "◇";
		break;
	}

	cout << " 딜러의 카드는 ";

	switch (num)
	{
	case 11:
		cout << patton << ' ' << 'J';
		number += 10;
		break;
	case 12:
		cout << patton << ' ' << 'Q';
		number += 10;
		break;
	case 13:
		cout << patton << ' ' << 'K';
		number += 10;
		break;
	default:
		cout << patton << ' ' << num;
		number += num;
	}
	cout << "입니다." << '\n' << '\n';
}

int Dealer::Getnumber()
{
	return number;
}

void PLAYER::Bank(int bankmoney)
{
	money += bankmoney;
}