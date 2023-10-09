//
// Created by Otto on 10/2/2023.
//

#ifndef MAIN_02_CPP_UTIL_H
#define MAIN_02_CPP_UTIL_H


#include "Point.h"

using namespace std;

double distance(const Point& a, const Point& b);
bool isSquare(const Point& a, const Point& b, const Point& c, const Point& d);
void testIsSquare(const char * filename);
Point* createArray(int numPoints);
void printArray(Point* points, int numPoints);
pair<Point, Point> closestPoints(Point* points, int numPoints);
pair<Point, Point> farthestPoints(Point* points, int numPoints);
void sortPoints(Point* points, int numPoints);
bool hasonlit(const Point& a, const Point& b);
Point* farthestPointsFromOrigin(Point* points, int numPoints);
bool hasonlit2(const Point& a, const Point& b);
void deletePoints(Point* points);

#endif //MAIN_02_CPP_UTIL_H
