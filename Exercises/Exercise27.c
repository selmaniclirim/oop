//
// Created by Clirim on 3/17/2021.
//

#include <stdio.h>
#include <string.h>


// struct to hold info about Transaction, including nested struct to hold info about Date
typedef struct Transaction {
    struct Date {
        int day,
        month,
        year;
    };
    char curr[3];
    int amount;
    struct Date tDates;
} Transaction;

// void function to read Transactions from user input
void readTransactions(Transaction *t,int n) {
    for(int i = 0; i < n; i++) {
        scanf("%d/%d/%d", &t[i].tDates.day, &t[i].tDates.month, &t[i].tDates.year);
        scanf("%d %s", &t[i].amount, t[i].curr);
    }
}

// void function to check which inputs meet requirement and print output
void printTransactions(Transaction *t, int n) {
    const char *curr = "MKD";
    int total = 0;
    int counter = 1;
    for(int i = 0; i < n; i++) {
        if(strcmp(t[i].curr, curr) == 0) {
            if(t[i].amount > 1000) {
                if((t[i].tDates.day >= 1 && t[i].tDates.month >= 1 && t[i].tDates.year >= 2013)
                   && (t[i].tDates.day <= 31 && t[i].tDates.month <= 12 && t[i].tDates.year <= 2015)) {
                    total += t[i].amount;
                    printf("%d. %02d/%02d/%d %d %s \n", counter, t[i].tDates.day, t[i].tDates.month, t[i].tDates.year, t[i].amount, t[i].curr);
                    counter++;
                }
            }
        }
    }
    printf("Total: %d MKD \n", total);
}

int main() {
    int n;
    scanf("%d", &n);
    Transaction t[n];
    readTransactions(t,n);
    printTransactions(t,n);
    return 0;
}