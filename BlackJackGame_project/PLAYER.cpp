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
		patton = "��";
		break;
	case 2:
		patton = "��";
		break;
	case 3:
		patton = "��";
		break;
	case 4:
		patton = "��";
		break;
	}

	cout << " ����� ī��� ";

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
	cout << "�Դϴ�." << '\n' << '\n';
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
	cout << " �̹� ���ӿ� ������ �ݾ� : " << batmoney << '\n' << '\n';
	money -= batmoney;
	cout << " ���� ���� �ݾ� : " << money << '\n' << '\n' << '\n' << '\n' << '\n';
}

void PLAYER::Gamewin(int batmoney)
{
	cout << '\n' << '\n' << '\n';
	cout << " �̹� ���ӿ� ������ �ݾ� : " << batmoney << '\n' << '\n';
	money += batmoney;
	cout << " ���� ���� �ݾ� : " << money << '\n' << '\n' << '\n' << '\n' << '\n';
}

void Dealer::GetCard(int num, int pat)
{
	switch (pat)
	{
	case 1:
		patton = "��";
		break;
	case 2:
		patton = "��";
		break;
	case 3:
		patton = "��";
		break;
	case 4:
		patton = "��";
		break;
	}

	cout << " ������ ī��� ";

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
	cout << "�Դϴ�." << '\n' << '\n';
}

int Dealer::Getnumber()
{
	return number;
}

void PLAYER::Bank(int bankmoney)
{
	money += bankmoney;
}