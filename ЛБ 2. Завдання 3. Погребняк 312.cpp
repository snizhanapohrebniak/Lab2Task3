#include <iostream>
#include <cmath> // для роботи з математичними функціями

using namespace std;

int main() {
    // Введення тризначного числа
    int number;
    cout << "Vvedite trekhznachnoye chislo: ";
    cin >> number;

    // Перевірка на те, що число тризначне
    if (number < 100 || number > 999) {
        cout << "Chislo dolzhno byt trekhznachnym!" << endl;
        return 1;
    }

    // Визначення цифр числа
    int lastDigit = number % 10;         // Остання цифра
    int remainingDigits = number / 10;  // Інші дві цифри

    // Формування нового числа
    int newNumber = lastDigit * 100 + remainingDigits;

    // Виведення отриманого числа
    cout << "Poluchennoye chislo: " << newNumber << endl;

    return 0;
}