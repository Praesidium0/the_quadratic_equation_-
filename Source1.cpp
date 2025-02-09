#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251")

    double a, b, c;
    std::cout << "������� ������������ A, B, C: ";
    std::cin >> a >> b >> c;

    if (a == 0) {
        std::cout << "��� �� ���������� ���������!" << std::endl;
        return 0;
    }

    double D = b * b - 4 * a * c; // ������� �������������

    if (D > 0) { // ��� ��������� �����
        double x1 = (-b + std::sqrt(D)) / (2 * a);
        double x2 = (-b - std::sqrt(D)) / (2 * a);
        std::cout << "������ ������: " << x1 << std::endl;
        std::cout << "������ ������: " << x2 << std::endl;
    }
    else if (D == 0) { // ���� ������
        double x = -b / (2 * a);
        std::cout << "������������ ������: " << x << std::endl;
    }
    else { // ��� ������������ ������
        std::cout << "��� ������������ ������" << std::endl;
    }

    return 0;
}
