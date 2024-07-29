#pragma once
#include "FulltimeWorker.h"
#include "TemporaryWorker.h"
#include <vector>

using namespace std;

class EmployeeManager
{
private :
	/*int empNum = 0;*/
	vector<Employee*> empList;
	
	int maxEmp = 50;
public:
	EmployeeManager();
	~EmployeeManager();
	void addEmployee();
	void showAllSalary() const;
	void showTotalSalary() const;

	
};

