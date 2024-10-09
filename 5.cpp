#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int month, year, startDay;
    cout << "Введите номер месяца: ";
    cin >> month;
    cout << "Введите год: ";
    cin >> year;
    cout << "Введите номер дня недели для начала месяца (1 - понедельник, 7 - воскресенье): ";
    cin >> startDay;
    // Проверка корректности введенных данных
    if (month < 1 || month > 12 || startDay < 1 || startDay > 7) {
        cout << "Некорректные данные." << endl;
        return 1;
    }
    // Определение количества дней в месяце
    int daysm;
    switch (month) {
    case 2:
        daysm = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        daysm = 30;
        break;
    default:
        daysm = 31;
    }
    cout << "\n       " << "Календарь " << month << " " << year << endl;
    cout << "Пн Вт Ср Чт Пт Сб Вс" << endl;

    for (int i = 1; i < startDay; i++) {
        cout << "   ";
    }
    // Вывод дней месяца
    for (int i = 1; i <= daysm; i++) {
        cout << (i < 10 ? " " : "") << i << " ";
        if ((startDay + i - 1) % 7 == 0) {
            cout << endl;
        }
    }
    cout << endl;
    return 0;
}
