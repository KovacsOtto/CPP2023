//
// Created by Otto on 10/2/2023.
//

#include <cmath>
#include <iostream>
#include <sstream>
#include <algorithm>
#include "util.h"
#include "Point.h"
#include "fstream"

using namespace std;

double distance(const Point &a, const Point &b) {
    return sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2));
}
bool isSquare(const Point& a, const Point& b, const Point& c, const Point& d){
    return distance(a,b) == distance(c,d);
}
void testIsSquare(const char * filename){
    ifstream fin(filename);
    int a1,a2,b1,b2,c1,c2,d1,d2;
    while(fin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2 >> d1 >> d2){
        Point p1(a1,a2), p2(b1,b2), p3(c1,c2), p4(d1,d2);
        if(isSquare(p1,p2,p3,p4)){
            cout<<"Can be square"<<endl;
        }
        else{
            cout<<"Can't be square"<<endl;
        }
    }
    fin.close();

}
Point* createArray(int numPoints)
{
    srand(time(nullptr));
    Point* points = new Point[numPoints];
    for (int i = 0; i < numPoints; i++) {
        int x, y;
        x =rand()%2001;
        y =rand()%2001;
        points[i] = Point(x,y);
    }
    return points;
}
void printArray(Point* points, int numPoints){
    for (int i = 0; i < numPoints; i++) {
        points[i].print();
    }
}
pair<Point, Point> closestPoints(Point* points, int numPoints){
    double min = INT_MAX;
    pair<Point, Point> closestPair;
    for (int i = 0; i < numPoints; ++i) {
        for (int j = i+1; j < numPoints; ++j) {
            if(distance(points[i],points[j]) < min){
                min = distance(points[i],points[j]);
                closestPair=make_pair(points[i],points[j]);
            }
        }
    }
    return closestPair;
}
pair<Point, Point> farthestPoints(Point* points, int numPoints){
    double max = INT_MIN;
    pair<Point, Point> farthestPair;
    for (int i = 0; i < numPoints; ++i) {
        for (int j = i+1; j < numPoints; ++j) {
            if(distance(points[i],points[j]) > max){
                max = distance(points[i],points[j]);
                farthestPair=make_pair(points[i],points[j]);
            }
        }
    }
    return farthestPair;
}
void sortPoints(Point* points, int numPoints){
    sort(points, points+numPoints,hasonlit);
}
bool hasonlit(const Point& a, const Point& b){
    return a.getX() < b.getX();
}
Point* farthestPointsFromOrigin(Point* points, int numPoints){
    Point* farthestPoints = new Point[numPoints];
    sort(points, points+numPoints,hasonlit2);
    for (int i = 0; i < numPoints; ++i) {
        farthestPoints[i] = points[i];
    }
    return farthestPoints;
}
bool hasonlit2(const Point& a, const Point& b){
    return distance(a,Point(0,0)) > distance(b,Point(0,0));
}
void deletePoints(Point* points){
    delete[] points;
}