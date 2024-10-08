#include "rand.h"
#include "janken.h"
#include "kazuate.h"
#include <iostream>
using namespace std;

int main()
{
	InitRand();

	int gameNum = -1;

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

	if (gameNum == 0)
	{
		PlayJankenGame();
	}
	else
	{

	}


}