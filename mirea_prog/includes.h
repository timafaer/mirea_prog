#pragma once
#include <iostream>
#include <clocale>
#include <windows.h>
#include<cmath>
#include"dz1.h"
#include"Dz2.h"
#include"Dz3.h"
static const float PI = 3.14;
static void eror() { std::cout << "syntaxic error" << std::endl << "введите правильные значения" << std::endl; }
static bool end()
{
    char YN;
    std::cout << "закончить: Y/N" << std::endl;
    std::cin >> YN;
    system("CLS");
    if (YN == 'N' || YN == 'n')
        return false;
    else
        return true;
}