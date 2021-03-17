//
// Created by Clirim on 3/17/2021.
//

#include<stdio.h>

typedef struct Film {
    char name[100];
    int time;
    float price;
    int discount;
} Film;

typedef struct FilmFestival {
    char name[100];
    char place[100];
    Film films[100];
    int no;

} FilmFestival;

void print(FilmFestival f) {
    printf("%s %s \n", f.name, f.place);
    for(int i = 0; i < f.no; i++) {
        printf("%s %d %.02f \n", f.films[i].name, f.films[i].time, f.films[i].price);
    }
}

void bestFestival(FilmFestival *f, int n) {
    int temp = 0;
    int discMax = 0;
    int neededIndex = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < f[i].no; j++) {
            if(f[i].films[j].discount == 1) {
                temp++;
            }
        }
        if(temp > discMax) {
            discMax = temp;
            neededIndex = i;
        }
        temp = 0;
        // TODO checker for more then 1 festival with same characteristics
    }
    printf("Najdobar festival: %s %s", f[neededIndex].name, f[neededIndex].place);
}

int main()
{
    int i, j, n, broj;
    FilmFestival ff[50];
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        /* name of the festival */
        scanf("%s", ff[i].name);
        /* place it is held */
        scanf("%s", ff[i].place);
        /* number of movies */
        scanf("%d", &ff[i].no);

        for (j = 0; j < ff[i].no; j++){
            scanf("%s", ff[i].films[j].name);  		/* title of the movie */
            scanf("%d", &ff[i].films[j].time); 		/* duration */
            scanf("%f", &ff[i].films[j].price); 	/* price */
            scanf("%d", &ff[i].films[j].discount);	/* discount */
        }
    }

    for(i=0; i<n; ++i){
        print(ff[i]);
    }

    bestFestival(ff, n);


    return 0;
}