#include "kazuate.h"
#include <iostream>
using namespace std;

void InputPNum()
{
	while (!(playerNum >= 0 && playerNum <= 9))
	{
		cout << "0 ` 9 ‚Ü‚Å‚Ì‚¢‚¸‚ê‚©‚Ì”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > " << flush;
		cin >> playerNum;
		if (!(playerNum >= 0 && playerNum <= 9))
		{
			cout << "•s³‚È’l‚ª“ü—Í‚³‚ê‚Ü‚µ‚½" << endl;
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
		cout << "³‰ðI" << endl;
		clear = true;
	}
	else if (playerNum < answerNum)
	{
		cout << "³‰ð‚Í‚à‚Á‚Æ‘å‚«‚¢”‚Ì‚æ‚¤‚¾" << endl;
	}
	else
	{
		cout << "³‰ð‚Í‚à‚Á‚Æ¬‚³‚¢”‚Ì‚æ‚¤‚¾" << endl;
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