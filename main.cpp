// Лабораторная работа № 1. Вариант 74.
// Выполнил: Прохоренков Е.А., группа ПИ-52.
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
// ===== Расчётные функции варианта =====
// Перевод гектаров в квадратные метры
double haToM2(double ha) {
    return ha * 10000;
}

// ===== Главная функция: меню =====
int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int choice;
    double a;
    do {
        cout << "\n=== Вариант 74: перевод единиц площади ===\n";
        cout << "1. Гектары -> m2\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Введите площадь в гектарах: ";
                cin >> a;
                cout << a << " гектаров = " << haToM2(a) << " м2\n";
                break;
            case 0:
                cout << "Работа завершена.\n";
                break;
            default:
                cout << "Такого пункта нет.\n";
    }
    } while (choice != 0);
    return 0;
}