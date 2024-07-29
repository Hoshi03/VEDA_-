#include "EmployeeManager.h"
#include "FulltimeWorker.h"
#include "TemporaryWorker.h"

EmployeeManager::EmployeeManager()/* : empNum(0)*/ {
    std::cout << "������ ����\n";
}

EmployeeManager::~EmployeeManager() {
    for (int i = 0; i < empList.size(); ++i) {
        delete empList[i];
    }
    std::cout << "������ �Ҹ�\n";
}

void EmployeeManager::addEmployee() {
    Employee* empl;
        std::cout << "1. ������\n2. �Ͽ���\n";
        int n;
        std::cin >> n;
        std::string name;
        int empNum, salary, days;
        switch (n) {
        case 1:
            std::cout << "�̸�, ���, ���޿��� �Է��ϼ���: ";
            std::cin >> name >> empNum >> salary;
            empl = new FulltimeWorker(name, empNum, salary);
            empList.push_back(empl);
            break;
        case 2:
            std::cout << "�̸�, ���, �ϱ޿�, �ٹ��ϼ��� �Է��ϼ���: ";
            std::cin >> name >> empNum >> salary >> days;
            empl = new TemporaryWorker(name, empNum, salary, days);
            empList.push_back(empl);
            break;
        default:
            std::cout << "�߸��� �Է��Դϴ�.\n";
            empl = nullptr;
            break;
        }
}


void EmployeeManager::showAllSalary() const {
    for (auto it = empList.begin(); it != empList.end(); ++it) {
        (*it)->showSalary();
    }
}

void EmployeeManager::showTotalSalary() const {
    int res = 0;
    for (auto it = empList.begin(); it != empList.end(); ++it) {
        res += (*it)->getPay();
    }
    std::cout << "�޿� ����: " << res << "\n";
}
