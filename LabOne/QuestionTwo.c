//
// Created by clirim on 3/1/21.
//

#include <stdio.h>

typedef struct product {
    char name[50];
    float price;
    int quantity;
} product;


int main() {
    int productN;
    scanf("%d", &productN);
    product p[productN];
    float total = 0;
    for(int i = 0; i != productN; i++) {
        scanf("%s %f %d", &p[i].name, &p[i].price, &p[i].quantity);
    }
    for(int i = 0; i != productN; i++) {
        float paid = p[i].price * p[i].quantity;
        total += paid;
        printf("%d. %s\t", i + 1, p[i].name);
        printf("%.2f x ", p[i].price);
        printf("%d = ", p[i].quantity);
        printf("%.2f \n", paid);
    }
    printf("Total: %.2f", total);

    return 0;
}