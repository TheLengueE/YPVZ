#ifndef FLY_H
#define FLY_H
#include<QMovie>
#include<QPixmap>
#include<QRect>
#include"configuration.h"

class fly
{
public:
    fly();
    int pointX;
    int pointY;
    QMovie *movie;
    QRect rect;
    QPixmap pix;
    void mySetRect();
};
class sun:public fly
{
public:
    sun();
};

class pea:public fly
{
public:
    pea();
    int speed;
    int attack;
};

class icePea:public fly
{
public:
    icePea();
    int speed;
    int attack;
};

class firePea:public fly
{
public:
    firePea();
    int speed;
    int attack;
};
#endif // FLY_H
