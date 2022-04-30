#include "CommonDec.h"
#include "MENU.h"
#include "PLAYER.h"

int main(void)
{
	MENU menu;
	PLAYER user;
	int select;
	menu.ShowIntro();

	while (1)
	{
		menu.ShowMenu();
		cin >> select;
		switch (select)
		{
		case 1:
			menu.Game(user);
			break;
		case 2:
			menu.Wallet(user);
			break;
		case 3:
			menu.Rule();
			break;
		case 4:
			menu.Bank(user);
			break;
		case 5:
			menu.Close();
			return 0;
		}
	}


	return 0;
}