#pragma once
#include "FulltimeWorker.h"
#include "TemporaryWorker.h"

class EmployeeManager
{
private :
	int empNum = 0;
	Employee* empList[50] = { nullptr };
	int maxEmp = 50;
public:
	EmployeeManager();
	~EmployeeManager();
	void addEmployee(Employee* empl);
	void showAllSalary() const;
	void showTotalSalary() const;
	Employee* getEmp();
};

