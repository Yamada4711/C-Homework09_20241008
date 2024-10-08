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