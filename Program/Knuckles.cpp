#include "Knuckles.h"

Knuckles::Knuckles()
{
	attack = 8;
	intersection = 0;
}

void Knuckles::Attack()
{
	cout << "Knuckles Attack" << endl;
	cout << "���ݷ� : " << attack << endl;
	cout << "��Ÿ� : " << intersection << endl;
}