//
// Created by Clirim on 3/12/2021.
//

#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    float radius;
    const float pi = 3.14;
public:
//    Circle() {
//
//    };
//    Circle(float _radius) {
//        radius = _radius;
//    };

    Circle(float _radius = 1) {
        radius = _radius;
    }
    float area() {
        return pi*pow(radius,2);
    }
    float perimeter() {
        return 2*pi*radius;
    }
    int equal() {
        return area() == perimeter();
    }

};

int main() {
    float r;
    cin >> r;
    //instanciate object from class Circle
    Circle c(r);

    cout << c.perimeter() << endl;
    cout << c.area() << endl;
    cout << c.equal() <<endl;
    return 0;
}