#pragma once
#include "includes.h"
class Dz1
{
private:
	int numb;

public:
	Dz1(int numb) {
		this->numb = numb;
		switch (numb)
		{
		case(1):z1(); break;
		case(2):z2(); break;
		case(3):z3(); break;
		case(4):z4(); break;
		case(5):z5(); break;

		default:std::cout << "не найдено";
			break;
		}
	
	}
	bool end();
	void z1();
	void z2();
	void z3();
	void z4();
	void z5();

};

