#include "CommonDec.h"
#include "PLAYER.h"

void MainGame(PLAYER& user, int batting)
{
	srand((unsigned int)time(NULL));
	Dealer deal;
	user.Gameset();
	cout << " ������ ī�带 �������ش�. " << '\n' << '\n';
	user.GetCard(rand() % 13 + 1, rand() % 4 + 1);
	user.GetCard(rand() % 13 + 1, rand() % 4 + 1);
	deal.GetCard(rand() % 13 + 1, rand() % 4 + 1);
	cout << " ���� ������ ī���� �� ���� " << deal.Getnumber() << "�Դϴ�." << '\n';
	while (1)
	{
		int select;
		if (user.Getnumber() > 21)
		{
			cout << " ����� ī���� �� ���� " << user.Getnumber() << "���� 21�� �ʰ��Ͽ����ϴ�." << '\n' << '\n';
			cout << " �ƽ����� ���ӿ��� �й��Ͽ����ϴ�. " << '\n' << '\n';
			cout << " �������ӿ��� ����� �ֱ�..." << '\n' << '\n';
			cout << " �ھƹ�Ű�� ���������";
			_getch();
			user.Gamelose(batting);
			return;
		}
		else if (user.Getnumber() == 21)
		{
			cout << " ����� ī���� �� ���� " << user.Getnumber() << " ���� �¸��Ͽ����ϴ�." << '\n' << '\n';
			cout << " ���ϵ帳�ϴ�. ������ �� �̿����ֽñ� �ٶ��ϴ�" << '\n' << '\n';
			cout << " �ھƹ�Ű�� ���������";
			_getch();
			user.Gamewin(batting);
			return;
		}
		else if (deal.Getnumber() == 21)
		{
			cout << " ������ ī���� �� ���� 21���� ����� �й��Ͽ����ϴ�." << '\n' << '\n';
			cout << " �������ӿ��� ����� �ֱ�..." << '\n' << '\n';
			cout << " �ھƹ�Ű�� ���������";
			_getch();
			user.Gamelose(batting);
		}
		else
		{
			if(deal.Getnumber()<17)
			if (deal.Getnumber() == 21)
			{
				cout << " ������ ī���� �� ���� 21���� ����� �й��Ͽ����ϴ�." << '\n' << '\n';
				cout << " �������ӿ��� ����� �ֱ�..." << '\n' << '\n';
				cout << " �ھƹ�Ű�� ���������";
				_getch();
				user.Gamelose(batting);
			}
			

			while (1)
			{
				cout << " ����� ī���� �� ���� " << user.Getnumber() << " �Դϴ�." << '\n' << '\n';
				cout << " ī�带 ���� �� �������� (   1   )" << '\n';
				cout << " STOP �Ϸ��� (  2  )" << '\n' << '\n';
				cout << " ����� ������ : ";
				cin >> select;

				if (select == 1)
				{
					user.GetCard(rand() % 13 + 1, rand() % 4 + 1);
					break;
				}
				else if (select == 2)
				{	// STOP �����ؾ� ��
					break;
				}
				else
				{
					cout << "�߸� �Է��Ͽ����ϴ�." << '\n' << '\n';
				}
			}
			
		}


	}
}