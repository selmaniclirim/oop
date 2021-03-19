//
// Created by Clirim on 3/18/2021.
//

#include <iostream>
#include <cstring>

using namespace std;

enum Gender {
    M,
    F
};
class Mate {
private:
    char name[20];
    int age;
    Gender gender;
public:
    Mate (char name[20] = "Clirim", int age = 19, Gender gender = M) {
        strcpy(this->name, name);
        this->age = age;
        this->gender = gender;

    }

    Mate (const Mate & other) {
        cout<<"Copy constructor for Mate is getting called" << endl;
        strcpy(name, other.name);
        age = other.age;
        gender = other.gender;
    }

    void print() {
        cout<<name<<" ("<<age<<") "<<(gender==M ? "Male" : "Female")<<endl;
    }
};

class LoveDate {
    Mate m1,m2;
public:
    LoveDate(Mate m1, Mate m2) {
        this->m1 = m2;
        this->m2 = m2;
    }

    bool isSuccess() {

    }
};

int main() {
    Mate m("Clirim", 19, M);
    Mate m2(m);
    m.print();
    m2.print();
    return 0;
}
