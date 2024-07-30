#include <iostream>
#include <string>
#include "EmployeeManager.h"
#include <bits/stdc++.h>
#include <random>

using namespace std;

int main() {
    EmployeeManager manager;
    while (true) {
        cout << "1: 사원정보 등록\n2: 모든 사원 급여정보 확인\n3: 총 지출 급여 확인\n-1: 종료\n";
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
            std::cout << "잘못된 입력입니다.\n";
            break;
        }
    }

    

}
