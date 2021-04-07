#include <iostream>
using namespace std;

class Person {
public:
    void Display() {
        std::cout << name << " " << lInitial << ". (" << age << ") worked " << totalHoursWorked << " hours at $" << wage << "/hour" << endl;
    }
    void setUpAdult() {
        isAdult = age >= 18;
    }
    void setTotalHours() {
        totalHoursWorked = 0;
        for (int i : hoursWorkedEachDay) {
            totalHoursWorked += i;
        }
    }

public:
    string name;
    char lInitial;
    short age = 0;
    int zipCode = 0;
    float wage = 0;
    int daysWorked = 0;
    int hoursWorkedEachDay[7];
    int totalHoursWorked = 0;
    bool isAdult = false;
};

int main()
{
    const float TAX = 0.1f;

    Person person;

    cout << "Please Enter Your First Name: ";
    cin >> person.name;
    cout << "Please Enter Your Last Initial: ";
    cin >> person.lInitial;
    cout << "Please Enter Your Age: ";
    cin >> person.age;
    cout << "Please Enter Your ZipCode: ";
    cin >> person.zipCode;
    cout << "Please Enter Your Hourly Wage: ";
    cin >> person.wage;
    cout << "Please Enter How Many Days Have You Worked: ";
    cin >> person.daysWorked;

    for (int i = 0; i < 7; i++) {
        if (i < person.daysWorked) {
            cout << "Please Enter How Many Hours You Worked On Day " << (i + 1) << ": ";
            cin >> person.hoursWorkedEachDay[i];
        }
        else {
            person.hoursWorkedEachDay[i] = 0;
        }
    }

    person.setTotalHours();
    person.setUpAdult();

    person.Display();

    cout << "Gross Income: $" << (person.totalHoursWorked * person.wage) << endl;
    cout << "Net Income: $" << ((person.totalHoursWorked * person.wage) * (1 - TAX)) << endl;
}
