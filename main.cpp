// Лабораторная работа № 1. Вариант 74.
// Работу Выполнил: Прохоренков Е.А., группа ПИ-52.
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
// ===== Расчётные функции варианта =====
// Перевод гектаров в квадратные метры
double haToM2(double ha) {
    return ha * 10000;
}
// Перевод квадратных метров в гектары
double m2ToHa(double m2) {
    return m2 / 10000;
}
double haToSotka(double ha) {
    return ha * 100;
}

// ===== Главная функция: меню =====
int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int choice;
    double a;
    do {
        cout << "\n=== Вариант 74: Калькулятор площади ===\n";
        cout << "1. Гектары -> m2\n";
        cout << "2. m2 -> гектары\n";
        cout << "3. Гектары -> сотки\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Введите площадь в гектарах: ";
                cin >> a;
                if (a < 0) {
                    cout << "Площадь не может быть отрицательной.\n";
                    break;
                }
                cout << a << " гектаров = " << haToM2(a) << " м2\n";
                break;
            case 2:
                cout << "Введите площадь в квадратных метрах: ";
                cin >> a;
                if (a < 0) {
                    cout << "Площадь не может быть отрицательной.\n";
                    break;
                }
                cout << a << " м2 = " << m2ToHa(a) << " гектаров\n";
                break;
             case 3:
                cout << "Введите площадь в гектарах: ";
                cin >> a;
                if (a < 0) {
                    cout << "Площадь не может быть отрицательной.\n";
                    break;
                }
                cout << a << " гектаров = " << haToSotka(a) << " соток\n";
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