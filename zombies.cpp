#include "zombies.h"

zombies::zombies()
{

}

void zombies::setZombieHelp(int time, int y)
{
   appearanceTime=time;
   if(y>=1&&y<=5)
   {
        if(y<=3){ pointY=165+119*(y-1);}
        else { pointY=165+123*(y-1);}
   }
   pointX=1450;
}

void zombies::mySetRect()
{
    rect.moveTo(pointX,pointY);
}

baseZombie::baseZombie()
{
    isEat=false;
    pix.load(baseZombie_walk);
    walkMovie =new QMovie(baseZombie_walk);
    attackMovie =new QMovie(baseZombie_attack);
    health=baseZombie_health;
    speed=baseZombie_speed;
    attack=baseZombie_attackNumber;
    walkMovie->start();
    attackMovie->start();
    rect.setWidth(pix.width());
    rect.setHeight(pix.height());

}

barricadeZombie::barricadeZombie()
{
    isEat=false;
    pix.load(barricadeZombies_walk);
    walkMovie = new QMovie(barricadeZombies_walk);
    attackMovie =new QMovie(barricadeZombies_attack);
    health=barricadeZombies_health;
    speed=barricadeZombies_speed;
    attack=barricadeZombies_attackNumber;
    walkMovie->start();
    attackMovie->start();
    rect.setWidth(pix.width());
    rect.setHeight(pix.height());
}

ironBarrelZombie::ironBarrelZombie()
{
    isEat=false;
    pix.load(ironBarrelZombie_walk);
    walkMovie = new QMovie(ironBarrelZombie_walk);
    attackMovie =new QMovie(ironBarrelZombie_attack);
    health=ironBarrelZombie_health;
    speed=ironBarrelZombie_speed;
    attack=barricadeZombies_attackNumber;
    walkMovie->start();
    attackMovie->start();
    rect.setWidth(pix.width());
    rect.setHeight(pix.height());
}
