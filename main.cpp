#include <iostream>
using namespace std;

// Функция для выполнения операций
double calculate(double a, double b, char operation) {
    switch (operation) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            } else {
                cout << "Ошибка: Деление на ноль!" << endl;
                return 0; // Возвращаем 0 в случае деления на ноль
            }
        default:
            cout << "Ошибка: Неверная операция!" << endl;
            return 0;
    }
}

int main() {
    double num1, num2;
    char operation;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;

    cout << "Введите второе число: ";
    cin >> num2;

    double result = calculate(num1, num2, operation);
    cout << "Результат: " << result << endl;

    return 0;
}
