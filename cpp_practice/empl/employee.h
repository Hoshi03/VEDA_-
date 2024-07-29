#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

// ��� ��ü�� �Ӽ� �� ��� ���� Ŭ����
class Employee
{
protected:
	string name;		// ��� �̸�
	int empNumber;		// ���
public:
	Employee(string name, int empNumber);
	Employee() {};

	virtual int getPay() const = 0;
	virtual void showSalary() const = 0;
};
#endif