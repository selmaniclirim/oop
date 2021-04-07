//
// Created by Clirim on 4/5/2021.
//

#include<iostream>
#include<cstring>

using namespace std;

int main() {
    char test[5];
    cin >> test;
    cout << strlen(test);
    char *dma = new char[5];
    strcpy(dma, test);
    cout << test << " " << dma;

    return 0;
}