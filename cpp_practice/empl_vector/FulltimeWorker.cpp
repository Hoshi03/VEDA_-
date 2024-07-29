#include "FulltimeWorker.h"

FulltimeWorker::FulltimeWorker(string name, int empNumber, int month_s)
    : Employee(name, empNumber), month_s(month_s) {}

void FulltimeWorker::showSalary() const {
    cout << "ǮŸ�� �ٷ��� " << name << "��� " << empNumber << " ���޿� " << month_s << "\n";
}

int FulltimeWorker::getPay() const {
    return month_s;
}
