#ifndef TEMPORARYWORKER_H
#define TEMPORARYWORKER_H

#include "employee.h"

class TemporaryWorker : public Employee {
    int day_s;
    int day;
public:
    TemporaryWorker(string name, int empNumber, int day_s, int day);
    void showSalary() const ;
    int getPay() const ;
};

#endif
