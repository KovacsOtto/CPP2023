//
// Created by Otto on 10/2/2023.
//

#ifndef MAIN_02_CPP_POINT_H
#define MAIN_02_CPP_POINT_H


class Point {
    private:
        int x, y;
    public:
        Point( int x=0, int y=0);
        int getX() const;
        int getY() const;
        void print() const;
};

#endif //MAIN_02_CPP_POINT_H
