#include <iostream>
#include "Point.h"
#include "util.h"

using namespace std;

int main(int argc, char** argv) {
//    Point p1(2,3);
//    cout<<"p1( "<<p1.getX()<<","<<p1.getY()<<")"<<endl;
//    Point p2(100, 200);
//    cout<<"p2( "<<p2.getX()<<","<<p2.getY()<<")"<<endl;
//    Point * pp1 = new Point(300, 400);
//    Point * pp2 = new Point(500, 1000);
//    cout<<"pp1( "<<pp1->getX()<<","<<pp1->getY()<<")"<<endl;
//    cout<<"pp2( "<<pp2->getX()<<","<<pp2->getY()<<")"<<endl;
//    delete pp1;
//    delete pp2;
//    p1.print();
//    cout << distance(p1,p2) << endl;
//    Point p3(0,0);
//    Point p4(0,0);
//    if(isSquare(p1,p2,p3,p4)){
//        cout<<"Can be square"<<endl;
//    }
//    else{
//        cout<<"Can't be square"<<endl;
//    }
//    testIsSquare("points.txt");
    int numPoints=12;
    Point * points = createArray(numPoints);
    sortPoints(points, numPoints);
    printArray(points, numPoints);
    cout << endl;
    farthestPointsFromOrigin(points, numPoints);
    printArray(points, numPoints);
    pair<Point, Point> closestPair = closestPoints(points, numPoints);
    cout<<"Closest pair: "<<closestPair.first.getX()<<" "<<closestPair.first.getY()<<" "<<closestPair.second.getX()<<" "<<closestPair.second.getY()<<endl;
    pair<Point, Point> farthestPair = farthestPoints(points, numPoints);
    cout<<"Farthest pair: "<<farthestPair.first.getX()<<" "<<farthestPair.first.getY()<<" "<<farthestPair.second.getX()<<" "<<farthestPair.second.getY()<<endl;
    deletePoints(points);
    return 0;
}

