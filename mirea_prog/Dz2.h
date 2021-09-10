#pragma once
#include"includes.h"
class Dz2
{


public:
	Dz2(int numb) {
		switch (numb)
		{
		case 1:z1(); break;
		case 2:z2(); break;
		case 3:z3(); break;
		case 4:z4(); break;
		case 5:z5(); break;

		default:std::cout << "не найдено";
			break;
		}

	}

	void z1();
	void z2();
	void z3();
	void z4();
	void z5();


};