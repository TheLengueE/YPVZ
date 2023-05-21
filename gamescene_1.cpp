
#include "gamescene_1.h"

gameScene_1::gameScene_1()
{
    playGame();
}

void gameScene_1::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,this->width(),this->height(),background);

    if( isLose )
    {
        QPixmap losePix;
        losePix.load(lose);
        painter.drawPixmap(400,100,800,500,losePix);
        painterTimer.stop();
        stateTimer.stop();
    }

    if( isWin )
    {
        QPixmap winPix;
        winPix.load(win);
        painter.drawPixmap(400,100,800,500,winPix);
        painterTimer.stop();
        stateTimer.stop();
        return ;
    }

    for(int ii=0 ; ii<5 ;ii++)
    {
        for(int jj=0 ; jj<9 ;jj++)
        {
            if( sceneLattice[ii][jj].plantId==1 )
            {
             int sceneX=sceneLattice[ii][jj].xPoint;
             int sceneY=sceneLattice[ii][jj].yPoint;
             int pixX=sceneSunFlower.pix.width();
             int pixY=sceneSunFlower.pix.height();
              painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,sceneSunFlower.movie->currentPixmap());
            }
            else if( sceneLattice[ii][jj].plantId==2 )
            {
             int sceneX=sceneLattice[ii][jj].xPoint;
             int sceneY=sceneLattice[ii][jj].yPoint;
             int pixX=scenePeaShoot.pix.width();
             int pixY=scenePeaShoot.pix.height();
              painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,scenePeaShoot.movie->currentPixmap());
            }
            else if( sceneLattice[ii][jj].plantId==3 )
            {
             int sceneX=sceneLattice[ii][jj].xPoint;
             int sceneY=sceneLattice[ii][jj].yPoint;
             int pixX=sceneDoublePeaShoot.pix.width();
             int pixY=sceneDoublePeaShoot.pix.height();
              painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,sceneDoublePeaShoot.movie->currentPixmap());
            }
            else if( sceneLattice[ii][jj].plantId==4 )
            {
             int sceneX=sceneLattice[ii][jj].xPoint;
             int sceneY=sceneLattice[ii][jj].yPoint;
             int pixX=sceneIcePeaShoot.pix.width();
             int pixY=sceneIcePeaShoot.pix.height();
             painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,sceneIcePeaShoot.movie->currentPixmap());
            }
            else if( sceneLattice[ii][jj].plantId==5 )
            {
             int sceneX=sceneLattice[ii][jj].xPoint;
             int sceneY=sceneLattice[ii][jj].yPoint;
             int pixX=sceneMachineGunPeaShoot.pix.width();
             int pixY=sceneMachineGunPeaShoot.pix.height();
              painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,sceneMachineGunPeaShoot.movie->currentPixmap());
            }
            else if( sceneLattice[ii][jj].plantId==6 )
            {
             int sceneX=sceneLattice[ii][jj].xPoint;
             int sceneY=sceneLattice[ii][jj].yPoint;
             int pixX=scenePotatoMines.pix.width();
             int pixY=scenePotatoMines.pix.height();
             if( sceneLattice[ii][jj].secondState==false )
             {
              painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,scenePotatoMines.movie->currentPixmap());
             }
             else
             {
                 painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,scenePotatoMines.movie2->currentPixmap());
             }
            }
            else if( sceneLattice[ii][jj].plantId==7 )
            {
             int sceneX=sceneLattice[ii][jj].xPoint;
             int sceneY=sceneLattice[ii][jj].yPoint;
             int pixX=sceneWoggie.pix.width();
             int pixY=sceneWoggie.pix.height();
             if( sceneLattice[ii][jj].secondState==false )
             {
               painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,sceneWoggie.movie->currentPixmap());
             }
             else
             {
                 painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,sceneWoggie.movie2->currentPixmap());
             }

            }
            else if( sceneLattice[ii][jj].plantId==8 )
            {
             int sceneX=sceneLattice[ii][jj].xPoint;
             int sceneY=sceneLattice[ii][jj].yPoint;
             int pixX=sceneFireTree.pix.width();
             int pixY=sceneFireTree.pix.height();
              painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,sceneFireTree.movie->currentPixmap());
            }
            else if( sceneLattice[ii][jj].plantId==9 )
            {
             int sceneX=sceneLattice[ii][jj].xPoint;
             int sceneY=sceneLattice[ii][jj].yPoint;
             int pixX=sceneNut.pix.width();
             int pixY=sceneNut.pix.height();
              painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,sceneNut.movie->currentPixmap());
            }
        }
    }

    for(int ii=0 ; ii<sceneSunVector.size() ; ii++)  //画太阳
    {
        int sceneX=sceneSunVector[ii].pointX;
        int sceneY=sceneSunVector[ii].pointY;
        int pixX=sceneSunVector[ii].pix.width();
        int pixY=sceneSunVector[ii].pix.height();
        painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,sceneSunVector[ii].movie->currentPixmap());
    }

    for(int ii=0 ; ii<scenePeaVector.size() ; ii++)  //画豌豆
    {
        int sceneX=scenePeaVector[ii].pointX;
        int sceneY=scenePeaVector[ii].pointY;
        int pixX=scenePeaVector[ii].pix.width();
        int pixY=scenePeaVector[ii].pix.height();
        painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,scenePeaVector[ii].movie->currentPixmap());
    }

    for(int ii=0 ; ii<sceneIcePeaVector.size() ; ii++)  //画冰豌豆
    {
        int sceneX=sceneIcePeaVector[ii].pointX;
        int sceneY=sceneIcePeaVector[ii].pointY;
        int pixX=sceneIcePeaVector[ii].pix.width();
        int pixY=sceneIcePeaVector[ii].pix.height();
        painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,sceneIcePeaVector[ii].movie->currentPixmap());
    }

    for(int ii=0 ; ii<sceneFirePeaVector.size() ; ii++)  //画火豌豆
    {
        int sceneX=sceneFirePeaVector[ii].pointX;
        int sceneY=sceneFirePeaVector[ii].pointY;
        int pixX=sceneFirePeaVector[ii].pix.width();
        int pixY=sceneFirePeaVector[ii].pix.height();
        painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,sceneFirePeaVector[ii].movie->currentPixmap());
    }

    for(int ii=0 ; ii<sceneBaseZombieVector.size() ; ii++)  //画普通僵尸
    {
        int sceneX=sceneBaseZombieVector[ii].pointX;
        int sceneY=sceneBaseZombieVector[ii].pointY;
        int pixX=sceneBaseZombieVector[ii].pix.width();
        int pixY=sceneBaseZombieVector[ii].pix.height();
        if(sceneBaseZombieVector[ii].isEat==false )
        {
        painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,sceneBaseZombieVector[ii].walkMovie->currentPixmap());
        }
        else
        {
         painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,sceneBaseZombieVector[ii].attackMovie->currentPixmap());
         QSound::play(eatPlant);
        }
     }

    for(int ii=0 ; ii<sceneBarricadeZombieVector.size() ; ii++)//画路障僵尸
    {
        int sceneX=sceneBarricadeZombieVector[ii].pointX;
        int sceneY=sceneBarricadeZombieVector[ii].pointY;
        int pixX=sceneBarricadeZombieVector[ii].pix.width();
        int pixY=sceneBarricadeZombieVector[ii].pix.height();
        if(sceneBarricadeZombieVector[ii].isEat==false )
        {
        painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,sceneBarricadeZombieVector[ii].walkMovie->currentPixmap());
        }
        else
        {
         painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,sceneBarricadeZombieVector[ii].attackMovie->currentPixmap());
         QSound::play(eatPlant);
        }
    }

    for(int ii=0 ; ii<sceneIronBarrelZombieVector.size() ; ii++)//画铁桶僵尸
    {
        int sceneX=sceneIronBarrelZombieVector[ii].pointX;
        int sceneY=sceneIronBarrelZombieVector[ii].pointY;
        int pixX=sceneIronBarrelZombieVector[ii].pix.width();
        int pixY=sceneIronBarrelZombieVector[ii].pix.height();
        if(sceneIronBarrelZombieVector[ii].isEat==false )
        {
        painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,sceneIronBarrelZombieVector[ii].walkMovie->currentPixmap());
        }
        else
        {
         painter.drawPixmap(sceneX-0.5*pixX,sceneY-0.5*pixY,pixX,pixY,sceneIronBarrelZombieVector[ii].attackMovie->currentPixmap());
         QSound::play(eatPlant);
        }
    }
}

void gameScene_1::mousePressEvent(QMouseEvent *event)
{
    if( event->button() == Qt::LeftButton && nowChoosePlant!=0 )
    {
        QPoint point;
        point=findPoint(event->x(),event->y());
        int x=point.x(),y=point.y();
       if( nowChoosePlant==-1 )
       {
           sceneLattice[x][y].plantId=0;
           sceneLattice[x][y].health=0;
           sceneLattice[x][y].secondState=false;
           nowChoosePlant=0;
       }
       else if(sceneLattice[x][y].plantId==0 && nowChoosePlant!=9)
       {
        sceneLattice[x][y].plantId=nowChoosePlant;
        sceneLattice[x][y].isReady=false;
        sceneLattice[x][y].lastTime=timeCount;
        sunCount=sunCount-sunCost;
        sunCost=0;
        sceneLattice[x][y].health=50;
        QSound::play(placePlantWav);
       }
       else if(sceneLattice[x][y].plantId==0 && nowChoosePlant==9)
       {
           sceneLattice[x][y].plantId=nowChoosePlant;
           sceneLattice[x][y].isReady=false;
           sceneLattice[x][y].lastTime=timeCount;
           sunCount=sunCount-sunCost;
           sunCost=0;
           sceneLattice[x][y].health=nut_health;
           QSound::play(placePlantWav);
       }
        nowChoosePlant=0;
    }
    else if( event->button() == Qt::LeftButton)     //收集太阳光
    {
        for(int ii=0 ; ii<sceneSunVector.size() ;ii++)
        {
            int x=sceneSunVector[ii].pointX;
            int y=sceneSunVector[ii].pointY;
            int d;
            d=(x-event->x())*(x-event->x())+(y-event->y())*(y-event->y());
            if( d<200 )
            {
               sceneSunVector.erase(sceneSunVector.begin()+ii);
               sunCount=sunCount+sun_everySunAdd;
               QSound::play(getSun);
            }
         }
    }



}

void gameScene_1::setButton()
{
    backButton.setFixedSize(75,75);
    backButton.setParent(this);
    backButton.move(1375,0);
    backButton.setText("返回");
    backButton.setStyleSheet(
                "QPushButton{"
                             "background-color: #D0D4D2;"
                             "color: white;"
                             "font: bold 20px;"
                             "border-radius: 10px;"
                             "border: 2px solid rgb(50, 50, 50);"
                             "border-style:outset;"
                             "border-radius:10px;"
                             "}"
                             );
    connect(&backButton,QPushButton::clicked,[=](){player->stop();});

    QPushButton *quickButton = new QPushButton;
    quickButton->setFixedSize(75,75);
    quickButton->setParent(this);
    quickButton->move(1300,0);
    quickButton->setText("快速");
    quickButton->setStyleSheet(
                "QPushButton{"
                             "background-color: #D0D4D2;"
                             "color: white;"
                             "font: bold 20px;"
                             "border-radius: 10px;"
                             "border: 2px solid rgb(50, 50, 50);"
                             "border-style:outset;"
                             "border-radius:10px;"
                             "}"
                             );
    connect(quickButton,&QPushButton::clicked,[=](){
     painterTimer.start(25);
    });

    QPushButton *slowButton = new QPushButton;
    slowButton->setFixedSize(75,75);
    slowButton->setParent(this);
    slowButton->move(1150,0);
    slowButton->setText("慢速");
    slowButton->setStyleSheet(
                             "QPushButton{"
                             "background-color: #D0D4D2;"
                             "color: white;"
                             "font: bold 20px;"
                             "border-radius: 10px;"
                             "border: 2px solid rgb(50, 50, 50);"
                             "border-style:outset;"
                             "border-radius:10px;"
                             "}"
                              );
    connect(slowButton,&QPushButton::clicked,[=](){
       painterTimer.start(200);
    });

    QPushButton *stopButton = new QPushButton ;
    stopButton->setFixedSize(75,75);
    stopButton->setParent(this);
    stopButton->move(1225,0);
    stopButton->setText("正常");
    stopButton->setStyleSheet(
                             "QPushButton{"
                             "background-color: #D0D4D2;"
                              "color: white;"
                              "font: bold 20px;"
                              "border-radius: 10px;"
                              "border: 2px solid rgb(50, 50, 50);"
                              "border-style:outset;"
                              "border-radius:10px;"
                               "}"
                              );
    connect(stopButton,&QPushButton::clicked,[=](){
      painterTimer.start(100);
    });



}

void gameScene_1::setPlantCard()
{
    QGroupBox *plantBox=new QGroupBox;
    plantBox->setParent(this);
    plantBox->setFixedSize(200,700);
    plantBox->setStyleSheet("border-image: url(:/gameScene/res_YPVZ/gameScene/plantBank.png);");
    plantBox->move(0,100);


        scenePlantCard[0].setIcon(QIcon(sunFlowerCard));
        scenePlantCard[0].setIconSize( QSize(177,75) );
        scenePlantCard[0].sunCost=sunFlower_sunCost;
        scenePlantCard[0].iceTime=sunFlower_iceTime;

        scenePlantCard[1].setIcon(QIcon(peaShootCard));
        scenePlantCard[1].setIconSize( QSize(177,75) );
        scenePlantCard[1].sunCost=peaShoot_sunCost;
        scenePlantCard[1].iceTime=peaShoot_iceTime;

        scenePlantCard[2].setIcon(QIcon(doublePeaShootCard));
        scenePlantCard[2].setIconSize( QSize(177,75) );
        scenePlantCard[2].sunCost=doublePeaShoot_sunCost;
        scenePlantCard[2].iceTime=doublePeaShoot_iceTime;

        scenePlantCard[3].setIcon(QIcon(icePeaShootCard));
        scenePlantCard[3].setIconSize( QSize(177,75) );
        scenePlantCard[3].sunCost=icePeaShoot_sunCost;
        scenePlantCard[3].iceTime=icePeaShoot_iceTime;

        scenePlantCard[4].setIcon(QIcon(machineGunCard));
        scenePlantCard[4].setIconSize( QSize(177,75) );
        scenePlantCard[4].sunCost=machineGun_sunCost;
        scenePlantCard[4].iceTime=machineGun_iceTime;

        scenePlantCard[5].setIcon(QIcon(potatoMinesCard));
        scenePlantCard[5].setIconSize( QSize(177,75) );
        scenePlantCard[5].sunCost=potatoMines_sunCost;
        scenePlantCard[5].iceTime=potatoMines_iceTime;

        scenePlantCard[6].setIcon(QIcon(woggieCard));
        scenePlantCard[6].setIconSize( QSize(177,75) );
        scenePlantCard[6].sunCost=woggie_sunCost;
        scenePlantCard[6].iceTime=woggie_iceTime;

        scenePlantCard[7].setIcon(QIcon(fireTreeCard));
        scenePlantCard[7].setIconSize( QSize(177,75) );
        scenePlantCard[7].sunCost=fireTree_sunCost;
        scenePlantCard[7].iceTime=fireTree_iceTime;

        scenePlantCard[8].setIcon(QIcon(nutCard));
        scenePlantCard[8].setIconSize( QSize(177,75) );
        scenePlantCard[8].sunCost=nut_sunCost
        scenePlantCard[8].iceTime=nut_iceTime;

        for( int ii=0 ; ii<9 ; ii++)
        {
            scenePlantCard[ii].setParent(this);
            scenePlantCard[ii].setFixedSize(177,75);
            scenePlantCard[ii].planId=ii+1;
            scenePlantCard[ii].move(10,113+ii*75);

            connect(&scenePlantCard[ii],plantCard::clicked,[=]()
            {
                if( nowChoosePlant==0 )
                {
                   nowChoosePlant=scenePlantCard[ii].planId;
                   if( sunCount-scenePlantCard[nowChoosePlant-1].sunCost >=0 )
                   {
                    sunCost=scenePlantCard[nowChoosePlant-1].sunCost;
                   }
                   else
                   {
                       nowChoosePlant=0;
                   }
                }
                else
                {
                    nowChoosePlant=0;
                }
            });
        }





}

void gameScene_1::setSunBank()
{
    QGroupBox *sunBox=new QGroupBox;
    sunBox->setParent(this);
    sunBox->setFixedSize(200,100);
    sunBox->setStyleSheet("border-image: url(:/gameScene/res_YPVZ/gameScene/sunBack.png);");


    sunLaber.setParent(this);
    sunLaber.setText("100");
    sunLaber.setFixedSize(200,100);
    sunLaber.move(100,0);

    QFont ft;      //设置字体大小
    ft.setPointSize(20);
    sunLaber.setFont(ft);
}

void gameScene_1::setLattice()
{
    for(int ii=0; ii<5 ; ii++)
    {
        for(int jj=0; jj<9 ; jj++)
        {
            if( ii<=2 )       //这个场景图并不是完全对称平衡的,下面的2行格子要大一点
            {
            sceneLattice[ii][jj].xPoint=425+jj*119;
            sceneLattice[ii][jj].yPoint=165+ii*119;
            sceneLattice[ii][jj].rect.moveTo(sceneLattice[ii][jj].xPoint,sceneLattice[ii][jj].yPoint);
            sceneLattice[ii][jj].rect.setWidth(sceneSunFlower.pix.width());
            sceneLattice[ii][jj].rect.setHeight(sceneSunFlower.pix.height());
            }
            else
            {
                sceneLattice[ii][jj].xPoint=425+jj*119;
                sceneLattice[ii][jj].yPoint=165+ii*123;
                sceneLattice[ii][jj].rect.moveTo(sceneLattice[ii][jj].xPoint,sceneLattice[ii][jj].yPoint);
                sceneLattice[ii][jj].rect.setWidth(sceneSunFlower.pix.width());
                sceneLattice[ii][jj].rect.setHeight(sceneSunFlower.pix.height());
            }
            sceneLattice[ii][jj].plantId=0;
             sceneLattice[ii][jj].health=0;
        }
    }
}

void gameScene_1::palyMusic()
{
    player=new QMediaPlayer();    //没有这一行程序会出错，真是神奇
    player->setMedia(QUrl(gameSceneMusice1));
    player->setVolume(1);
    player->play();
}

void gameScene_1::setPainterTimer()
{
    painterTimer.start(100);
    connect(&painterTimer,QTimer::timeout,[=]()
    {
        QString str = QString::number(sunCount);
        sunLaber.setText(str);

        eatDetect();    //僵尸吃植物检测

        zombiesDetect();//僵尸与飞行物的碰撞检测

        fireTreeDetect();//检测火炬树

        woggieDetect();  //倭瓜检测

        potatoMinesDetect();//土豆地雷检测

        lossDetect();     //僵尸是否进村

        winDetect();      //检测是否胜利

        //豌豆飞行
        for( int ii=0 ; ii<scenePeaVector.size() ; ii++)
        {
            scenePeaVector[ii].pointX=scenePeaVector[ii].pointX+scenePeaVector[ii].speed;
            scenePeaVector[ii].mySetRect();
        }

        //冰豌豆飞行
        for( int ii=0 ; ii<sceneIcePeaVector.size() ; ii++)
        {
            sceneIcePeaVector[ii].pointX=sceneIcePeaVector[ii].pointX+sceneIcePeaVector[ii].speed;
            sceneIcePeaVector[ii].mySetRect();
        }

        //火豌豆飞行
        for( int ii=0 ; ii<sceneFirePeaVector.size() ; ii++)
        {
            sceneFirePeaVector[ii].pointX=sceneFirePeaVector[ii].pointX+sceneFirePeaVector[ii].speed;
            sceneFirePeaVector[ii].mySetRect();
        }

        //普通僵尸行走
        for( int ii=0 ; ii<sceneBaseZombieVector.size() ; ii++)
        {
            sceneBaseZombieVector[ii].pointX=sceneBaseZombieVector[ii].pointX-sceneBaseZombieVector[ii].speed;
            sceneBaseZombieVector[ii].mySetRect();

        }

        //路障僵尸行走
        for( int ii=0 ; ii<sceneBarricadeZombieVector.size() ; ii++)
        {
            sceneBarricadeZombieVector[ii].pointX=sceneBarricadeZombieVector[ii].pointX-sceneBarricadeZombieVector[ii].speed;
            sceneBarricadeZombieVector[ii].mySetRect();


        }

        //铁桶僵尸行走
        for( int ii=0 ; ii<sceneIronBarrelZombieVector.size() ; ii++)
        {
            sceneIronBarrelZombieVector[ii].pointX=sceneIronBarrelZombieVector[ii].pointX-sceneIronBarrelZombieVector[ii].speed;
            sceneIronBarrelZombieVector[ii].mySetRect();
        }

        update();
      }
    );
}

void gameScene_1::setStateTimer()
{
    stateTimer.start(1);
    connect(&stateTimer,QTimer::timeout,[=]()
    {
        timeCount++; //时间计数++

        for( int ii=0 ; ii<scenePeaVector.size(); ii++)  //豌豆超出界限回收
        {
            if(scenePeaVector[ii].pointX>=1450)
            {
                scenePeaVector.erase(scenePeaVector.begin()+ii);
            }
        }

        for( int ii=0 ; ii<sceneIcePeaVector.size(); ii++)  //冰豌豆超出界限回收
        {
            if(sceneIcePeaVector[ii].pointX>=1450)
            {
                sceneIcePeaVector.erase(sceneIcePeaVector.begin()+ii);
            }
        }

        for( int ii=0 ; ii<sceneFirePeaVector.size(); ii++)  //火豌豆超出界限回收
        {
            if(sceneFirePeaVector[ii].pointX>=1450)
            {
                sceneFirePeaVector.erase(sceneFirePeaVector.begin()+ii);
            }
        }


        for( int ii=0 ; ii<5 ; ii++)
        {
            for( int jj=0 ; jj<9 ; jj++)
            {
                if( sceneLattice[ii][jj].plantId==1 )
                {
                    if( timeCount-sceneLattice[ii][jj].lastTime >=sceneSunFlower.everyActivityTime )
                    {

                        sceneLattice[ii][jj].isReady=true;
                    }
                }
                else if( sceneLattice[ii][jj].plantId==2 )
                {
                    if( timeCount-sceneLattice[ii][jj].lastTime >=scenePeaShoot.everyActivityTime )
                    {
                        sceneLattice[ii][jj].isReady=true;
                    }
                }
                else if( sceneLattice[ii][jj].plantId==3 )
                {

                    if( timeCount-sceneLattice[ii][jj].lastTime >= sceneDoublePeaShoot.everyActivityTime )
                    {
                        sceneLattice[ii][jj].isReady=true;

                    }
                }
                else if( sceneLattice[ii][jj].plantId==4 )
                {
                    if(timeCount-sceneLattice[ii][jj].lastTime >= sceneIcePeaShoot.everyActivityTime )
                    {
                        sceneLattice[ii][jj].isReady=true;
                    }
                }
                else if( sceneLattice[ii][jj].plantId==5 )
                {
                    if( timeCount-sceneLattice[ii][jj].lastTime >= sceneMachineGunPeaShoot.everyActivityTime )
                    {
                        sceneLattice[ii][jj].isReady=true;
                    }
                }
                else if( sceneLattice[ii][jj].plantId==6 )
                {
                    if( timeCount-sceneLattice[ii][jj].lastTime >= scenePotatoMines.everyActivityTime )
                    {
                        sceneLattice[ii][jj].isReady=true;
                    }
                }
            }
        }

        for( int ii=0 ; ii<5 ; ii++)
        {
            for( int jj=0 ; jj<9 ; jj++)
            {
                if(sceneLattice[ii][jj].isReady&&sceneLattice[ii][jj].plantId==1)
                {
                        sceneSun.pointX=sceneLattice[ii][jj].xPoint-75;
                        sceneSun.pointY=sceneLattice[ii][jj].yPoint;
                        sceneSunVector.push_back(sceneSun);
                        sceneLattice[ii][jj].isReady=false;
                        sceneLattice[ii][jj].lastTime=timeCount;
                }
                else if( sceneLattice[ii][jj].isReady&&sceneLattice[ii][jj].plantId==2&&haveEnemy[ii])
                {
                       scenePea.pointX=sceneLattice[ii][jj].xPoint+50;
                       scenePea.pointY=sceneLattice[ii][jj].yPoint;
                       scenePeaVector.push_back(scenePea);
                       sceneLattice[ii][jj].isReady=false;
                       sceneLattice[ii][jj].lastTime=timeCount;
                }
                else if( sceneLattice[ii][jj].isReady&&sceneLattice[ii][jj].plantId==3&&haveEnemy[ii] )
                {
                       scenePea.pointX=sceneLattice[ii][jj].xPoint+50;
                       scenePea.pointY=sceneLattice[ii][jj].yPoint;
                       scenePeaVector.push_back(scenePea);
                       scenePea.pointX=sceneLattice[ii][jj].xPoint+75;
                       scenePea.pointY=sceneLattice[ii][jj].yPoint;
                       scenePeaVector.push_back(scenePea);
                       sceneLattice[ii][jj].isReady=false;
                       sceneLattice[ii][jj].lastTime=timeCount;
                }
                else if( sceneLattice[ii][jj].isReady&&sceneLattice[ii][jj].plantId==4&&haveEnemy[ii] )
                {
                       sceneIcePea.pointX=sceneLattice[ii][jj].xPoint+50;
                       sceneIcePea.pointY=sceneLattice[ii][jj].yPoint;
                       sceneIcePeaVector.push_back(sceneIcePea);
                       sceneLattice[ii][jj].isReady=false;
                       sceneLattice[ii][jj].lastTime=timeCount;
                }
                else if( sceneLattice[ii][jj].isReady&&sceneLattice[ii][jj].plantId==5&&haveEnemy[ii] )
                {
                       scenePea.pointX=sceneLattice[ii][jj].xPoint+25;
                       scenePea.pointY=sceneLattice[ii][jj].yPoint;
                       scenePeaVector.push_back(scenePea);
                       scenePea.pointX=sceneLattice[ii][jj].xPoint+50;
                       scenePea.pointY=sceneLattice[ii][jj].yPoint;
                       scenePeaVector.push_back(scenePea);
                       scenePea.pointX=sceneLattice[ii][jj].xPoint+75;
                       scenePea.pointY=sceneLattice[ii][jj].yPoint;
                       scenePeaVector.push_back(scenePea);
                       scenePea.pointX=sceneLattice[ii][jj].xPoint+100;
                       scenePea.pointY=sceneLattice[ii][jj].yPoint;
                       scenePeaVector.push_back(scenePea);
                       sceneLattice[ii][jj].isReady=false;
                       sceneLattice[ii][jj].lastTime=timeCount;
                }
                else if( sceneLattice[ii][jj].isReady&&sceneLattice[ii][jj].plantId==6)
                {
                      sceneLattice[ii][jj].secondState=true;
                }
            }
        }

        for( int ii=0 ; ii<base.size() ; ii++)                   //判断普通僵尸是否出场
        {
            if( base[ii].appearanceTime==timeCount )
            {
               sceneBaseZombieVector.push_back(base[ii]);
            }
        }

        for( int ii=0 ; ii<barricade.size() ; ii++)                //判断路障僵尸是否出场
        {
            if( barricade[ii].appearanceTime==timeCount )
            {
               sceneBarricadeZombieVector.push_back(barricade[ii]);
            }
        }

        for( int ii=0 ; ii<ironBarrel.size() ; ii++)               //判断铁桶僵尸是否出场
        {
            if( ironBarrel[ii].appearanceTime==timeCount )
            {
                sceneIronBarrelZombieVector.push_back(ironBarrel[ii]);
            }
        }

        //判断普通僵尸是否死亡
        for(int ii=0 ; ii<sceneBaseZombieVector.size(); ii++)
        {
            if( sceneBaseZombieVector[ii].health<=0 ) { sceneBaseZombieVector.erase(sceneBaseZombieVector.begin()+ii); }
        }
        //判断路障僵尸死亡
        for(int ii=0 ; ii<sceneBarricadeZombieVector.size(); ii++)
        {
            if(sceneBarricadeZombieVector[ii].health<=0 ) { sceneBarricadeZombieVector.erase(sceneBarricadeZombieVector.begin()+ii); }
        }
        //判断铁桶僵尸死亡
        for(int ii=0 ; ii<sceneIronBarrelZombieVector.size() ; ii++)
        {
            if( sceneIronBarrelZombieVector[ii].health<=0 )
            {
                sceneIronBarrelZombieVector.erase(sceneIronBarrelZombieVector.begin()+ii);
            }
        }

        for(int ii=0 ; ii<5 ;ii++ ) { haveEnemy[ii]=false; }


        for(int ii=0 ; ii<sceneBaseZombieVector.size() ;ii++ )
        {
         haveEnemy[ myMap[sceneBaseZombieVector[ii].pointY] ]=true;

        }
        for(int ii=0 ; ii<sceneBarricadeZombieVector.size() ;ii++ )
        {
         haveEnemy[myMap[sceneBarricadeZombieVector[ii].pointY]]=true;
        }
        for(int ii=0 ; ii<sceneIronBarrelZombieVector.size() ;ii++ )
        {
         haveEnemy[myMap[sceneIronBarrelZombieVector[ii].pointY]]=true;
        }
        timeSlider.setValue(timeCount);
    });
}

void gameScene_1::setShovel()
{
    shovelPix.load(gameScene_shavel);
    QPushButton *shovel=new QPushButton;
    shovel->setFixedSize(75,75);
    shovel->setParent(this);
    shovel->move(1050,0);
    shovel->setStyleSheet("QPushButton {border:0px;}");
    shovel->setIcon(shovelPix);
    shovel->setIconSize(QSize(75,75));
    connect(shovel,QPushButton::clicked,[=]()
    {
        nowChoosePlant=-1;
    });
}

QPoint gameScene_1::findPoint(int x,int y)
{

        QPoint ret;
        int minD=99999;
        for(int i=0 ; i<5 ; i++)
        {
            for(int j=0 ; j<9 ;j++)
            {
                int d;
                int latticeX=sceneLattice[i][j].xPoint;
                int latticeY=sceneLattice[i][j].yPoint;
                d= (latticeX-x)*(latticeX-x)+(latticeY-y)*(latticeY-y);
                if( d<minD )
                {
                    minD=d;
                    ret.setX(i);
                    ret.setY(j);
                }
            }
        }
        return ret;
}

void gameScene_1::fireTreeDetect()
{
    for(int ii=0 ; ii<5 ; ii++ )      //火炬树桩检测
    {
        for(int jj=0 ; jj<9 ;jj++ )   //普通豌豆
        {
            if( sceneLattice[ii][jj].plantId==8 )
            {
               sceneFireTree.rect.moveTo(sceneLattice[ii][jj].xPoint,sceneLattice[ii][jj].yPoint);
               for(int i=0 ; i<scenePeaVector.size() ;i++ )
               {
                   if( scenePeaVector[i].rect.intersects(sceneFireTree.rect) )
                   {
                       sceneFirePea.pointX=scenePeaVector[i].pointX;
                       sceneFirePea.pointY=scenePeaVector[i].pointY;
                       scenePeaVector.erase(scenePeaVector.begin()+i);
                       sceneFirePeaVector.push_back(sceneFirePea);
                   }
               }
               for(int i=0 ; i<sceneIcePeaVector.size() ; i++) //冰豌豆
               {
                   if( sceneIcePeaVector[i].rect.intersects(sceneFireTree.rect) )
                   {
                       sceneIcePeaVector.erase(sceneIcePeaVector.begin()+i);
                   }
               }
            }
        }
    }
}

void gameScene_1::setZombies()
{
    sceneBaseZombie.setZombieHelp(1000,1);
    base.push_back(sceneBaseZombie);

    sceneBaseZombie.setZombieHelp(10000,4);
    base.push_back(sceneBaseZombie);

    sceneBarricadeZombie.setZombieHelp(2000,3);
    barricade.push_back(sceneBarricadeZombie);

    sceneIronBarrelZombie.setZombieHelp(4000,2);
    ironBarrel.push_back(sceneIronBarrelZombie);

    sceneIronBarrelZombie.setZombieHelp(15000,3);
    ironBarrel.push_back(sceneIronBarrelZombie);

    sceneIronBarrelZombie.setZombieHelp(7000,5);
    ironBarrel.push_back(sceneIronBarrelZombie);

    sceneIronBarrelZombie.setZombieHelp(8500,3);
    ironBarrel.push_back(sceneIronBarrelZombie);
}

void gameScene_1::zombiesDetect()
{
    //普通僵尸碰撞检测
    for(int ii=0 ; ii<sceneBaseZombieVector.size() ; ii++)
    {
        for(int i=0 ; i<scenePeaVector.size() ; i++)
        {
            if( sceneBaseZombieVector[ii].rect.intersects(scenePeaVector[i].rect) && sceneBaseZombieVector[ii].pointY==scenePeaVector[i].pointY)
            {
                sceneBaseZombieVector[ii].health=sceneBaseZombieVector[ii].health-scenePeaVector[i].attack;
                scenePeaVector.erase(scenePeaVector.begin()+i);
                QSound::play(peaHit);
            }
        }
        for(int i=0 ; i<sceneIcePeaVector.size() ; i++)
        {
            if(sceneBaseZombieVector[ii].rect.intersects(sceneIcePeaVector[i].rect)&& sceneBaseZombieVector[ii].pointY==sceneIcePeaVector[i].pointY)
            {
                sceneBaseZombieVector[ii].health=sceneBaseZombieVector[ii].health-sceneIcePeaVector[i].attack;
                sceneIcePeaVector.erase(sceneIcePeaVector.begin()+i);
                QSound::play(peaHit);
            }
        }
        for(int i=0 ; i<sceneFirePeaVector.size() ; i++)
        {
            if( sceneBaseZombieVector[ii].rect.intersects(sceneFirePeaVector[i].rect)&&sceneBaseZombieVector[ii].pointY==sceneFirePeaVector[i].pointY )
            {
                sceneBaseZombieVector[ii].health=sceneBaseZombieVector[ii].health-sceneFirePeaVector[i].attack;
                sceneFirePeaVector.erase(sceneFirePeaVector.begin()+i);
                QSound::play(peaHit);
            }
        }
     }

    //路障僵尸碰撞检测
    for(int ii=0 ; ii<sceneBarricadeZombieVector.size() ; ii++)
    {
        for(int i=0 ; i<scenePeaVector.size() ; i++)
        {
            if( sceneBarricadeZombieVector[ii].rect.intersects(scenePeaVector[i].rect)&&sceneBarricadeZombieVector[ii].pointY==scenePeaVector[i].pointY )
            {
                sceneBarricadeZombieVector[ii].health=sceneBarricadeZombieVector[ii].health-scenePeaVector[i].attack;
                scenePeaVector.erase(scenePeaVector.begin()+i);
                QSound::play(peaHit);
            }
        }
        for(int i=0 ; i<sceneIcePeaVector.size() ; i++)
        {
            if( sceneBarricadeZombieVector[ii].rect.intersects(sceneIcePeaVector[i].rect)&&sceneBarricadeZombieVector[ii].pointY==sceneIcePeaVector[i].pointY)
            {
                sceneBarricadeZombieVector[ii].health=sceneBarricadeZombieVector[ii].health-sceneIcePeaVector[i].attack;
                sceneIcePeaVector.erase(sceneIcePeaVector.begin()+i);
                QSound::play(peaHit);
            }
        }
        for(int i=0 ; i<sceneFirePeaVector.size() ; i++)
        {
            if( sceneBarricadeZombieVector[ii].rect.intersects(sceneFirePeaVector[i].rect)&&sceneBarricadeZombieVector[ii].pointY==sceneFirePeaVector[i].pointY)
            {
                sceneBarricadeZombieVector[ii].health=sceneBarricadeZombieVector[ii].health-sceneFirePeaVector[i].attack;
                sceneFirePeaVector.erase(sceneFirePeaVector.begin()+i);
                QSound::play(peaHit);
            }
        }
     }

    //铁桶僵尸碰撞检测
    for(int ii=0 ; ii<sceneIronBarrelZombieVector.size() ; ii++)
    {
        for(int i=0 ; i<scenePeaVector.size() ; i++)
        {
            if( sceneIronBarrelZombieVector[ii].rect.intersects(scenePeaVector[i].rect)&&sceneIronBarrelZombieVector[ii].pointY==scenePeaVector[i].pointY )
            {
                sceneIronBarrelZombieVector[ii].health=sceneIronBarrelZombieVector[ii].health-scenePeaVector[i].attack;
                scenePeaVector.erase(scenePeaVector.begin()+i);
                QSound::play(peaHit);
            }
        }
        for(int i=0 ; i<sceneIcePeaVector.size() ; i++)
        {
            if( sceneIronBarrelZombieVector[ii].rect.intersects(sceneIcePeaVector[i].rect)&&sceneIronBarrelZombieVector[ii].pointY==sceneIcePeaVector[i].pointY )
            {
                sceneIronBarrelZombieVector[ii].health=sceneIronBarrelZombieVector[ii].health-sceneIcePeaVector[i].attack;
                sceneIcePeaVector.erase(sceneIcePeaVector.begin()+i);
                QSound::play(peaHit);
            }
        }
        for(int i=0 ; i<sceneFirePeaVector.size() ; i++)
        {
            if( sceneIronBarrelZombieVector[ii].rect.intersects(sceneFirePeaVector[i].rect)&&sceneIronBarrelZombieVector[ii].pointY==sceneFirePeaVector[i].pointY )
            {
                sceneIronBarrelZombieVector[ii].health=sceneIronBarrelZombieVector[ii].health-sceneFirePeaVector[i].attack;
                sceneFirePeaVector.erase(sceneFirePeaVector.begin()+i);
                QSound::play(peaHit);
            }
        }
    }
}

void gameScene_1::eatDetect()
{
    for( int ii=0 ; ii<5 ; ii++)
    {
        for( int jj=0 ;jj <9 ; jj++)
        {
            //普通僵尸吃植物
            for(int i=0 ; i<sceneBaseZombieVector.size() ; i++)
            {
              if(sceneLattice[ii][jj].health>0&&sceneLattice[ii][jj].rect.intersects(sceneBaseZombieVector[i].rect)&&sceneLattice[ii][jj].yPoint
                    ==sceneBaseZombieVector[i].pointY)
                {
                sceneBaseZombieVector[i].isEat=true;
                sceneBaseZombieVector[i].speed=0;
                if( sceneLattice[ii][jj].health-sceneBaseZombieVector[i].attack<=0 )
                {
                    sceneBaseZombieVector[i].isEat=false;
                    sceneLattice[ii][jj].plantId=0;
                    sceneBaseZombieVector[i].speed=baseZombie_speed;
                }
                else
                {
                    sceneLattice[ii][jj].health=sceneLattice[ii][jj].health-sceneBaseZombieVector[i].attack;
                }
             }
           }
            //路障僵尸吃植物
            for(int i=0 ; i<sceneBarricadeZombieVector.size() ; i++)
            {
              if(sceneLattice[ii][jj].health>0&&sceneLattice[ii][jj].rect.intersects(sceneBarricadeZombieVector[i].rect)&&sceneLattice[ii][jj].yPoint
                    ==sceneBarricadeZombieVector[i].pointY)
                {

                sceneBarricadeZombieVector[i].isEat=true;
                sceneBarricadeZombieVector[i].speed=0;
                if( sceneLattice[ii][jj].health-sceneBarricadeZombieVector[i].attack<=0 )
                {
                    sceneBarricadeZombieVector[i].isEat=false;
                    sceneLattice[ii][jj].plantId=0;
                    sceneBarricadeZombieVector[i].speed=barricadeZombies_speed;
                }
                else
                {
                    sceneLattice[ii][jj].health=sceneLattice[ii][jj].health-sceneBarricadeZombieVector[i].attack;
                }
             }
            }
            //铁桶僵尸吃植物
            for(int i=0 ; i<sceneIronBarrelZombieVector.size() ; i++)
            {
              if(sceneLattice[ii][jj].health>0&&sceneLattice[ii][jj].rect.intersects(sceneIronBarrelZombieVector[i].rect)&&sceneLattice[ii][jj].yPoint
                    ==sceneIronBarrelZombieVector[i].pointY)
                {

                sceneIronBarrelZombieVector[i].isEat=true;
                sceneIronBarrelZombieVector[i].speed=0;
                if( sceneLattice[ii][jj].health-sceneIronBarrelZombieVector[i].attack<=0 )
                {
                    sceneIronBarrelZombieVector[i].isEat=false;
                    sceneLattice[ii][jj].plantId=0;
                    sceneIronBarrelZombieVector[i].speed=ironBarrelZombie_speed;
                }
                else
                {
                    sceneLattice[ii][jj].health=sceneLattice[ii][jj].health-sceneIronBarrelZombieVector[i].attack;
                }
             }
            }

        }
    }
}

void gameScene_1::woggieDetect()
{
    for(int ii=0 ; ii<5 ; ii++)
    {
        for(int jj=0 ; jj<9 ; jj++)
        {
            if(sceneLattice[ii][jj].plantId==7)
            {
              for(int i=0 ; i<sceneBaseZombieVector.size() ;i++ )
              {
                  if(sceneBaseZombieVector[i].pointY==sceneLattice[ii][jj].yPoint&&
                     sceneBaseZombieVector[i].pointX-sceneLattice[ii][jj].xPoint<100&&sceneBaseZombieVector[i].pointX-sceneLattice[ii][jj].xPoint>0)
                  {
                      sceneLattice[ii][jj].plantId=0;
                      sceneBaseZombieVector[i].health=0;
                      QSound::play(woggieWav);
                  }
              }
              for(int i=0 ; i<sceneBarricadeZombieVector.size() ;i++ )
              {
                  if(sceneBarricadeZombieVector[i].pointY==sceneLattice[ii][jj].yPoint&&
                     sceneBarricadeZombieVector[i].pointX-sceneLattice[ii][jj].xPoint<100&&sceneBarricadeZombieVector[i].pointX-sceneLattice[ii][jj].xPoint>0)
                  {
                      sceneLattice[ii][jj].plantId=0;
                      sceneBarricadeZombieVector[i].health=0;
                      QSound::play(woggieWav);
                  }
              }
              for(int i=0 ; i<sceneIronBarrelZombieVector.size() ;i++ )
              {
                  if(sceneIronBarrelZombieVector[i].pointY==sceneLattice[ii][jj].yPoint&&
                     sceneIronBarrelZombieVector[i].pointX-sceneLattice[ii][jj].xPoint<100&&sceneIronBarrelZombieVector[i].pointX-sceneLattice[ii][jj].xPoint>0)
                  {
                      sceneLattice[ii][jj].plantId=0;
                      sceneIronBarrelZombieVector[i].health=0;
                      QSound::play(woggieWav);
                  }
              }
                
            } 
        }
    }
}

void gameScene_1::potatoMinesDetect()
{
    for(int ii=0 ; ii<5 ; ii++)
    {
        for(int jj=0 ; jj<9 ; jj++)
        {
            if(sceneLattice[ii][jj].plantId==6&&sceneLattice[ii][jj].secondState)
            {
                for(int i=0 ; i<sceneBaseZombieVector.size() ;i++ )
                {
                    if(sceneBaseZombieVector[i].pointY==sceneLattice[ii][jj].yPoint&&
                       sceneBaseZombieVector[i].pointX-sceneLattice[ii][jj].xPoint<100&&sceneBaseZombieVector[i].pointX-sceneLattice[ii][jj].xPoint>0)
                    {
                        sceneLattice[ii][jj].plantId=0;
                        sceneBaseZombieVector[i].health=0;
                        QSound::play(potatoWav);
                    }
                }
                for(int i=0 ; i<sceneBarricadeZombieVector.size() ;i++ )
                {
                    if(sceneBarricadeZombieVector[i].pointY==sceneLattice[ii][jj].yPoint&&
                       sceneBarricadeZombieVector[i].pointX-sceneLattice[ii][jj].xPoint<100&&sceneBarricadeZombieVector[i].pointX-sceneLattice[ii][jj].xPoint>0)
                    {
                        sceneLattice[ii][jj].plantId=0;
                        sceneBarricadeZombieVector[i].health=0;
                        QSound::play(potatoWav);
                    }
                }
                for(int i=0 ; i<sceneIronBarrelZombieVector.size() ;i++ )
                {
                    if(sceneIronBarrelZombieVector[i].pointY==sceneLattice[ii][jj].yPoint&&
                       sceneIronBarrelZombieVector[i].pointX-sceneLattice[ii][jj].xPoint<100&&sceneIronBarrelZombieVector[i].pointX-sceneLattice[ii][jj].xPoint>0)
                    {
                        sceneLattice[ii][jj].plantId=0;
                        sceneIronBarrelZombieVector[i].health=0;
                        QSound::play(potatoWav);
                    }
                }
            }
        }
    }

}

void gameScene_1::lossDetect()
{
    for(int ii=0 ;ii<sceneBaseZombieVector.size() ; ii++)
    {
        if( sceneBaseZombieVector[ii].pointX<=100 )
        {
            isLose=true;
        }
    }
    for(int ii=0 ;ii<sceneBarricadeZombieVector.size() ; ii++)
    {
        if( sceneBarricadeZombieVector[ii].pointX<=100 )
        {
            isLose=true;
        }
    }
    for(int ii=0 ;ii<sceneIronBarrelZombieVector.size() ; ii++)
    {
        if( sceneIronBarrelZombieVector[ii].pointX<=100 )
        {
            isLose=true;
        }
    }
}

void gameScene_1::winDetect()
{
    if( timeCount>=gameScene1_overTime )
    {
        if(sceneBaseZombieVector.size()==0&&sceneBarricadeZombieVector.size()==0&&sceneIronBarrelZombieVector.size()==0)
        {
          isWin=true;
        }
    }
}

void gameScene_1::setTimeSlider()
{
    timeSlider.setOrientation(Qt::Horizontal);
    timeSlider.setParent(this);
    timeSlider.move(600,25);
    timeSlider.setFixedSize(200,20);
    timeSlider.setMinimum(0);
    timeSlider.setMaximum(gameScene1_overTime);
    timeSlider.setStyleSheet( "QSlider{"
                              "background-color: #D0D4D2;"
                              "color: red;"
                              "font: bold 20px;"
                              "border-radius: 10px;"
                              "border: 2px solid rgb(50, 50, 50);"
                              "border-style:outset;"
                              "border-radius:10px;"
                              "}");

}

void gameScene_1::playGame()
{
     myMap[165]=0; myMap[284]=1; myMap[403]=2; myMap[534]=3; myMap[657]=4;

    isLose=false;

    isWin=false;

    for(int ii=0 ; ii<5 ;ii++)
    {
        haveEnemy[ii]=false;
    }

    nowChoosePlant=0;

    timeCount=0;

    sunCost=0;

    sunCount=1000;

    background.load(gameScene_backGround);

    this->setFixedSize(1500,800);

    setTimeSlider();

    setStateTimer();

    palyMusic();

    setLattice();

    setButton();

    setPlantCard();

    setSunBank();

    setPainterTimer();

    setShovel();

    setZombies();
}



