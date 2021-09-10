#include "Dz3.h"

void Dz3::z1()
{
	do {
		std::cout << "¬ведите S, p и n: " << std::endl;
		float S, p, n;
		std::cin >> S >> p >> n;
		system("CLS");
		float r = p / 100;
		if (pow(1 + r, n) == 1)
			eror();
		else
			std::cout << S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1)) << std::endl;


	} while (!end());

}

void Dz3::z2()
{
	do {
		std::cout << "¬ведите S, m и n: " << std::endl;

		float S, m, n;
		std::cin >> S >> m >> n;
		system("CLS");

		for (int i = 0; i <= 100; i++)
			if (S*pow(i, n) == m * n)//доделать
				std::cout << i << std::endl;

	} while (!end());
}
