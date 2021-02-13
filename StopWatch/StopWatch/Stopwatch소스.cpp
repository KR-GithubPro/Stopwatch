#include <stdio.h>
#include <conio.h>
#include <Windows.h>

int main()
{
	SetConsoleTitle(TEXT("STOPWATCH"));
	system("mode con cols=33 lines=8");

	int secs = 0;
	int mins = 0;
	int hurs = 0;

	while (true)
	{
		if (_kbhit())
		{
			if (_getch() == ' ')
			{
				secs -= 1;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				printf("    총 시간: %2d시간 :%2d분 :%2d초", hurs, mins, secs);
				break;
			}
		}

		if (secs >= 60)
		{
			mins += 1;
			secs = 0;
		}

		if (mins >= 60)
		{
			hurs += 1;
			mins = 0;
		}


		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("┏──────────────────────────────┓\n");
		printf("│");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf("     StopWatch | 스탑워치     ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("│\n");
		printf("│                              │\n");
		printf("│");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		printf("      %2d시간 :%2d분 :%2d초      ", hurs, mins, secs);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf("│\n");
		printf("│                              │\n");
		printf("┗──────────────────────────────┛");

		Sleep(1000);
		secs++;
	}

	
	getchar();
	return 0;
}
