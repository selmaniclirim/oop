//
// Created by Clirim on 4/7/2021.
//

#include<stdio.h>
#include<string.h>

typedef struct Driver {
    char name[100];
    int time;
} Driver;

typedef struct Race {
    char location[100];
    int driverN;
    Driver drivers[100];
} Race;

void findTopThree(Race race) {
    Driver first = race.drivers[0];
    Driver second = first;
    Driver third = first;
    int temp[race.driverN];
    int indexkeeper[3];
    int tmp;
    for(int i = 0; i < race.driverN; i++) {
        temp[i] = race.drivers[i].time;
    }

    for(int i=0; i<race.driverN; i++)
    {
        for(int j=i+1; j<race.driverN; j++)
        {
            if(temp[j] <temp[i])
            {
                tmp = temp[i];
                temp[i] = temp[j];
                temp[j] = tmp;
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < race.driverN; j++) {
            if (temp[i] == race.drivers[j].time)
                indexkeeper[i] = j;
        }
    }


        first.time = temp[0];
        strcpy(first.name, race.drivers[indexkeeper[0]].name);
        second.time = temp[1];
        strcpy(second.name, race.drivers[indexkeeper[1]].name);
        third.time = temp[2];
        strcpy(third.name, race.drivers[indexkeeper[2]].name);
        

    printf("1. %s, %d:%02d \n", first.name, first.time/60, first.time%60);
    printf("2. %s, %d:%02d \n", second.name, second.time/60, second.time%60);
    printf("3. %s, %d:%02d \n", third.name, third.time/60, third.time%60);

}

int main() {
    int n;
    scanf("%d", &n);
    Race race[n];
    for(int i = 0; i < n; i++) {
        scanf("%s", race[i].location);
        scanf("%d", &race[i].driverN);
        for(int j = 0; j < race[i].driverN; j++) {
            scanf("%s %d", race[i].drivers[j].name, &race[i].drivers[j].time);
            //printf("%s %d \n", race[i].drivers[j].name, race[i].drivers[j].time);
        }
    }
//    if(strcmp(race[0].location, race[1].location)) {
//        printf("yeet");
//    }
//    else
//        printf("ya to the yeet");
    for(int i = 0; i < n; i++) {
        printf("%s (%d Drivers)\n", race[i].location, race[i].driverN);
        findTopThree(race[i]);
    }


    return 0;
}