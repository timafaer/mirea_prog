#include "dz1.h"



void Dz1::z1()
{
    do {
        std::cout << "Тимофей Вощенков" << std::endl;
    } while (!end());
}

void Dz1::z2()
{
    do {
        std::cout << "введите два числа" << std::endl;

        float x, y;
        std::cin >> x >> y;
        system("CLS");
        std::cout << "сумма: " << x + y << std::endl;
        std::cout << "разность: " << abs(x - y) << std::endl;
        std::cout << "произведение: " << x * y << std::endl;
        (y != 0) ? (std::cout << "чатное: " << x / y << std::endl) : (std::cout << "на ноль делить нельзя" << std::endl);
    } while (!end());
}

void Dz1::z3()
{
    do {
        std::cout << " введите коэффиценты b и c:" << std::endl;
        float b, c;
        std::cin >> b >> c;
        system("CLS");
        if (b == 0 && c == 0) std::cout << "бесконечность" << std::endl;
        else if (c == 0) std::cout << "0";
        else if (b == 0) std::cout << "корней нет";
        else std::cout << -c / b;

    } while (!end());
}

void Dz1::z4()
{
    do {
        std::cout << "введите коэффиценты a, b и c: " << std::endl;
        float a, b, c;
        std::cin >> a >> b >> c;
        system("CLS");
        if (a == 0) {
            if (b == 0 && c == 0) std::cout << "бесконечность" << std::endl;
            else if (c == 0) std::cout << "0";
            else if (b == 0) std::cout << "корней нет";
            else std::cout << -c / b;
        }
        else if ((b * b - 4 * a * c) < 0) {
            std::cout << "корней нет"<<std::endl;
        }
        else if ((b * b - 4 * a * c) == 0) {
            std::cout << -b / (2 * a)<<std::endl;
        }
        else {
            std::cout << (-b + sqrt(b * b - 4 * a * c)) / (2 * a) << std::endl;
            std::cout << (-b - sqrt(b * b - 4 * a * c)) / (2 * a) << std::endl;
        }
    } while (!end());

}

void Dz1::z5()
{
    do {
        char YN;
        bool sh = true, day = true, lamp = true;
        std::cout << "день? Y/N ";
        std::cin >> YN;
        system("CLS");
        if (YN == 'N' || YN == 'n') day = false;
        std::cout << "\nштора задвинута? Y/N ";
        std::cin >> YN;
        system("CLS");
        if (YN == 'N' || YN == 'n') sh = false;
        std::cout << "\nлампа горит? Y/N ";
        std::cin >> YN;
        system("CLS");
        if (YN == 'N' || YN == 'n') lamp = false;

        if (lamp || (day && !sh)) std::cout << "светло" << std::endl;
        else std::cout << "темно" << std::endl;

    } while (!end());

}
