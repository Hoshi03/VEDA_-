#pragma once
#include "TemporaryWorker.h"

TemporaryWorker:: TemporaryWorker(string name, int empNumber, int day_s, int day) : Employee(name, empNumber), day_s(day_s), day(day)
{
	//this->name = name;
	//this->empNumber = empNumber;
	//this->day_s = day_s;
	//this->day = day;
}

void TemporaryWorker:: showSalary() const {
	cout << "��ƮŸ�� �ٷ��� " << name << ", ��� " << empNumber << " �ϱ޿� " << day_s << "�ٹ��ϼ� " << day << "\n";
}

int TemporaryWorker :: getPay() const{
	return day * day_s;
}
