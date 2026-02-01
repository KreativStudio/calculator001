// Калькулятор на плюсах.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

float multiplication(float a, float b) {
    return a * b;
}
float addition(float a, float b) {
    return a + b;
}
float difference(float a, float b) {
    return a - b;
}
float division(float a, float b) {
    if (b == 0) {
        cout << "Ошибка: деление на ноль!" << endl;
        return 0;
    }
    return a / b;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    char again = 'д';
    while (again == 'д' || again == 'Д') {
    int a, b, c;
    cout << "Какую операцию вы хотите выполнить? " << endl;
    cout << "Сложение + - 1" << endl;
    cout << "Разность чисел - - 2" << endl;
    cout << "Умножение * - 3" << endl;
    cout << "Деление / - 4" << endl;
    cout << "Введите номер операции ";
    cin >> c;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;

    switch (c)
    {
    case 1:
        cout << a << " + " << b << " = " <<  addition(a, b);
        break;
    case 2:
        cout << a << " - " << b << " = " << difference(a, b);
        break;
    case 3:
    cout << a << " * " << b << " = " << multiplication(a, b);
        break;
    case 4:
        cout << a << " / " << b << " = " << division(a, b);
        break;
    default: 
        cout << "Ошибка: нет такой операции!" << endl;
        return 1; 
    }
    cout << "\nХотите посчитать еще? (д/н): ";
    cin >> again;
    cout << endl;
    }
}

