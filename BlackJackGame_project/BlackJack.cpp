#include "CommonDec.h"
#include "PLAYER.h"

void MainGame(PLAYER& user, int batting)
{
	srand((unsigned int)time(NULL));
	Dealer deal;
	user.Gameset();
	cout << " 딜러가 카드를 나누어준다. " << '\n' << '\n';
	user.GetCard(rand() % 13 + 1, rand() % 4 + 1);
	user.GetCard(rand() % 13 + 1, rand() % 4 + 1);
	deal.GetCard(rand() % 13 + 1, rand() % 4 + 1);
	cout << " 현재 딜러의 카드의 총 합은 " << deal.Getnumber() << "입니다." << '\n';
	while (1)
	{
		int select;
		if (user.Getnumber() > 21)
		{
			cout << " 당신의 카드의 총 합은 " << user.Getnumber() << "으로 21을 초과하였습니다." << '\n' << '\n';
			cout << " 아쉽지만 게임에서 패배하였습니다. " << '\n' << '\n';
			cout << " 다음게임에서 행운이 있길..." << '\n' << '\n';
			cout << " ★아무키나 누르세요★";
			_getch();
			user.Gamelose(batting);
			return;
		}
		else if (user.Getnumber() == 21)
		{
			cout << " 당신의 카드의 총 합은 " << user.Getnumber() << " 으로 승리하였습니다." << '\n' << '\n';
			cout << " 축하드립니다. 다음에 또 이용해주시길 바랍니다" << '\n' << '\n';
			cout << " ★아무키나 누르세요★";
			_getch();
			user.Gamewin(batting);
			return;
		}
		else if (deal.Getnumber() == 21)
		{
			cout << " 딜러의 카드의 총 합이 21으로 당신이 패배하였습니다." << '\n' << '\n';
			cout << " 다음게임에서 행운이 있길..." << '\n' << '\n';
			cout << " ★아무키나 누르세요★";
			_getch();
			user.Gamelose(batting);
		}
		else
		{
			if(deal.Getnumber()<17)
			if (deal.Getnumber() == 21)
			{
				cout << " 딜러의 카드의 총 합이 21으로 당신이 패배하였습니다." << '\n' << '\n';
				cout << " 다음게임에서 행운이 있길..." << '\n' << '\n';
				cout << " ★아무키나 누르세요★";
				_getch();
				user.Gamelose(batting);
			}
			

			while (1)
			{
				cout << " 당신의 카드의 총 합은 " << user.Getnumber() << " 입니다." << '\n' << '\n';
				cout << " 카드를 한장 더 받으려면 (   1   )" << '\n';
				cout << " STOP 하려면 (  2  )" << '\n' << '\n';
				cout << " 당신의 선택은 : ";
				cin >> select;

				if (select == 1)
				{
					user.GetCard(rand() % 13 + 1, rand() % 4 + 1);
					break;
				}
				else if (select == 2)
				{	// STOP 구현해야 함
					break;
				}
				else
				{
					cout << "잘못 입력하였습니다." << '\n' << '\n';
				}
			}
			
		}


	}
}