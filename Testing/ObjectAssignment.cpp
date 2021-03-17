//
// Created by Clirim on 3/17/2021.
//

#include <iostream>
using namespace std;

class Testing {
    int x,y;
public:
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }

    void setX(int a){
        x = a;
    }
    void setY(int a) {
        y = a;
    }
};


int main() {
    Testing one,two;
    one.setX(5);
    one.setY(10);

    cout << "Test 1: (" << one.getX() << "," << one.getY() << ")" << endl;
    cout << "Test 2: (" << two.getX() << "," << two.getY() << ")" << endl;
    two = one;
    cout << "Test 1: (" << one.getX() << "," << one.getY() << ")" << endl;
    cout << "Test 2: (" << two.getX() << "," << two.getY() << ")" << endl;

    return 0;
}