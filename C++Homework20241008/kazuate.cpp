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