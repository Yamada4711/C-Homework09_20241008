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
		cout << "�u����񂯂�Q�[���v�Ɓu�����ăQ�[���v�ǂ���ŗV�т܂����H" << endl
			<< "�u����񂯂�Q�[���v�Ȃ� 0 ���A�u�����ăQ�[���v�Ȃ� 1 ����͂��Ă�������" << endl;
		cin >> gameNum;

		if (!(gameNum == 0 || gameNum == 1))
		{
			cout << "�s���Ȓl�����͂���܂���" << endl;
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