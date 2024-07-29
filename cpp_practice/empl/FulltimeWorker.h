#ifndef FULLTIMEWORKER_H
#define FULLTIMEWORKER_H

#include "employee.h"

class FulltimeWorker : public Employee {
    int month_s;
public:
    FulltimeWorker(string name, int empNumber, int month_s);
    void showSalary() const ;
    int getPay() const ;
};

#endif
