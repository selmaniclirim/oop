//
// Created by clirim on 3/1/21.
//

/* Write a program that will read from SI number N (number of products), and than will read data for N products (name, price, quantity). The program should print on SO the list of bought products and the total amount to be paid in the following format:

1. Flips    10.00 x 3 = 30.00
2. CocaCola 75.00 x 2 = 150.00
3. ChokoBanana  5.00 x 10 = 50.00
Total: 230.00 */


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