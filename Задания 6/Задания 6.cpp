﻿// Задания 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int Futs(int x) //Функция перевода чисел из милей в футы
{
    const int y = 5280; //объявление постоянной переменной
    return x = x * y; //возвращаем переведенное число
}
double Kilometr(double x) //Функция перевода чисел из милей в километры
{
    const double y = 1.609; //объявление постоянной переменной
    return x = x * y; //возвращаем переведенное число
}
int main()
{
    setlocale(LC_ALL, "rus");
    int x;
    int c;
    cout << "Введите число, которое хотите перевести: " << endl;
    cin >> x;
    cout << "Выберите во что вы хотите перевести число: 1 - в километры, 2 - в футы, 3 - в километрах и в футах:" << endl;
    cin >> c;
    if (c == 1)
    {
        cout << "Ваше число " << x << " в километрах = " << Kilometr(x) << endl;
    }
    else if (c == 2)
    {
        cout << "Ваше число " << x << " в футах = " << Futs(x) << endl;
    }
    else if (c == 3)
    {
        cout << "Ваше число "<<x<<" в километрах = " << Kilometr(x) << endl;
        cout << "Ваше число "<<x<<" в футах = " << Futs(x) << endl;
    }
    else
    {
        "Вы выбрали не ту цифру! Попробуйте ещё раз.";
    }
    system("pause");
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
