#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int orel = 0;
    cout << "Введите результаты подбрасывания монетки (1 - орел, 0 - решка):\n";
    for (int i = 0; i < 9; ++i) {
        int result;
        cin >> result;

        if (result != 0 && result != 1) {
            cout << "Некорректный ввод. Введите 1 или 0.\n";
            return 1; // Прерываем программу при некорректном вводе
        }
        if (result == 1) {
            orel++;
        }
    }
    if (orel % 2 == 0) {
        cout << "Студент Д. принял положительное решение.\n";
    }
    else {
        cout << "Студент Д. принял отрицательное решение.\n";
    }
    return 0;
}
