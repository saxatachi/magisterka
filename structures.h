#ifndef MASTER_STRUCTURES_H
#define MASTER_STRUCTURES_H
#include<iostream>
#include <liblas/liblas.hpp>
#include <liblas/header.hpp>
//#include <vector>

using namespace std;

struct Point{
    double x;
    double y;
};

struct StructurePoint{
    Point point;
    double value;
};

struct PointsDistance{
    liblas::Point point;
    double distance;
    PointsDistance(const liblas::Point& point_,double distance_):point(point_), distance(distance_){}
};


struct Line{
    Point point1;
    Point point2;
    double value;
    int i;
    int j;
    Line(Point point1_,Point point2_,double value_,int i_,int j_):point1(point1_), point2(point2_), value(value_),i(i_),j(j_) {}
};

struct Linev2{
    Point point1;
    Point point2;
    double value;
    string pt1;
    string pt2;
    Linev2(Point point1_,Point point2_,double value_,string pt1_,string pt2_):point1(point1_), point2(point2_), value(value_), pt1(pt1_),pt2(pt2_) {}
};

struct Cell {
    double centerx;
    double centery;
    vector<PointsDistance> pointsdistance;
    double value;
};

struct LineCell {
    double topleft;
    double topright;
    double bottomleft;
    double bottomright;
    Point pointa;
    Point pointb;
    Point pointc;
    Point pointd;
    vector<Linev2> lines;
};


#endif //MASTER_STRUCTURES_H
