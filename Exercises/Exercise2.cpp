//
// Created by Clirim on 4/7/2021.
//

#include<iostream>
#include<string.h>
using namespace std;

// Your code here
class Bill {
    char * bNumber;
    int expense;
    char date[8];
    bool status;

    void copyMethod(const Bill & other) {
        this->bNumber = new char[strlen(other.bNumber) + 1];
        strcpy(this->bNumber, other.bNumber);
        this->expense = other.expense;
        strcpy(this->date, other.date);
        this->status = other.status;
    }
public:
    Bill(char * bNumber = "Default", int expense = 69, char date[8] = "07.2001", bool status = false) {
        this->bNumber = new char[strlen(bNumber) + 1];
        strcpy(this->bNumber, bNumber);
        this->expense = expense;
        strcpy(this->date, date);
        this->status = status;
    }
    Bill(const Bill & other) {
        copyMethod(other);
    }

    bool operator == (Bill & other) {
        if(strcmp(this->bNumber, other.bNumber) == true)
            return true;
        else
            return false;
    }

    friend ostream & operator << (ostream & stream, const Bill & other) {
        stream << other.bNumber << "(" << other.date << ") - " << other.expense;
        return stream;
    }

    const char * getBillNumber() {
        return bNumber;
    }

    bool getStatus() {
        return status;
    }
    ~Bill() {
        delete[] bNumber;
    }
};

class UserProfile {
    char username[30];
    Bill billsArray[30];
    int billN;
public:
    UserProfile(char * _username = "") {
        strcpy(this->username, _username);
        this->billN = 0;
    }
    UserProfile(const UserProfile & other) {
        strcpy(this->username, other.username);
        this->billN = other.billN;
        for(int i = 0; i < billN; i++) {
            this->billsArray[i] = other.billsArray[i];
        }
    }

    UserProfile operator += (Bill & other) {
        billN++;
        for(int i = 0; i < billN; i++) {
            if(strcmp(this->billsArray[i].getBillNumber(), other.getBillNumber()) == true) {
                cout << "The bill already exists" << endl;
                break;
            }
            else {
                this->billsArray[billN] = other;
            }
        }
        return *this;
    }

    friend ostream & operator << (ostream & stream, UserProfile & other) {
        stream << "Pending bills for " << other.username << " are:" << endl << endl;
        for(int i = 0; i < other.billN; i++) {
            if(!other.billsArray[i].getStatus())
                stream << other.billsArray[i] << endl;
        }
        return stream;
    }

//    int totalDue(int month, int year) {
//
//    }

    ~UserProfile();
};

int main() {
    char number[50], month[8], name[50];
    int price, n;
    bool status;


    int type;
    cin >> type;

    if (type == 1) {
        cout << "-----Test Bill & operator <<-----" << endl ;
        cin >> number >> price >> month >> status;
        Bill b(number, price, month, status);
        cout << b;
    } else if (type == 2) {
        cout << "-----Test Bill & operator == -----" << endl;
        cin >> number >> price >> month >> status;
        Bill b1(number, price, month, status);
        cin >> number >> price >> month >> status;
        Bill b2(number, price, month, status);
        if (b1 == b2) cout << "Equal" << endl;
        else cout << "Not equal" << endl;
    }
//    } else if (type == 3) {
//        cout << "-----Test UserProfile & operator += & << -----" << endl ;
//        cin >> name >> n;
//        UserProfile up(name);
//        for (int i = 0; i < n; i++) {
//            cin >> number >> price >> month >> status;
//            Bill s(number, price, month, status);
//            up += s;
//        }
//        cout << up;
//    } else if (type == 4) {
//        cout << "-----Test UserProfile & operator += & totalDue -----" << endl ;
//        cin >> name >> n;
//        UserProfile up(name);
//        for (int i = 0; i < n; i++) {
//            cin >> number >> price >> month >> status;
//            Bill s(number, price, month, status);
//            up += s;
//        }
//        int m, y;
//        cin >> m >> y;
//        cout << "Total due for month " << m << " and year " << y << " is:";
//        //cout << up.totalDue(m, y) << endl;
//    } else if (type == 5) {
//        cout << "-----Test all -----" << endl ;
//        cin >> name >> n;
//        UserProfile up(name);
//        for (int i = 0; i < n; i++) {
//            cin >> number >> price >> month >> status;
//            Bill s(number, price, month, status);
//            up += s;
//        }
//        cout << up;
//        int m, y;
//        cin >> m >> y;
//        cout << "Total due for month " << m << " and year " << y << " is:";
//       //cout << up.totalDue(m, y) << endl;
//    }

    return 0;
}
