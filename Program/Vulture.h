#pragma once
#include "Terran.h"

class Vulture : public Terran
{
public:
	Vulture();

	virtual void Move() override ;

	// ���� �Լ��� �� �� �̻��� ���� �Լ��� �����ϴ�
	// Ŭ������ ���� �� ��ü �ּҿ� ���� �Լ� ���̺��� �߰��մϴ�.
};