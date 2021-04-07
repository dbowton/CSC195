#pragma once

class Employee
{
public:
	void Read();
	void Write();

private:
	char name[32];
	short age;
	int zipCode;
	float wage;
	short daysWorked;
	short hoursWorkedPerDay[7];

	static const float TAX;
};