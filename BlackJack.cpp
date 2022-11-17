#include "CommonDec.h"
#include "PLAYER.h"

void MainGame(PLAYER& user, int batting)
{
	srand((unsigned int)time(NULL));
	Dealer deal;
	user.Gameset();
	cout << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n';
	cout << " 딜러가 카드를 나누어준다. " << '\n' << '\n' << '\n' << '\n';
	user.GetCard(rand() % 13 + 1, rand() % 4 + 1);
	deal.GetCard(rand() % 13 + 1, rand() % 4 + 1);
	user.GetCard(rand() % 13 + 1, rand() % 4 + 1);
	cout << '\n' << '\n';

	while (1)
	{
		int select;
		if (user.Getnumber() > 21)
		{
			cout << " 당신의 카드의 총 합은 " << user.Getnumber() << " 으로 21을 초과하였습니다." << '\n' << '\n';
			cout << " 아쉽지만 게임에서 패배하였습니다. " << '\n' << '\n';
			cout << " 다음게임에서 행운이 있길..." << '\n' << '\n';
			user.Gamelose(batting);
			cout << " ★아무키나 누르세요★" << '\n';
			_getch();
			return;
		}
		else if (user.Getnumber() == 21)
		{
			cout << " 당신의 카드의 총 합은 " << user.Getnumber() << " 으로 승리하였습니다." << '\n' << '\n';
			cout << " 축하드립니다. 다음에 또 이용해주시길 바랍니다." << '\n' << '\n';
			user.Gamewin(batting);
			cout << " ★아무키나 누르세요★" << '\n';
			_getch();
			return;
		}
		else
		{
			while (1)
			{
				cout << "----------------------------------------------------------" << '\n' << '\n';
				cout << " 현재 딜러의 카드의 총 합은 " << deal.Getnumber() << " 입니다." << '\n' << '\n';
				cout << " 당신의 카드의 총 합은 " << user.Getnumber() << " 입니다." << '\n' << '\n';
				cout << "----------------------------------------------------------" << '\n' << '\n' << '\n';
				cout << " 카드를 한장 더 받으려면 (   1   )" << '\n' << '\n';
				cout << " STOP 하려면 (  2  )" << '\n' << '\n' << '\n' << '\n';
				cout << " 당신의 선택은 : ";
				cin >> select;
				cout << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n';

				if (select == 1)
				{
					cout << " 딜러가 카드를 나누어준다. " << '\n' << '\n' << '\n' << '\n';
					user.GetCard(rand() % 13 + 1, rand() % 4 + 1);
					cout << '\n' << '\n';
					if (user.Getnumber() > 21)
					{
						cout << " 당신의 카드의 총 합은 " << user.Getnumber() << " 으로 21을 초과하였습니다." << '\n' << '\n';
						cout << " 아쉽지만 게임에서 패배하였습니다. " << '\n' << '\n';
						cout << " 다음게임에서 행운이 있길..." << '\n' << '\n';
						user.Gamelose(batting);
						cout << " ★아무키나 누르세요★" << '\n';
						_getch();
						return;
					}
					else if (user.Getnumber() == 21)
					{
						cout << " 당신의 카드의 총 합은 " << user.Getnumber() << " 으로 승리하였습니다." << '\n' << '\n';
						cout << " 축하드립니다. 다음에 또 이용해주시길 바랍니다" << '\n' << '\n';
						user.Gamewin(batting);
						cout << " ★아무키나 누르세요★" << '\n';
						_getch();
						return;
					}
				}
				else if (select == 2)
				{
					while (1)
					{
						if (deal.Getnumber() < 17)
						{
							cout << "----------------------------------------------------------" << '\n' << '\n';
							cout << " 현재 딜러의 카드의 총 합은 " << deal.Getnumber() << " 입니다." << '\n' << '\n';
							cout << " 당신의 카드의 총 합은 " << user.Getnumber() << " 입니다." << '\n' << '\n';
							cout << "----------------------------------------------------------" << '\n' << '\n' << '\n';
							cout << " 현재 딜러의 카드의 총 합은 " << deal.Getnumber() << " 이므로 한장 더 받습니다." << '\n' << '\n';
							cout << " ★아무키나 누르세요★" << '\n' << '\n' << '\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n';
							_getch();
							deal.GetCard(rand() % 13 + 1, rand() % 4 + 1);
							cout << '\n' << '\n' << '\n';
							continue;
						}
						else if (deal.Getnumber() == 21)
						{
							cout << "----------------------------------------------------------" << '\n' << '\n';
							cout << " 현재 딜러의 카드의 총 합은 " << deal.Getnumber() << " 입니다." << '\n' << '\n';
							cout << " 당신의 카드의 총 합은 " << user.Getnumber() << " 입니다." << '\n' << '\n';
							cout << "----------------------------------------------------------" << '\n' << '\n' << '\n';
							cout << " 딜러의 카드의 총 합이 21 이므로 당신이 패배하였습니다." << '\n' << '\n';
							cout << " 다음게임에서 행운이 있길..." << '\n' << '\n';
							user.Gamelose(batting);
							cout << " ★아무키나 누르세요★" << '\n';
							_getch();
							return;
						}
						else if (deal.Getnumber() > 21)
						{
							cout << "----------------------------------------------------------" << '\n' << '\n';
							cout << " 현재 딜러의 카드의 총 합은 " << deal.Getnumber() << " 입니다." << '\n' << '\n';
							cout << " 당신의 카드의 총 합은 " << user.Getnumber() << " 입니다." << '\n' << '\n';
							cout << "----------------------------------------------------------" << '\n' << '\n' << '\n';
							cout << " 딜러의 카드의 총 합은 " << deal.Getnumber() << " 으로 21을 초과하였습니다." << '\n' << '\n';
							cout << " 축하드립니다. 당신이 승리하였습니다. " << '\n' << '\n';
							cout << " 다음에 또 이용해주시길 바랍니다" << '\n' << '\n';
							user.Gamewin(batting);
							cout << " ★아무키나 누르세요★" << '\n';
							_getch();
							return;
						}
						else if (user.Getnumber() == deal.Getnumber())
						{
							cout << "----------------------------------------------------------" << '\n' << '\n';
							cout << " 현재 딜러의 카드의 총 합은 " << deal.Getnumber() << " 입니다." << '\n' << '\n';
							cout << " 당신의 카드의 총 합은 " << user.Getnumber() << " 입니다." << '\n' << '\n';
							cout << "----------------------------------------------------------" << '\n' << '\n' << '\n';
							cout << " 딜러의 카드 총 합과 당신의 카드의 총 합이 " << user.Getnumber() << " 으로 같습니다." << '\n' << '\n';
							cout << " 아쉽지만 게임에서 비겼습니다." << '\n' << '\n';
							cout << " 다음게임에서 행운이 있길..." << '\n' << '\n';
							user.Gamelose(batting);
							cout << " ★아무키나 누르세요★" << '\n';
							_getch();
							return;
						}
						else
						{
							if (user.Getnumber() > deal.Getnumber())
							{
								cout << "----------------------------------------------------------" << '\n' << '\n';
								cout << " 현재 딜러의 카드의 총 합은 " << deal.Getnumber() << " 입니다." << '\n' << '\n';
								cout << " 당신의 카드의 총 합은 " << user.Getnumber() << " 입니다." << '\n' << '\n';
								cout << "----------------------------------------------------------" << '\n' << '\n' << '\n';
								cout << " 축하드립니다. 당신이 승리했습니다." << '\n' << '\n';
								cout << " 다음에 또 이용해주시길 바랍니다" << '\n' << '\n';
								user.Gamewin(batting);
								cout << " ★아무키나 누르세요★" << '\n';
								_getch();
								return;
							}
							else
							{
								cout << "----------------------------------------------------------" << '\n' << '\n';
								cout << " 현재 딜러의 카드의 총 합은 " << deal.Getnumber() << " 입니다." << '\n' << '\n';
								cout << " 당신의 카드의 총 합은 " << user.Getnumber() << " 입니다." << '\n' << '\n';
								cout << "----------------------------------------------------------" << '\n' << '\n' << '\n';
								cout << " 아쉽지만 게임에서 패배하였습니다. " << '\n' << '\n';
								cout << " 다음게임에서 행운이 있길..." << '\n' << '\n';
								user.Gamelose(batting);
								cout << " ★아무키나 누르세요★" << '\n';
								_getch();								
								return;
							}
						}
					}
				}
				else
				{
					cout << "잘못 입력하였습니다." << '\n' << '\n';
				}
			}
		}
	}
}