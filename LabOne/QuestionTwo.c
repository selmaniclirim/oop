//
// Created by clirim on 2/28/21.
//

// Write a struct for segment in 2D (two points). Than write a function that will check if two segments intersect.

#include <stdio.h>


float max(float a, float b) {
    if (a > b)
        return a;
    else
        return b;
}

float min(float a, float b) {
    if (a > b)
        return b;
    else
        return a;
}

typedef struct point {
    float x,y;
} point;


typedef struct segment {
    point p1,p2;
} segment;

int onLine(segment l1, point p) {   //check whether p is on the line or not
    if(p.x <= max(l1.p1.x, l1.p2.x) && p.x <= min(l1.p1.x, l1.p2.x) &&
       (p.y <= max(l1.p1.y, l1.p2.y) && p.y <= min(l1.p1.y, l1.p2.y)))
        return 1;

    return 0;
}

int direction(point a, point b, point c) {
    int val = (b.y-a.y)*(c.x-b.x)-(b.x-a.x)*(c.y-b.y);
    if (val == 0)
        return 0;     //colinear
    else if(val < 0)
        return 2;    //anti-clockwise direction
    return 1;    //clockwise direction
}

int intersect(segment l1, segment l2) {
    //four direction for two lines and points of other line
    int dir1 = direction(l1.p1, l1.p2, l2.p1);
    int dir2 = direction(l1.p1, l1.p2, l2.p2);
    int dir3 = direction(l2.p1, l2.p2, l1.p1);
    int dir4 = direction(l2.p1, l2.p2, l1.p2);

    if(dir1 != dir2 && dir3 != dir4)
        return 1; //they are intersecting

    if(dir1==0 && onLine(l1, l2.p1)) //when p2 of line2 are on the line1
        return 1;

    if(dir2==0 && onLine(l1, l2.p2)) //when p1 of line2 are on the line1
        return 1;

    if(dir3==0 && onLine(l2, l1.p1)) //when p2 of line1 are on the line2
        return 1;

    if(dir4==0 && onLine(l2, l1.p2)) //when p1 of line1 are on the line2
        return 1;

    return 0;
}

int main() {
    float x1, y1, x2, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    point t1 = { x1, y1 };
    point t2 = { x2, y2 };
    segment o1 = { t1, t2 };
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    point t3 = { x1, y1 };
    point t4 = { x2, y2 };
    segment o2 = { t3, t4 };
    printf("%d\n", intersect(o1, o2));
    return 0;
}