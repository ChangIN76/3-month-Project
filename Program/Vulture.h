#pragma once
#include "Terran.h"

class Vulture : public Terran
{
public:
	Vulture();

	virtual void Move() override ;

	// 가상 함수는 한 개 이상의 가상 함수를 포함하는
	// 클래스가 있을 때 객체 주소에 가상 함수 테이블을 추가합니다.
};