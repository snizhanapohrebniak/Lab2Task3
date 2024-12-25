#include <iostream>
#include <cmath> // ��� ������ � ������������� ���������

using namespace std;

int main() {
    // �������� ����������� �����
    int number;
    cout << "Vvedite trekhznachnoye chislo: ";
    cin >> number;

    // �������� �� ��, �� ����� ���������
    if (number < 100 || number > 999) {
        cout << "Chislo dolzhno byt trekhznachnym!" << endl;
        return 1;
    }

    // ���������� ���� �����
    int lastDigit = number % 10;         // ������� �����
    int remainingDigits = number / 10;  // ���� �� �����

    // ���������� ������ �����
    int newNumber = lastDigit * 100 + remainingDigits;

    // ��������� ���������� �����
    cout << "Poluchennoye chislo: " << newNumber << endl;

    return 0;
}