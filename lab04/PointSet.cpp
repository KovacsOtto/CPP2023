//
// Created by Otto on 10/16/2023.
//

#include <random>
#include <algorithm>
#include <iostream>
#include "PointSet.h"

using namespace std;

PointSet::PointSet(int n) {
    random_device rd; // seed the random number generator named rd
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0, M); // return a number in the given range
    this->n = n;
    for(int i=0;i<n;i++){
        int x = dist(mt);
        int y = dist(mt);
        Point  newPoint(x, y);
        points.push_back(newPoint);
    }
    computeDistances();
}


void PointSet::computeDistances() {
    double distance;
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            distance = points[i].distanceTo(points[j]);
            distances.push_back(distance);
        }
    }
}

double PointSet::maxDistance() const {
    return *max_element(distances.begin(), distances.end());

}

double PointSet::minDistance() const {
    return *min_element(distances.begin(), distances.end());
}

int PointSet::numDistances() const {
    return distances.size();
}

void PointSet::printPoints() const {
    for (int i = 0; i < n; i++) {
        points[i].print();
    }
}

void PointSet::printDistances() const {
    for (int i = 0; i < numDistances(); i++) {
        cout << distances[i] << " ";
    }
}

void PointSet::sortPointsX() {
    sort(points.begin(), points.end(), [](const Point &a, const Point &b) {
        return a.getX() > b.getX();
    });
}

void PointSet::sortPointsY() {
    sort(points.begin(), points.end(), [](const Point &a, const Point &b) {
        return a.getY() > b.getY();
    });
}

void PointSet::sortDistances() {
    sort(distances.begin(), distances.end());
}

int PointSet::numDistinctDistances() {
    vector<double> newVector = distances;
    auto last =  unique(newVector.begin(), newVector.end());
    return last - newVector.begin();
}
