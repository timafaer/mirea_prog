#include "dz1.h"



void Dz1::z1()
{
    do {
        std::cout << "������� ��������" << std::endl;
    } while (!end());
}

void Dz1::z2()
{
    do {
        std::cout << "������� ��� �����" << std::endl;

        float x, y;
        std::cin >> x >> y;
        system("CLS");
        std::cout << "�����: " << x + y << std::endl;
        std::cout << "��������: " << abs(x - y) << std::endl;
        std::cout << "������������: " << x * y << std::endl;
        (y != 0) ? (std::cout << "������: " << x / y << std::endl) : (std::cout << "�� ���� ������ ������" << std::endl);
    } while (!end());
}

void Dz1::z3()
{
    do {
        std::cout << " ������� ����������� b � c:" << std::endl;
        float b, c;
        std::cin >> b >> c;
        system("CLS");
        if (b == 0 && c == 0) std::cout << "�������������" << std::endl;
        else if (c == 0) std::cout << "0";
        else if (b == 0) std::cout << "������ ���";
        else std::cout << -c / b;

    } while (!end());
}

void Dz1::z4()
{
    do {
        std::cout << "������� ����������� a, b � c: " << std::endl;
        float a, b, c;
        std::cin >> a >> b >> c;
        system("CLS");
        if (a == 0) {
            if (b == 0 && c == 0) std::cout << "�������������" << std::endl;
            else if (c == 0) std::cout << "0";
            else if (b == 0) std::cout << "������ ���";
            else std::cout << -c / b;
        }
        else if ((b * b - 4 * a * c) < 0) {
            std::cout << "������ ���"<<std::endl;
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
        std::cout << "����? Y/N ";
        std::cin >> YN;
        system("CLS");
        if (YN == 'N' || YN == 'n') day = false;
        std::cout << "\n����� ���������? Y/N ";
        std::cin >> YN;
        system("CLS");
        if (YN == 'N' || YN == 'n') sh = false;
        std::cout << "\n����� �����? Y/N ";
        std::cin >> YN;
        system("CLS");
        if (YN == 'N' || YN == 'n') lamp = false;

        if (lamp || (day && !sh)) std::cout << "������" << std::endl;
        else std::cout << "�����" << std::endl;

    } while (!end());

}
