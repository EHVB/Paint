#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
#include <iostream>
#include <vector>
#include <QVector>
#include <QtCore>
#include <QtGui>
#include <QString>
#include <QColor>

class Rectangle : public Shape
{
private:
    int x_coor;
    int y_coor;
    int width;
    int height;
    const QString type = "rectangle";
 //   double per;
public:
    Rectangle();
//    static std::vector<Rectangle*> rects;
    void set_xcoor(int x){
        x_coor =x;
    }
    void set_ycoor(int y){
        y_coor =y;
    }
    void set_height(int h){
        height = h;
    }
    void set_width(int w){
        width = w;
    }
    int get_xcoor(){
        return x_coor;
    }
    int get_ycoor(){
        return y_coor;
    }
    int get_height(){
        return height;
    }
    int get_width(){
        return width;
    }
    virtual double getPer(){
        setPer(2 * (width+ height));
        return get_per();
    }
    virtual QString gettype() { return type; }

};

#endif // RECTANGLE_H
