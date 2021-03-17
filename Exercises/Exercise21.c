//
// Created by Clirim on 3/17/2021.
//

#include<stdio.h>

typedef struct SkiLift {
    char name[15];
    int maxR;
    int lFunction;
}SkiLift;

typedef struct SkiCenter {
    char name[20];
    char country[20];
    SkiLift sl[20];
    int slN;
} SkiCenter;

void biggestCapacity(SkiCenter *sc, int n) {
    int temp = 0;
    int currMaxN = 0;
    int maxI = 0;
    int zeroTwo = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < sc[i].slN; j++) {
            if(sc[i].sl[j].lFunction == 1) {
                temp += sc[i].sl[j].maxR;
            }
        }
        if (temp > currMaxN) {
            currMaxN = temp;
            maxI = i;
        }
        else if (temp == currMaxN) {
            for(int i = 0; i < n; i++) {
                if (sc[i].slN > zeroTwo) {
                    zeroTwo = sc[i].slN;
                    maxI = i;
                }
            }
        }
        temp = 0;
    }
    printf("%s\n%s\n%d\n", sc[maxI].name, sc[maxI].country, currMaxN);
}


int main() {
    int n;
    scanf("%d", &n);
    SkiCenter sc[n];
    for(int i = 0; i < n; i++) {
        //scan the name, country and number of lifts
        scanf("%s %s %d", sc[i].name, sc[i].country, &sc[i].slN);
        //per each ski lift scan:
        //the name
        //the max number of users
        //whether is in function
        for(int j = 0; j < sc[i].slN; j++) {
            scanf("%s %d %d", sc[i].sl[j].name, &sc[i].sl[j].maxR, &sc[i].sl[j].lFunction);
            //printf("This lift is: %d \n", sc[i].sl[j].lFunction);
        }
    }
    biggestCapacity(sc, n);
    return 0;
}
