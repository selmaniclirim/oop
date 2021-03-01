//
// Created by clirim on 3/1/21.
//

#include<iostream>
#include<cstring>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
} Date;

struct Transaction {
    char curr[3];
    int amount;
    struct Date tDates;
} Transaction;

int main() {
    int n;
    cin >> n;
    struct Transaction t[n];
    const char *curr = "USD";
    for(int i = 0; i < n; i++) {
        cin >> t[i].curr >> t[i].amount >> t[i].tDates.day >> t[i].tDates.month >> t[i].tDates.year;
    }

    int temp = 0;
    int tr = 0;
    int counter = 1;
    while (temp < n) {
        if(strcmp(t[temp].curr, curr) == 0) {
            if (t[temp].amount < 5000) {
                if (t[temp].tDates.month < 4) {
                    cout << counter << ". " << t[temp].tDates.day << "/" << t[temp].tDates.month << "/" << t[temp].tDates.year
                    << t[temp].amount << " " << t[temp].curr;
                    tr += t[temp].amount;
                    counter++;
                }
            }
        }
        temp++;
    }
    cout << "Total: %d USD" << tr;


    return 0;
}