#include <iostream>
#include <string>
#include "counter.h"

int main() {
    setlocale(LC_ALL, "Russian");
    int num;
    std::cout
        << "Вы хотите указать начальное значение счётчика? Введите y или n: ";
    std::string begin;
    std::cin >> begin;

    if (begin == "n") {
        std::cout << "Значение счётчика 1" << std::endl;
        num = 1;

    }
    else if (begin == "y") {
        std::cout << "Введите начальное значение счетчика: ";
        std::cin >> num;
    }
    Counter counter(num);
    while (true) {
        char opt;
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> opt;

        switch (opt) {
        case '+':
            counter.add();
            break;

        case '-':
            counter.sub();
            break;

        case '=':
            std::cout << counter.get() << std::endl;
            break;

        case 'x':
            std::cout << "До свидания." << std::endl;
            return 0;

        default:
            std::cout << "Неправильный символ!\n";
        }
    }

    return 0;
}