#include "CommonDec.h"
#include "PLAYER.h"
#include "MENU.h"

int main(void)
{
	MENU menu;
	int select;
	menu.ShowIntro();

	while (1)
	{
		menu.ShowMenu();
		cin >> select;
		switch (select)
		{
		case 1:
			menu.Game();
			break;
		}
	}


	return 0;
}