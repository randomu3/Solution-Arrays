#include <iostream>

using namespace std;

//-������ �������� ��������� ������� � ����������;
//-������� �������� ������� �� ����� � ������ �������(�� �������� �������� �� ����������);
//-������� �������� ������� �� ����� � �������� �������(�� ���������� �������� �� ��������);
//-��������� ����� ��������� �������;
//-��������� ������� - �������������� ��������� �������;
//-����� ����������� � ������������ �������� � �������, � ������� �� �� �����;

#define SIZE 10

int main()
{
    setlocale(LC_ALL, "Russian");
    int current, task, index = 0;

    int arr[SIZE]; // ���������� �������

    cout << "����� ��������� ������� �����: " << SIZE << endl;
    while (index < SIZE) {
        cout << "������� ������� ��� " << index << " �������� ������ �������: " << endl; cin >> current; // ������� ��������
        arr[index] = current; // �������� ������� ��� ������� ��������
        index++; // ������
    }

    cout << "������� ������ �����." << endl;

    while (true) {
        cout << "������� ����� ��� �����������: " << endl;
        cout << "1. ������� ������� ������" << endl;
        cout << "2. ������� ������ � ������ �������" << " (�� �������� �������� �� ����������)" << endl;
        cout << "3. ������� ������ � �������� �������" << " (�� ���������� �������� �� ��������)" << endl;
        cout << "4. ��������� ����� ��������� �������" << endl;
        cout << "5. ��������� ������� - �������������� ��������� �������" << endl;
        cout << "6. ����� ����������� �������� �������" << endl;
        cout << "7. ����� ������������ �������� �������" << endl;
        cout << "0. �����" << endl;

        cin >> task;

        switch (task) {
        case 1: {
            cout << "������� ������: " << endl;
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
            cout << "����� ������� � ������ �������: " << endl;
            for (int i = 0; i < SIZE; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        }
        case 3: {
            cout << "����� ������� � �������� �������: " << endl;
            for (int i = SIZE - 1; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        }
        case 4: {
            cout << "����� ��������� �������: ";
            int sum = 0;
            for (int i = 0; i < SIZE; i++) {
                sum += arr[i];
            }
            cout << sum << endl;
            break;
        }
        case 5: {
            cout << "������� �������������� ��������� �������: ";
            int average, sum = 0;
            for (int i = 0; i < SIZE; i++) {
                sum += arr[i];
            }
            average = sum / SIZE;
            cout << average << endl;
            break;
        }
        case 6: {
            cout << "����������� �������� �������: ";
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
            cout << "������������ �������� �������: ";
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
            cout << "����� �� ���������" << endl;
            return 0;
        }
        default: {
            cout << "�������� ����" << endl;
        }
        }
    }
}

