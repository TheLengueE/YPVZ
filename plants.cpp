#include "plants.h"

plants::plants()
{

}

sunFlower::sunFlower()
{
    sunCost=sunFlower_sunCost;
    plantId=sunFlower_plantId
    health=sunFlower_health
    everyActivityTime=sunFlower_everyActivityTime
    movie=new QMovie(sunFlower_pix);
    pix.load(sunFlower_pix);
    movie->start();
    rect.setWidth(pix.width());
    rect.setHeight(pix.height());
}

peaShoot::peaShoot()
{
    sunCost=peaShoot_sunCost;
    plantId=peaShoot_plantId;
    health=peaShoot_health;
    everyActivityTime=peaShoot_everyActivityTime;
    movie=new QMovie(peaShoot_pix);
    pix.load(peaShoot_pix);
    movie->start();
    rect.setWidth(pix.width());
    rect.setHeight(pix.height());
}

doublePeaShot::doublePeaShot()
{
    sunCost=doublePeaShoot_sunCost;
    plantId=doublePeaShoot_plantId;
    health=doublePeaShoot_health;
    everyActivityTime=doublePeaShoot_everyActivityTime;
    movie=new QMovie(doublePeaShoot_pix);
    pix.load(doublePeaShoot_pix);
    movie->start();
    rect.setWidth(pix.width());
    rect.setHeight(pix.height());
}

icePeaShoot::icePeaShoot()
{
    sunCost=icePeaShoot_sunCost;
    plantId=icePeaShoot_plantId;
    health=icePeaShoot_health;
    everyActivityTime=icePeaShoot_everyActivityTime;
    movie=new QMovie(icePeaShoot_pix);
    pix.load(icePeaShoot_pix);
    movie->start();
    rect.setWidth(pix.width());
    rect.setHeight(pix.height());
}

machineGunPeaShoot::machineGunPeaShoot()
{
    sunCost=machineGun_sunCost;
    plantId=machineGun_plantId;
    health=machineGun_health;
    everyActivityTime=machieGun_everyActivityTime;
    movie=new QMovie(machineGun_pix);
    pix.load(machineGun_pix);
    movie->start();
    rect.setWidth(pix.width());
    rect.setHeight(pix.height());
}

potatoMines::potatoMines()
{
    isRead=false;
    sunCost=potatoMines_sunCost;
    plantId=potatoMines_plantId;
    health=potatoMines_health;
    everyActivityTime=potatoMines_everyActivityTime;
    movie=new QMovie(potatoMines_pix);
    movie2=new QMovie(potatoMines_pix2);
    pix.load(potatoMines_pix);
    movie->start();
    movie2->start();
    rect.setWidth(pix.width());
    rect.setHeight(pix.height());
}

woggie::woggie()
{
    sunCost=woggie_sunCost;
    plantId=woggie_plantId;
    health=woggie_health;
    everyActivityTime=woggie_everyActivityTime;
    movie=new QMovie(woggie_pix);
    movie2=new QMovie(woggie_pix2);
    pix.load(woggie_pix);
    movie->start();
    movie2->start();
    rect.setWidth(pix.width());
    rect.setHeight(pix.height());
}

fireTree::fireTree()
{
    sunCost=fireTree_sunCost;
    plantId=fireTree_plantId;
    health=fireTree_health;
    everyActivityTime=fireTree_everyActivityTime;
    movie=new QMovie(fireTree_pix);
    pix.load(fireTree_pix);
    movie->start();
    rect.setWidth(pix.width());
    rect.setHeight(pix.height());
}

nut::nut()
{
    sunCost=nut_sunCost;
    plantId=nut_plantId;
    health=nut_health;
    everyActivityTime=nut_everyActivityTime;
    movie=new QMovie(nut_pix);
    pix.load(nut_pix);
    movie->start();
    rect.setWidth(pix.width());
    rect.setHeight(pix.height());
}
