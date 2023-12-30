#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void build(int kolvo_tr, int height_tr) {
    for (int i = 0; i < kolvo_tr; i++) {
        string triangle = "";
        for (int j = 0; j < height_tr; j++) {
            string line((2 * j) + 1, '*');
            triangle += string((2 * height_tr) - 1, ' ').replace((2 * height_tr - 1 - line.length()) / 2, line.length(), line);
            triangle += "\n";
        }
        cout << triangle;
    }
}

int main() {
    setlocale(LC_ALL, "RUS");

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int restart = 1;

    while (restart == 1) {
        int kolvo, height;
        cout << "Введите количество треугольников: "; cin >> kolvo;
        cout << "Введите высоту треугольников: "; cin >> height;
        if (!cin.fail()) {
            build(kolvo, height);
            cout << "Для поврота, введите 1: "; cin >> restart;
        }
        else {
            cout << "некоректные данные \n";
            restart = 0;

        }
    }
    return 0;
}
