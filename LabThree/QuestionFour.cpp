//
// Created by Clirim on 3/19/2021.
//

#include<iostream>
#include<cstring>

using namespace std;

enum Color {
    RED,
    GREEN,
    BLUE
};

class Shape {
    Color c;
    char id[5];
    double area;
public:
    Shape(char id[5] = "01234", Color c = BLUE, double area = 0.2) {
        strcpy(this->id, id);
        this->c = c;
        this->area = area;
    }

    // TODO setters/getters

    void draw() {
        cout << id << " ";
        switch(c) {
            case RED:
                cout << "RED";
                break;
            case GREEN:
                cout << "GREEN";
                break;
            case BLUE:
                cout << "BLUE";
                break;
        }
        cout << " " << area << endl;
    }

    const char *getID() {
        return id;
    }

    Color getColor() {
        return c;
    }

    double getArea() {
        return area;
    }

    void setArea(double a) {
        area = a;
    }

};

class Canvas {
    Shape shapes[100];
    int shapeN;
public:
    Canvas(Shape shapes[100] = {}, int shapeN = 0) {
        this->shapeN = shapeN;
        for (int i = 0; i < shapeN; i++) {
            this->shapes[i] = shapes[i];
        }
    }

    Canvas(const Canvas &other) {
        this->shapeN = other.shapeN;
        for (int i = 0; i < other.shapeN; i++) {
            this->shapes[i] = other.shapes[i];
        }
    }

    // TODO setters/getters

    // TODO

    void addShape(Shape s) {
        shapeN++;
        for (int i = 0; i < shapeN; i++) {
            if (strcmp(shapes[i].getID(), "01234") == 0) {
                shapes[i] = s;
            }
        }
    }

    void drawAll() {
        for (int i = 0; i < shapeN; i++) {
            shapes[i].draw();
        }
    }

    void drawOnly(Color c) {
        for (int i = 0; i < shapeN; i++) {
            if (shapes[i].getColor() == c) {
                shapes[i].draw();
            }
        }
    }

    double totalArea() {
        double total = 0;
        for (int i = 0; i < shapeN; i++) {
            total += shapes[i].getArea();
        }
        return total;
    }

    Canvas getHalfCanvas() {
        Canvas c;
        c.shapeN = shapeN;
        double halved;
        for (int i = 0; i < c.shapeN; i++) {
            c.shapes[i] = shapes[i];
            halved = c.shapes[i].getArea() / 2;
            c.shapes[i].setArea(halved);
        }
        return c;
    }
};

int main() {

    int n;
    cin >> n;
    cout << "ADITION OF SHAPES IN THE CANVAS" << endl;
    Canvas canvas;

    for (int i = 0; i < n; i++) {
        char id[5];
        int color;
        double area;

        cin >> id >> color >> area;
        Shape s(id, (Color) color, area);
        canvas.addShape(s);
    }

    cout << "TESTING DRAW ALL" << endl;

    canvas.drawAll();

    cout << "TESTING DRAW RED SHAPES" << endl;

    canvas.drawOnly(RED);

    cout << "TESTING TOTAL AREA" << endl;

    cout << canvas.totalArea() << endl;

    cout << "TESTING HALF CANVAS" << endl;
    Canvas reducedCanvas = canvas.getHalfCanvas();
    cout << canvas.totalArea() << " " << reducedCanvas.totalArea() << endl;

    if (reducedCanvas.totalArea() == canvas.totalArea()) {
        cout << "DO NOT CHANGE THE AREA OF THE OBJECT IN THE CURRENT CANVAS. JUST IN THE NEW CANVAS" << endl;
    }

    return 0;
}