#include "kazuate.h"
#include <iostream>
using namespace std;

void InputPNum()
{
	playerNum = -1;
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

#define DEBUG

#ifdef DEBUG

	cout << endl;
	cout << "<<�f�o�b�O>> �����̐����� " << answerNum << " �ł�" << endl;
	cout << endl;

#endif // DEBUG

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