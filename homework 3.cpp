#include <iostream>
int main()
{
 setlocale (LC_ALL, "russian");
 int x = 10; // Задание 1.
 int y = 5; // Задание 1.
 int z = 250; // Задание 1.
 int d = 3; // Задание 5.
 int m = 7; // Задание 5.
 int p = d & m; // Задание 6.
 int k = d | m; // Задание 6.
 int o = d ^ m; // Задание 6.
 int e = ~ d; // Задание 7.
 int r = d >> 1; // Задание 7.
 int f = d << 1; // Задание 7.
 bool c; // Задание 9.
 bool g; // Задание 9.
 std::cout << std::boolalpha;
 std::cout << "Сумма = " << x + y << std::endl; // Задание 2.
 std::cout << "Разность = " << x - z << std::endl; // Задание 2.
 std::cout << "Произведение = " << x * y << std::endl; // Задание 2.
 std::cout << "Деление = " << x / y << std::endl; // Задание 2.
 std::cout << "Остаток от деления  = " << x % y << std::endl; // Задание 3.
 std::cout << "(((145 - 100 / 20) / 20) * 50) + 45 = " << (((145 - 100 / 20) / 20) * 50) + 45 << std::endl; // Задание 4.
 std::cout << "p = " << p << std::endl; // Задание 8.
 std::cout << "k = " << k << std::endl; // Задание 8.
 std::cout << "o = " << o << std::endl; // Задание 8.
 std::cout << "e = " << e << std::endl; // Задание 8.
 std::cout << "r = " << r << std::endl; // Задание 8.
 std::cout << "f = " << f << std::endl; // Задание 8.
 
 int a = 5, b = 7; // создали переменные с которыми будем работать
 
 c = a && (a && (a && a || b) && (b || a != b)); // Задание 10.
 std::cout << "c = " << c << std::endl; // Задание 11.
 g = 25 < 48 && (23 > (3 + 15) || (2 < 8 && (5 >= 2 && 15 < 15))); // Задание 12.
 
 std::cout << "g = " << g << std::endl; // Задание 12.
}


