//
// Created by clirim on 3/1/21.
//

#include <stdio.h>
#include <string.h>

typedef struct Date {
    int day;
    int month;
    int year;
} Date;

typedef struct Transaction {
    char curr[3];
    int amount;
    struct Date tDates;
} Transaction;

int main() {
    int n;
    scanf("%d", &n);
    Transaction t[n];
    const char *curr = "USD";
    for(int i = 0; i < n; i++) {
        scanf("%s %d", t[i].curr, &t[i].amount);
        if(scanf("%d/%d/%d", &t[i].tDates.day, &t[i].tDates.month, &t[i].tDates.year) != 3)
            return 0;
    }

    int temp = 0;
    int tr = 0;
    int counter = 1;
    while (temp < n) {
        if(strcmp(t[temp].curr, curr) == 0) {
            if (t[temp].amount < 5000) {
                if (t[temp].tDates.month < 4) {
                    printf("%d. %02d/%02d/%d %d %s \n", counter, t[temp].tDates.day, t[temp].tDates.month, t[temp].tDates.year, t[temp].amount, t[temp].curr);
                    tr += t[temp].amount;
                    counter++;
                }
            }
        }
        temp++;
    }
    printf("Total: %d USD", tr);


    return 0;
}