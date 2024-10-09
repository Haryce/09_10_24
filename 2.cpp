#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int number, digit, sum = 0;
    cout << "Введите число: ";
    cin >> number;
    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }
    cout << "Сумма цифр числа: " << sum << endl;

    return 0;
}