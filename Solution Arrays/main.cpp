#include <iostream>

using namespace std;

//-ввести значения элементов массива с клавиатуры;
//-вывести элементы массива на экран в прямом порядке(от нулевого элемента до последнего);
//-вывести элементы массива на экран в обратном порядке(от последнего элемента до нулевого);
//-вычислить сумму элементов массива;
//-вычислить среднее - арифметическое элементов массива;
//-найти минимальное и максимальное значения в массиве, и вывести их на экран;

#define SIZE 10

int main()
{
    setlocale(LC_ALL, "Russian");
    int current, task, index = 0;

    int arr[SIZE]; // Объявление массива

    cout << "Всего элементов массива будет: " << SIZE << endl;
    while (index < SIZE) {
        cout << "Введите элемент под " << index << " индексом вашего массива: " << endl; cin >> current; // Текущее значение
        arr[index] = current; // Значение массива под текущим индексом
        index++; // Индекс
    }

    cout << "Текущий массив задан." << endl;

    while (true) {
        cout << "Введите число для продолжения: " << endl;
        cout << "1. Вывести текущий массив" << endl;
        cout << "2. Вывести массив в прямом порядке" << " (от нулевого элемента до последнего)" << endl;
        cout << "3. Вывести массив в обратном порядке" << " (от последнего элемента до нулевого)" << endl;
        cout << "4. Вычислить сумму элементов массива" << endl;
        cout << "5. Вычислить среднее - арифметическое элементов массива" << endl;
        cout << "6. Найти минимальное значение массива" << endl;
        cout << "7. Найти максимальное значение массива" << endl;
        cout << "0. Выход" << endl;

        cin >> task;

        switch (task) {
        case 1: {
            cout << "Текущий массив: " << endl;
            cout << "[";
            for (int i = 0; i < index; i++) {
                if (i == index - 1) {
                    cout << arr[i];
                    continue;
                }
                cout << arr[i] << ", ";
            }
            cout << "]" << endl;
            break;
        }
        case 2: {
            cout << "Вывод массива в прямом порядке: " << endl;
            for (int i = 0; i < SIZE; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        }
        case 3: {
            cout << "Вывод массива в обратном порядке: " << endl;
            for (int i = SIZE - 1; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        }
        case 4: {
            cout << "Сумма элементов массива: ";
            int sum = 0;
            for (int i = 0; i < SIZE; i++) {
                sum += arr[i];
            }
            cout << sum << endl;
            break;
        }
        case 5: {
            cout << "Среднее арифметическое элементов массива: ";
            int average, sum = 0;
            for (int i = 0; i < SIZE; i++) {
                sum += arr[i];
            }
            average = sum / SIZE;
            cout << average << endl;
            break;
        }
        case 6: {
            cout << "Минимальное значение массива: ";
            int min = arr[0];
            for (int i = 0; i < SIZE; i++) {
                if (arr[i] < min) {
                    min = arr[i];
                }
            }
            cout << min << endl;
            break;
        }
        case 7: {
            cout << "Максимальное значение массива: ";
            int max = arr[0];
            for (int i = 0; i < SIZE; i++) {
                if (arr[i] > max) {
                    max = arr[i];
                }
            }
            cout << max << endl;
            break;
        }
        case 0: {
            cout << "Выход из программы" << endl;
            return 0;
        }
        default: {
            cout << "Неверный ввод" << endl;
        }
        }
    }
}

