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
		}
	}


	return 0;
}