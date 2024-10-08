#ifndef JANKEN_H_20241008_1419_
#define JANKEN_H_20241008_1419_

struct Janken
{
	int hand = -1;
};

static int judge;

static void InputHandP();

static void InputHandD();

static void IsHand(int h);

static void JudgeHand();

static void ShowWinner();

void PlayJankenGame();

#endif // JANKEN_H_20241008_1419_