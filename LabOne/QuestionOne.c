//
// Created by clirim on 2/28/21.
//

/* Complete the program with the following requirements:

create struct for point in three-dimensional space and write a function that will compute the distance between two such points.
write a function that accepts as argument three 2D points and checks if they are collinear (they all lie on a straight line).
*/

#include <stdio.h>
#include <math.h>
float power(float a, float b) {
    float res = 1;
    for(b; b > 0; b--)
        res *= a;
    return res;
}

typedef struct point3D {
    float x,y,z;
} point3D;



typedef struct point2D {
    float x,y;
} point2D;

float distance3D(point3D left, point3D right) {
    return sqrt(power((right.x - left.x), 2) + power((right.y - left.y), 2) + power((right.z - left.z), 2));
}

float distance(point2D left, point2D right) {
    return sqrt(power((right.x - left.x), 2) + power((right.y - left.y), 2));
}

int collinear(point2D one, point2D two, point2D three) {
    int a = (one.x * (two.y-three.y) + two.x * (three.y-one.y) + three.x * (one.y - two.y))/2;
    if (a == 0)
        return 1;
    else
        return 0;
}

int main() {
    float x1, y1, x2, y2;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    point2D t1 = { x1, y1 };
    point2D t2 = { x2, y2 };
    printf("%.2f\n", distance(t1, t2));
    float z1, z2;
    scanf("%f %f", &z1, &z2);
    point3D t3 = {x1, y1, z1};
    point3D t4 = {x2, y2, z2};
    printf("%.2f\n", distance3D(t3, t4));
    point2D t5 = {z1, z2};
    printf("%d\n", collinear(t1, t2, t5));
    return 0;
}
