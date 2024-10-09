#include "janken.h"
#include <iostream>
using namespace std;

Janken janken[2];

void PlayJankenGame()
{
	InputHandD();
	InputHandP();
	JudgeHand();
	ShowWinner();
}

void InputHandP()
{
	janken[1].hand = -1;
	while (!(janken[1].hand >= 0 && janken[1].hand <= 2))
	{
		cout << "���̎O�̂��������I��ł��������B" << flush
			<< "�O�[: 0, �`���L: 1, �p�[: 2" << endl;
		cin >> janken[1].hand;
		if (!(janken[1].hand >= 0 && janken[1].hand <= 2))
		{
			cout << "�s���Ȓl�����͂���܂���" << endl;
		}
	}
}

void InputHandD()
{
	janken[0].hand = rand() % 3;

#define DEBUG

#ifdef DEBUG

	cout << endl;
	cout << "<<�f�o�b�O>> ����̎肪�O�[�Ȃ�0�A�`���L�Ȃ�1�A�p�[�Ȃ�2���\������܂�" << endl;
	cout << janken[0].hand << endl;
	cout << endl;

#endif // DEBUG

}

void JudgeHand()
{
	switch (janken[0].hand)
	{
	case 0:
		janken[1].hand == 2 ? judge = 1 : // ����
			janken[1].hand == 1 ? judge = -1 : // ����
			judge = 0; // ������
		break;

	case 1:
		janken[1].hand == 0 ? judge = 1 : // ����
			janken[1].hand == 2 ? judge = -1 : // ����
			judge = 0; // ������
		break;

	case 2:
		janken[1].hand == 1 ? judge = 1 : // ����
			janken[1].hand == 0 ? judge = -1 : // ����
			judge = 0; // ������
		break;

	default:
		break;
	}
}

void IsHand(int h)
{
	switch (h)
	{
	case 0:
		cout << "�O�[" << endl;
		break;

	case 1:
		cout << "�`���L" << endl;
		break;

	case 2:
		cout << "�p�[" << endl;
		break;

	default:
		break;
	}
}

void ShowWinner()
{
	cout << "<< ���ʔ��\ >>" << endl;

	cout << "���Ȃ��̏o������ > " << flush;
	IsHand(janken[1].hand);

	cout << "����̏o������ > " << flush;
	IsHand(janken[0].hand);

	cout << endl;

	switch (judge)
	{
	case -1:
		cout << "�v���C���[�̕����I" << endl;
		break;

	case 0:
		cout << "������" << endl;
		break;

	case 1:
		cout << "�v���C���[�̏����I" << endl;
		break;

	default:
		break;
	}
}