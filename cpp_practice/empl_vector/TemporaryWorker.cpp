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
	cout << "파트타임 근로자 " << name << ", 사번 " << empNumber << " 일급여 " << day_s << "근무일수 " << day << "\n";
}

int TemporaryWorker :: getPay() const{
	return day * day_s;
}
