#ifndef ZOMBIES_H
#define ZOMBIES_H
#include<QPixmap>
#include<QMovie>
#include<QRect>
#include"configuration.h"

class zombies
{
public:
    bool isEat;
    int pointX;
    int pointY;
    QPixmap pix;
    QMovie *walkMovie;
    QMovie *attackMovie;
    int appearanceTime;
    int health;
    int attack;
    int speed;
    QRect rect;
    zombies();
    void setZombieHelp(int time,int y);
    void mySetRect();
};

class baseZombie:public zombies
{
public:
    baseZombie();
};

class barricadeZombie:public zombies
{
public:
    barricadeZombie();
};

class ironBarrelZombie:public zombies
{
public:
    ironBarrelZombie();
};

#endif // ZOMBIES_H
