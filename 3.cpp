#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int days;
    cout << "Введите количество дней: ";
    cin >> days;
    int dd = 0; //вся прорйденная дистанция
    int qw = 15; //дистанция пройденая за день

    for (int i = 1; i <= days; i++) {
        dd += qw;
        qw += 2;
    }
    cout << "Общее расстояние, пройденное улиткой: " << dd << " см" << endl;

    return 0;
}
