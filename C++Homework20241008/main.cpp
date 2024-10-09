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
			cout << "�u����񂯂�Q�[���v�Ɓu�����ăQ�[���v�ǂ���ŗV�т܂����H" << endl
				<< "�u����񂯂�Q�[���v�Ȃ� 0 ���A�u�����ăQ�[���v�Ȃ� 1 ����͂��Ă�������" << endl;
			cin >> gameNum;

			if (!(gameNum == 0 || gameNum == 1))
			{
				cout << "�s���Ȓl�����͂���܂���" << endl;
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

		cout << "�Q�[������߂܂����H��߂����ꍇ�́uq�v���A������ꍇ�͂���ȊO�̕�������͂��Ă��������B > " << flush;
		cin >> choice;
		if (choice == 'q' || choice == 'Q')
		{
			cout << "�Q�[�����I�����܂�" << endl;
			quit = true;
		}

		cout << endl;
	}
}