//
// Created by Clirim on 3/20/2021.
//

#include <stdio.h>
#include <string.h>
#define WEEKS 4
#define DAYS 5

// here the struct WorkingWeek

typedef struct WorkingWeek {
    int hours[DAYS];
} WorkingWeek, WW;

// here the struct Worker

typedef struct Worker {
    char name[50];
    WorkingWeek weeks[WEEKS];
} W, Worker;

// here the functions

void table(Worker *w, int n)
{

    printf("Wor\t1\t2\t3\t4\tTotal\n");
    for(int i=0;i<n;i++)
    {
        int total=0;
        printf("%s\t",w[i].name);
        for(int j=0;j<WEEKS;j++)
        {
            int sum_hours=0;
            for(int k=0;k<DAYS;k++)
            {
                sum_hours+=w[i].weeks[j].hours[k];
            }
            printf("%d\t",sum_hours);
            total+=sum_hours;
        }
        printf("%d\n", total);
    }
}

int maxWeek(Worker *w)
{
    int max=0;
    int num=0;
    for(int j=0;j<WEEKS;j++)
    {
        int sum_hours=0;
        int week_total=0;
        for(int k=0;k<DAYS;k++)
        {
            sum_hours+=w->weeks[j].hours[k];
        }
        week_total+=sum_hours;
        if(week_total>max)
        {
            max=week_total;
            num=j+1;
        }
    }
    return num;
}


int main() {
    int n;
    scanf("%d", &n);
    W workers[n];
    int i;
    for (i = 0; i < n; ++i) {
        scanf("%s", workers[i].name);
        int j;
        for (j = 0; j < WEEKS; ++j) {
            int k;
            for (k = 0; k < DAYS; ++k) {
                scanf("%d", &workers[i].weeks[j].hours[k]);
            }

        }
    }
    printf("TABLE\n");
    table(workers, n);
    printf("MAX WEEK OF WORKER: %s\n", workers[n / 2].name);
    printf("%d\n", maxWeek(&workers[n / 2]));
    return 0;
}
