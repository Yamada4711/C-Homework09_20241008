#include "kazuate.h"
#include <iostream>
using namespace std;

void InputPNum()
{
	while (!(playerNum >= 0 && playerNum <= 9))
	{
		cout << "0 〜 9 までのいずれかの数字を入力してください > " << flush;
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
}