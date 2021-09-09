#include"includes.h"
using namespace std;











int main() {

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    setlocale(LC_ALL, "RUSSIAN");
       
    int number, secnumber;
    bool end = false;
    do {
        cout << "пожалуйста введите номер задачи: " << endl;
        cin >> number;
        system("CLS");
        cout << "пожалуйста введите подразделение задачи: " << endl;
        cin >> secnumber;
        system("CLS");
        switch (number) {

        case 1: {Dz1 Dz(secnumber); } break;

        case 2: {Dz2 Dz2(secnumber);} break;


        default:
            std::cout << "не найдено"; break;
        }



    } while (!end);




    Sleep(1000);
    

    return 0;
}