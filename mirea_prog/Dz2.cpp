#include "Dz2.h"

void Dz2::z1()
{
	do {
		float R, r, h;
		std::cout << "введите высоту, большой радиус и малый радиус: " << std::endl;
		std::cin >> h >> R >> r;
		system("CLS");
		if (R < 0 || r < 0 || h < 0) {
			eror(); 
		}
		else {
			float L = sqrt(pow(R - r , 2) + pow(h, 2));
			std::cout << "ќбъем: " << (1/3)*PI * h * (pow(R, 2) + pow(r, 2) +R * r)  << std::endl;
			std::cout << "ѕлощадь: " << PI * (pow(R, 2) + pow(r, 2) + L * (R + r)) << std::endl;
		}
	} while (!end());
}

void Dz2::z2()
{
	do {
		std::cout << "введите x и a: " << std::endl;
		float x, y;
		std::cin >> x >> y;
		system("CLS");
		if (abs(x) < 1) {
			if (x == 0)
				eror();
			else
				std::cout << y * log(abs(x)) << std::endl;
		}
		else {
			if (y - pow(x, 2) < 0)
				eror();
			else
				std::cout << sqrt(y - pow(x, 2)) << std::endl;

		}

	} while (!end());
}

void Dz2::z3()
{
	do {
		std::cout << "введите x, y и b: " << std::endl;
		float x, y, b;
		std::cin >> x >> y >> b;
		system("CLS");
		if (b - y <= 0 || b - x < 0)
			eror();
		else
			std::cout << log(b - y) * sqrt(b - x)<<std::endl;
	} while (!end());
}

void Dz2::z4()
{
	do {
		std::cout << "введите число: " << std::endl;
		float n;
		std::cin >> n;
		system("CLS");
		
		if (n <= 0||int(n)!=n)
			eror();
		else
			for (int i = 1;i <= 10; i++) 
				std::cout << n + i << std::endl;

	} while (!end());

}

void Dz2::z5()
{
	do {
		std::cout << "табул€ци€ функции: " << std::endl;
		for (float i = -4; i <= 4; i += 0.5) {
			if (i == 1)
				std::cout << "не считаетс€" << std::endl;
			else
				std::cout << (pow(i, 2) - 2 * i + 2) / (i - 1) << std::endl;
		}

	} while (!end());
}
