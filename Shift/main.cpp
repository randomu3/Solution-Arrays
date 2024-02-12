#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int size = 10;
    int fibonacci[size] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
    int shiftCount;
    int task;

    while (true) {
        cout << "1. Отобразить исходный массив Фибоначчи" << endl;
        cout << "2. Ввести количество повторений циклического сдвига" << endl;
        cout << "0. Выход из программы" << endl;
        cin >> task;

        switch (task) {
            case 1: {
                for (int i = 0; i < size; i++) {
                    cout << fibonacci[i] << "\t";
                }
                cout << endl;
                break;
            }
            case 2: {
                cout << "Введите количество повторений циклического сдвига: ";
                cin >> shiftCount;

                for (int shift = 1; shift <= shiftCount; shift++) {
                    int first = fibonacci[0];
                    for (int i = 0; i < size - 1; i++) {
                        fibonacci[i] = fibonacci[i + 1];
                    }
                    fibonacci[size - 1] = first;

                    for (int i = 0; i < size; i++) {
                        cout << fibonacci[i] << "\t";
                    }
                    cout << endl;
                }
                break;
            }
            case 0: {
                return 0;
            }
            default: {
                cout << "Выбрано не существующее значение" << endl;
            }
        }
    }
}
