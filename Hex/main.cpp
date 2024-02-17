#include <iostream>
using namespace std;

const int SIZE = 9;

int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    cout << "¬ведите целое число: ";
    cin >> number;

    cout << "„исло в шестнадцатеричной системе счислени€: ";
    if (number == 0) {
        cout << "0";
    }
    else {
        char hexNumber[SIZE];
        const char hexDigits[] = "0123456789ABCDEF";
        int index = 0;
        while (number > 0) {
            int remainder = number % 16;
            hexNumber[index] = hexDigits[remainder];
            number = number / 16;
            index++;
        }
        for (int i = index - 1; i >= 0; i--) {
            cout << hexNumber[i];
        }
    }

    cout << endl;
    return 0;
}
