#include "rand.h"
#include "janken.h"
#include "kazuate.h"
#include <iostream>
using namespace std;

int main()
{
	InitRand();

	int gameNum = -1;

	bool quit = false;

	char choice;

	while (!quit)
	{

		while (!(gameNum == 0 || gameNum == 1))
		{
			cout << "「じゃんけんゲーム」と「数当てゲーム」どちらで遊びますか？" << endl
				<< "「じゃんけんゲーム」なら 0 を、「数当てゲーム」なら 1 を入力してください" << endl;
			cin >> gameNum;

			if (!(gameNum == 0 || gameNum == 1))
			{
				cout << "不正な値が入力されました" << endl;
			}
		}

		cout << endl;

		if (gameNum == 0)
		{
			PlayJankenGame();
		}
		else
		{
			PlayKazuateGame();
		}

		gameNum = -1;
		
		cout << endl;

		cout << "ゲームをやめますか？やめたい場合は「q」を、続ける場合はそれ以外の文字を入力してください。 > " << flush;
		cin >> choice;
		if (choice == 'q' || choice == 'Q')
		{
			cout << "ゲームを終了します" << endl;
			quit = true;
		}

		cout << endl;
	}
}