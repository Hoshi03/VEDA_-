#include <iostream>
#include <string>
#include "EmployeeManager.h"
#include <bits/stdc++.h>
#include <random>

using namespace std;

int main() {
    EmployeeManager manager;
    while (true) {
        cout << "1: ������� ���\n2: ��� ��� �޿����� Ȯ��\n3: �� ���� �޿� Ȯ��\n-1: ����\n";
        int tmp;
        cin >> tmp;
        if (tmp == -1) return 0;
        switch (tmp) {
        case 1: {
            manager.addEmployee();
            break;
        }
        case 2: {
            int cnt;
            cin >> cnt;
            if (cnt == 1) manager.showAllSalary();
            else if (cnt == 2) manager.showSalaryNameAsc();
            else if (cnt == 3) manager.showAboveSalary();
            else if (cnt == 4) manager.showFindEmpl();

            break;
        }
            
        case 3:
            manager.showTotalSalary();
            break;
        default:
            std::cout << "�߸��� �Է��Դϴ�.\n";
            break;
        }
    }

    

}
