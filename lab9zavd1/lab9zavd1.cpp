#include <iostream>
#include <Windows.h>
#include<cstdlib>
using namespace std;

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double numbers[10];
    int positiveCount = 0;

    cout << "Введіть 10 дійсних чисел: ";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
        if (numbers[i] > 0) {
            positiveCount++;
        }
    }

    cout << "Кількість додатних елементів: " << positiveCount << endl;

    return 0;
}

