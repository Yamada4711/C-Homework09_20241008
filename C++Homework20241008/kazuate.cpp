#include "kazuate.h"
#include <iostream>
using namespace std;

void InputPNum()
{
	while (!(playerNum >= 0 && playerNum <= 9))
	{
		cout << "0 �` 9 �܂ł̂����ꂩ�̐�������͂��Ă������� > " << flush;
		cin >> playerNum;
		if (!(playerNum >= 0 && playerNum <= 9))
		{
			cout << "�s���Ȓl�����͂���܂���" << endl;
		}
	}
}

void InputANum()
{
	answerNum = rand() % 10;
}

void JudgeNum()
{
	if (playerNum == answerNum)
	{
		cout << "�����I" << endl;
		clear = true;
	}
	else if (playerNum < answerNum)
	{
		cout << "�����͂����Ƒ傫�����̂悤��" << endl;
	}
	else
	{
		cout << "�����͂����Ə��������̂悤��" << endl;
	}
	playerNum = -1;
}

void PlayKazuateGame()
{
	InputANum();

	while (!clear)
	{
		InputPNum();
		JudgeNum();
	}
}