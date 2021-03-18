//
// Created by Clirim on 3/12/2021.
//

#include <iostream>
using namespace std;

class Angle {
private:
    int degrees;
    int minutes;
    int seconds;
public:
    Angle() {

    }
    int getDegrees() {
        return degrees;
    };
    int getMinutes() {
        return minutes;
    };
    int getSeconds() {
        return seconds;
    };
    void setDegrees(int x) {
        degrees = x;
    };
    void setMinutes(int x) {
        minutes = x;
    };
    void setSeconds(int x) {
        seconds = x;
    };

    int toSeconds() {
        int total = getDegrees() * 3600 + getMinutes() * 60 + getSeconds();
        return total;
    }
};

bool check(int x, int y, int z) {
    if (x >= 0 && x <= 360) {
        if (x == 360 && (y != 0 || z != 0))
            return false;
        if (y >= 0 && y <= 59) {
            if (z >= 0 && z <= 59)
                return true;
        }
    }
    return false;
}

bool checkAngle (Angle a1, int deg, int min, int sec) {
    return a1.getDegrees()==deg && a1.getMinutes()==min && a1.getSeconds()==sec;
}

int main() {

    //instanciate object of class Angle, named a1
    Angle a1;

    int deg, min, sec;

    cin >> deg >> min >> sec;

    if (check(deg, min, sec)) {

        a1.setDegrees(deg);
        a1.setMinutes(min);
        a1.setSeconds(sec);
        cout << a1.toSeconds();

        if (!checkAngle(a1,deg,min,sec)) {
            cout<<"Don't change the internal state of the private variables in the class!!!!";
        }

    } else {
        cout << "Invalid values" << endl;
    }

    return 0;
}