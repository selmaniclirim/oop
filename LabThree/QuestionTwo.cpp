//
// Created by Clirim on 3/18/2021.
//

#include <iostream>
#include <cstring>

using namespace std;

class Worker {
    char firstName[30];
    char lastName[30];
    int salary;
public:
    Worker(char firstName[30] = "Clirim", char lastName[30] = "Selmani", int salary = 1000) {
        strcpy(this->firstName, firstName);
        strcpy(this->lastName, lastName);
        this->salary = salary;
    }
    int getSalary() {
        return salary;
    }
    void print() {
        cout << firstName <<" "<< lastName <<" "<<salary<<endl;
    }
};

class Factory {
    Worker workers[100];
    int workersNumber;
public:
    Factory(Worker w[] = {}, int n = 0) {
        this->workersNumber = n;
        for(int i = 0; i < n; i++) {
            this->workers[i] = w[i];
        }
    }
    void printWorkers() {
        for (int i = 0; i < workersNumber; i++) {
            workers[i].print();
        }
    }
    void printWithSalary(int salary) {
        for(int i = 0; i < workersNumber; i++) {
            if(workers[i].getSalary() > salary)
                workers[i].print();
        }
    }
};

int main() {
    int n;
    char firstName[30];
    char lastName[30];
    int salary;
    int minSalary;
    cin >> n;
    Worker w[n];
    Factory f;
    for(int i = 0; i < n; i++) {
        cin >> firstName >> lastName >> salary;
        w[i] = {firstName,lastName,salary};
        f = {w, n};
    }
    cin >> minSalary;
    cout << "ALL WORKERS: " << endl;
    f.printWorkers();
    cout << "EMPLOYEES WITH SALARY " << minSalary <<":"<<endl;
    f.printWithSalary(minSalary);

    return 0;
}