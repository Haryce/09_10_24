#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    cout << "Введите число больше нуля: ";
    cin >> number;
    // Проверка на корректность ввода
    if (number <= 0) {
        cout << "Ошибка: число должно быть больше нуля." << endl;
        return 1;
    }
    // Вывод цифр в обратном порядке
    while (number > 0) {
        cout << number % 10;
        number /= 10; // Деление на 10 для перехода к следующей цифре
    }
    cout << endl;
    return 0;
}
