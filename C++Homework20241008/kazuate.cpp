#include "kazuate.h"
#include <iostream>
using namespace std;

void InputPNum()
{
	playerNum = -1;
	while (!(playerNum >= 0 && playerNum <= 9))
	{
		cout << "0 ～ 9 までのいずれかの数字を入力してください > " << flush;
		cin >> playerNum;
		if (!(playerNum >= 0 && playerNum <= 9))
		{
			cout << "不正な値が入力されました" << endl;
		}
	}
}

void InputANum()
{
	answerNum = rand() % 10;

#define DEBUG

#ifdef DEBUG

	cout << endl;
	cout << "<<デバッグ>> 正解の数字は " << answerNum << " です" << endl;
	cout << endl;

#endif // DEBUG

}

void JudgeNum()
{
	if (playerNum == answerNum)
	{
		cout << "正解！" << endl;
		clear = true;
	}
	else if (playerNum < answerNum)
	{
		cout << "正解はもっと大きい数のようだ" << endl;
	}
	else
	{
		cout << "正解はもっと小さい数のようだ" << endl;
	}
}

void PlayKazuateGame()
{
	InputANum();

	while (!clear)
	{
		InputPNum();
		JudgeNum();
	}
	clear = false;
}