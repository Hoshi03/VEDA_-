#include <iostream>
#include <string>
#include "EmployeeManager.h"

int main() {
    EmployeeManager manager;
    while (true) {
        std::cout << "1: 사원정보 등록\n2: 모든 사원 급여정보 확인\n3: 총 지출 급여 확인\n-1: 종료\n";
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
            std::cout << "잘못된 입력입니다.\n";
            break;
        }
    }
    return 0;
}
