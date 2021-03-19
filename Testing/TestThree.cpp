//
// Created by Clirim on 3/19/2021.
//

#include <iostream>
using namespace std;

int main() {
//    int a = 10;
//    int *b = &a;
//    int &c = a;
//    cout << a << endl;
//    cout << b << endl;
//    cout << c << endl;
//    cout << endl;
//    a = 20;
//    cout << a << endl;
//    cout << b << endl;
//    cout << c << endl;
//    int a = 10;
//    int &p = a;
//    cout << &p << endl << &a;
    int a[10] = {};
    a[0] = 50;
    a[7] = 50;

    for(int i = 0; i < 10; i++) {
        if(a[i] == NULL) {
            cout << i << ". it's null" << endl;
        }
    }

    return 0;
}