#include "fly.h"

fly::fly()
{

}

void fly::mySetRect()
{
  rect.moveTo(pointX,pointY);
}

sun::sun()
{
    movie =new QMovie(sun_pix);
    pix.load(sun_pix);
    movie->start();
    rect.setWidth(pix.width());
    rect.setHeight(pix.height());
}

pea::pea()
{
    movie =new QMovie(pea_pix);
    pix.load(pea_pix);
    movie->start();
    speed=pea_speed;
    rect.setWidth(pix.width());
    rect.setHeight(pix.height());
    attack=pea_attack;
}

icePea::icePea()
{
    movie =new QMovie(icePea_pix);
    pix.load(icePea_pix);
    movie->start();
    speed=icePea_speed;
    rect.setWidth(pix.width());
    rect.setHeight(pix.height());
    attack=icePea_attack;
}

firePea::firePea()
{
    movie =new QMovie(firePea_pix);
    pix.load(firePea_pix);
    movie->start();
    speed=firePea_speed;
    attack=firePea_attack;
    rect.setWidth(pix.width());
    rect.setHeight(pix.height());
}
