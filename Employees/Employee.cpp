#include "Employee.h"
#include <iostream>
const float Employee::TAX = 0.1f;
using namespace std;

int totalHours;
float gross;
float net;

void Employee::Read() {
	cout << "Please Enter Your Name: ";
	cin >> name;
	cout << "Please Enter Your Age: ";
	cin >> age;
	cout << "Please Enter Your ZipCode: ";
	cin >> zipCode;
	cout << "Please Enter Your Wage: ";
	cin >> wage;
	cout << "Please Enter the Number of Days Worked (Limit 7): ";
	cin >> daysWorked;

	for (int i = 0; i < daysWorked && i < 7; i++) {
		cout << "How Many Hours Did You Work on Day " << (i + 1) << ": ";
		cin >> hoursWorkedPerDay[i];
	}
}

void Employee::Write() {
	totalHours = 0;
	for (int i = 0; i < daysWorked; i++) {
		totalHours += hoursWorkedPerDay[i];
	}

	gross = totalHours * wage;
	net = gross * (1 - TAX);

	cout << name << " (" << age << ")\nTotal: " << totalHours << "hrs Gross: $" << gross << " Net: $" << net << endl;
}