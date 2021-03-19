//
// Created by Clirim on 3/18/2021.
//

#include <iostream>
#include <cstring>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date(int day = 1, int month = 1, int year = 1990) {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    Date (const Date & otherDate) {
        this->day = otherDate.day;
        this->month = otherDate.month;
        this->year = otherDate.year;
    }

    int compareTo(Date & other) { // using & to save object copies.

    }
};

class Employee {
private:
    char name[20];
    double salary;
    Date dateOfBirth;
public:
    Employee(char name[20], double salary, Date dateOfBirth) {
        strcpy(this->name, name);
        this->salary = salary;
        this->dateOfBirth = dateOfBirth;
    }

    void print() {
        cout<<"Employe: "<< name<<" Salary: "<<salary<< " Date of birth: "<<dateOfBirth.prin
    }
};

int main() {


    return 0;
};