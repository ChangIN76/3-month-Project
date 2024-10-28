#include "KeyBoard.h"
#include <iostream>

using namespace std;

KeyBoard::KeyBoard()
{
	cout << "Create KeyBoard" << endl;
}

void KeyBoard::OnEnter()
{
	cout << "KeyBoard Enter" << endl;
}

KeyBoard::~KeyBoard()
{
	cout << "Release KeyBoard" << endl;
}
