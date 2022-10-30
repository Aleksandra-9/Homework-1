#include <iostream>

using namespace std;

int main()
{
float a, b;
std::string programm; // Задание №4.
std::cout << "Введите два числа через пробел: "; // Задание №1.
std::cin >> a >> b;
std::cout << "Среднее арифметическое:" << (a + b) / 2 << std::endl; // Задание №2.
std::cout << "Введите знак операции : +, -, * или / "; // Задание №3.
std::cin >> programm; // Задание №4.
if (programm == "+") std::cout << (a + b); // Задание №5.
else if (programm == "-") std::cout << (a - b); // Задание №5.
else if (programm == "*") std::cout << (a * b); // Задание №5.
else if (programm == "/")
{
if (b != 0) std::cout << (a / b);
else std::cout << "бесконечность";
}
else std::cout << "некорректный ввод";
}
