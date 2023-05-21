#ifndef PLANTS_H
#define PLANTS_H
#include<QPixmap>
#include<QMovie>
#include<QRect>
#include"configuration.h"

class plants
{
public:
    plants();
    int sunCost;
    int plantId;
    int health;
    int everyActivityTime;
    QRect rect;
    QMovie *movie;
    QPixmap pix;
};

class sunFlower :public plants
{
public:
    sunFlower();

};

class peaShoot:public plants
{
public:
    peaShoot();

};

class doublePeaShot:public plants
{
public:
    doublePeaShot();

};

class icePeaShoot:public plants
{
public:
    icePeaShoot();
};

class machineGunPeaShoot:public plants
{
public:
    machineGunPeaShoot();
};

class potatoMines :public plants
{
public:
    potatoMines();
    bool isRead;
    QMovie *movie2;
};

class woggie:public plants
{
public:
    woggie();
    QMovie *movie2;
    bool isReady;
};

class fireTree:public plants
{
public:
    fireTree();
};


class nut:public plants
{
public:
    nut();
};



#endif // PLANTS_H
