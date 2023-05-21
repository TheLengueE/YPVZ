#ifndef LATTICE_H
#define LATTICE_H
#include<QRect>

class lattice
{
public:
    lattice();
    int   xPoint;              //格子x坐标
    int   yPoint;              //格子y坐标
    int   plantId;             //植物序号
    bool  isReady;             //该格子上的植物是否准备好了活动
    int   lastTime;            //上一次植物活动时间
    int   everyReadyCostTime;  //格子上植物每次活动花费时间
    bool  secondState;         //当前格子上的植物是否进入第二状态
    QRect rect;
    int   health;
};
#endif // LATTICE_H
