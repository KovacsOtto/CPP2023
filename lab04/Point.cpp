//
// Created by Otto on 10/16/2023.
//

#include <cmath>
#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(int x, int y) {
    if (x >= 0 && x <= 2000 && y >= 0 && y <= 2000){
        this->x = x;
        this->y = y;
    }
    else{
        this->x = 0;
        this->y = 0;
    }
}
int Point::getX() const {
    return x;
}
int Point::getY() const {
    return y;
}

void Point::print() const {
    cout << "(" << x << ", " << y << ")" << endl;
}

double Point :: distanceTo(const Point &point) const{
    return sqrt(pow(x - point.x, 2) + pow(y - point.y, 2));
}