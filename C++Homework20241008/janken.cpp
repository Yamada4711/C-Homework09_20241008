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
		cout << "次の三つのうちから一つ選んでください。" << flush
			<< "グー: 0, チョキ: 1, パー: 2" << endl;
		cin >> janken[1].hand;
		if (!(janken[1].hand >= 0 && janken[1].hand <= 2))
		{
			cout << "不正な値が入力されました" << endl;
		}
	}
}

void InputHandD()
{
	janken[0].hand = rand() % 3;

#define DEBUG

#ifdef DEBUG

	cout << endl;
	cout << "<<デバッグ>> 相手の手がグーなら0、チョキなら1、パーなら2が表示されます" << endl;
	cout << janken[0].hand << endl;
	cout << endl;

#endif // DEBUG

}

void JudgeHand()
{
	switch (janken[0].hand)
	{
	case 0:
		janken[1].hand == 2 ? judge = 1 : // 勝ち
			janken[1].hand == 1 ? judge = -1 : // 負け
			judge = 0; // あいこ
		break;

	case 1:
		janken[1].hand == 0 ? judge = 1 : // 勝ち
			janken[1].hand == 2 ? judge = -1 : // 負け
			judge = 0; // あいこ
		break;

	case 2:
		janken[1].hand == 1 ? judge = 1 : // 勝ち
			janken[1].hand == 0 ? judge = -1 : // 負け
			judge = 0; // あいこ
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
		cout << "グー" << endl;
		break;

	case 1:
		cout << "チョキ" << endl;
		break;

	case 2:
		cout << "パー" << endl;
		break;

	default:
		break;
	}
}

void ShowWinner()
{
	cout << "<< 結果発表 >>" << endl;

	cout << "あなたの出した手 > " << flush;
	IsHand(janken[1].hand);

	cout << "相手の出した手 > " << flush;
	IsHand(janken[0].hand);

	cout << endl;

	switch (judge)
	{
	case -1:
		cout << "プレイヤーの負け！" << endl;
		break;

	case 0:
		cout << "あいこ" << endl;
		break;

	case 1:
		cout << "プレイヤーの勝ち！" << endl;
		break;

	default:
		break;
	}
}