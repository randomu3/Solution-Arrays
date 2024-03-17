#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    const int SIZE = 100;
    int array[SIZE];
    int rangeMin, rangeMax, n;

    cout << "Введите минимальное значение диапазона: ";
    cin >> rangeMin;
    cout << "Введите максимальное значение диапазона: ";
    cin >> rangeMax;
    cout << "Введите количество элементов массива (не более " << SIZE << "): ";
    cin >> n;

    if (n > SIZE) {
        cout << "Количество элементов не может превышать " << SIZE << "." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        array[i] = rangeMin + rand() % (rangeMax - rangeMin + 1);
    }

    cout << "Массив до сортировки:\n";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "Массив после сортировки:\n";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
