#include "EmployeeManager.h"
#include "FulltimeWorker.h"
#include "TemporaryWorker.h"

EmployeeManager::EmployeeManager() : empNum(0) {
    std::cout << "관리자 생성\n";
}

EmployeeManager::~EmployeeManager() {
    for (int i = 0; i < empNum; ++i) {
        delete empList[i];
    }
    std::cout << "관리자 소멸\n";
}

void EmployeeManager::addEmployee(Employee* empl) {
    if (empNum < maxEmp) {
        std::cout << "1. 정규직\n2. 일용직\n";
        int n;
        std::cin >> n;
        std::string name;
        int empNum, salary, days;
        switch (n) {
        case 1:
            std::cout << "이름, 사번, 월급여를 입력하세요: ";
            std::cin >> name >> empNum >> salary;
            empl = new FulltimeWorker(name, empNum, salary);
            empList[this->empNum++] = empl;
            break;
        case 2:
            std::cout << "이름, 사번, 일급여, 근무일수를 입력하세요: ";
            std::cin >> name >> empNum >> salary >> days;
            empl = new TemporaryWorker(name, empNum, salary, days);
            empList[this->empNum++] = empl;
            break;
        default:
            std::cout << "잘못된 입력입니다.\n";
            empl = nullptr;
            break;
        }
    }
    else {
        std::cout << "사원 목록이 가득 찼습니다.\n";
    }
}

Employee* EmployeeManager::getEmp() {
    return empList[empNum];
}


void EmployeeManager::showAllSalary() const {
    for (int i = 0; i < empNum; ++i) {
        empList[i]->showSalary();
    }
}

void EmployeeManager::showTotalSalary() const {
    int res = 0;
    for (int i = 0; i < empNum; ++i) {
        res += empList[i]->getPay();
    }
    std::cout << "급여 총합: " << res << "\n";
}
