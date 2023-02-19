#include <iostream>
#include <string>
#include "counter.h"

int main() {
    setlocale(LC_ALL, "Russian");
    int num;
    std::cout
        << "�� ������ ������� ��������� �������� ��������? ������� y ��� n: ";
    std::string begin;
    std::cin >> begin;

    if (begin == "n") {
        std::cout << "�������� �������� 1" << std::endl;
        num = 1;

    }
    else if (begin == "y") {
        std::cout << "������� ��������� �������� ��������: ";
        std::cin >> num;
    }
    Counter counter(num);
    while (true) {
        char opt;
        std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
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
            std::cout << "�� ��������." << std::endl;
            return 0;

        default:
            std::cout << "������������ ������!\n";
        }
    }

    return 0;
}