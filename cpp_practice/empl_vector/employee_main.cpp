#include <iostream>
#include <string>
#include "EmployeeManager.h"

int main() {
    EmployeeManager manager;
    while (true) {
        std::cout << "1: ������� ���\n2: ��� ��� �޿����� Ȯ��\n3: �� ���� �޿� Ȯ��\n-1: ����\n";
        int tmp;
        std::cin >> tmp;
        if (tmp == -1) return 0;
        switch (tmp) {
        case 1: {
            manager.addEmployee();
            break;
        }
        case 2:
            manager.showAllSalary();
            break;
        case 3:
            manager.showTotalSalary();
            break;
        default:
            std::cout << "�߸��� �Է��Դϴ�.\n";
            break;
        }
    }
    return 0;
}
