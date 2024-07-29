#include "FulltimeWorker.h"

FulltimeWorker::FulltimeWorker(string name, int empNumber, int month_s)
    : Employee(name, empNumber), month_s(month_s) {}

void FulltimeWorker::showSalary() const {
    cout << "풀타임 근로자 " << name << "사번 " << empNumber << " 월급여 " << month_s << "\n";
}

int FulltimeWorker::getPay() const {
    return month_s;
}
