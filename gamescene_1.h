#ifndef GAMESCENE_1_H
#define GAMESCENE_1_H
#include<QWidget>
#include<QPushButton>
#include<QGroupBox>
#include<QPixmap>
#include<QPainter>
#include<QDebug>
#include<QLabel>
#include<QFont>
#include<QMovie>
#include<QTimer>
#include<QPoint>
#include<QMoveEvent>
#include<QSound>
#include<QMediaPlayer>
#include<QString>
#include<QVector>
#include<windows.h>
#include<QSlider>
#include<QMap>
#include"plants.h"
#include"configuration.h"
#include"lattice.h"
#include"plantCard.h"
#include"fly.h"
#include"zombies.h"
class gameScene_1:public QWidget
{

public:
    //场景中的各个资源

    //场景的公共资源
    bool isLose;                                     //僵尸进村信号

    bool isWin;                                      //抵御完当前所有僵尸信号

    bool haveEnemy[5];                               //敌人信号

    QPixmap shovelPix;                                //铲子图标

    QMediaPlayer *player;                            //音乐播放器

    QTimer painterTimer;                             //整个场景中的绘图计时器

    QTimer stateTimer;                               //整个场景中的状态计时器

    int timeCount;                                   //整个场景中的时间计数

    int sunCount;                                    //整个场景中的阳光计数

    int sunCost;

    int nowChoosePlant;                              //当前选择的植物序号

    QLabel sunLaber;                                  //计数阳光的控件

    QPushButton backButton;                           //返回按钮，由于要与上一界面联动所以额外声明

    QPixmap background;                               //背景图片

    lattice sceneLattice[5][9];                       //场景中的草坪格子

    plantCard scenePlantCard[9];                      //九张植物卡片

    QMap<int,int>myMap;                                 //记录每行的Y坐标

    QSlider timeSlider;
    //植物资源
    sunFlower sceneSunFlower;
    peaShoot  scenePeaShoot;
    doublePeaShot sceneDoublePeaShoot;
    icePeaShoot sceneIcePeaShoot;
    machineGunPeaShoot sceneMachineGunPeaShoot;
    potatoMines scenePotatoMines;
    woggie sceneWoggie;
    fireTree sceneFireTree;
    nut sceneNut;

    //植物生成物资源
    sun sceneSun;       QVector<sun>sceneSunVector;
    pea scenePea;      QVector<pea>scenePeaVector;
    icePea sceneIcePea;     QVector<icePea>sceneIcePeaVector;
    firePea sceneFirePea;  QVector<firePea>sceneFirePeaVector;


    //僵尸资源
    baseZombie sceneBaseZombie;                QVector<baseZombie>sceneBaseZombieVector;              QVector<baseZombie>base;
    barricadeZombie sceneBarricadeZombie;      QVector<barricadeZombie>sceneBarricadeZombieVector;    QVector<barricadeZombie>barricade;
    ironBarrelZombie sceneIronBarrelZombie;    QVector<ironBarrelZombie>sceneIronBarrelZombieVector;  QVector<ironBarrelZombie>ironBarrel;

    //场景函数
    gameScene_1();                                    //构造函数

    void setButton();                                 //设置返回，加速，慢速，停止等按钮

    void paintEvent(QPaintEvent *event) override;     //重写绘图事件

    void mousePressEvent(QMouseEvent *event) override; //重写鼠标事件

    void setPlantCard();                              //设置植物卡片

    void setSunBank();                                //设置阳关显示的槽

    void setLattice();                                //设置场景中的格子

    void palyMusic();                                 //播放音乐

    void setPainterTimer();                           //设置绘画计时器

    void setStateTimer();                             //设置状态计时器

    void setShovel();                                 //设置铲子

    QPoint findPoint(int x,int y);                    //坐标帮助函数

    void fireTreeDetect();                            //火炬树检测

    void setZombies();                                //推入僵尸

    void zombiesDetect();                             //僵尸的膨胀检测

    void eatDetect();                                 //僵尸是否可以吃植物判断
    
    void woggieDetect();                              //倭瓜与敌人检测

    void potatoMinesDetect();                        //土豆地雷检测

    void lossDetect();                               //失败检测

    void winDetect();                                //游戏胜利检测

    void setTimeSlider();                            //设置计时器

    void playGame();
};

#endif // GAMESCENE_1_H
