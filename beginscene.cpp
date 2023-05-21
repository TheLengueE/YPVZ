#include "beginscene.h"
#include "ui_beginscene.h"

beginScene::beginScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::beginScene)
{
    player=new QMediaPlayer();    //没有这一行程序会出错，真是神奇
    player->setMedia(QUrl(beginSceneMusic));
    player->setVolume(1);
    player->play();
    setWindowsConfig();
    setButton();
}

void beginScene::paintEvent(QPaintEvent *event)
{
   QPainter painter(this);
   painter.drawPixmap(0,0,this->width(),this->height(),backGround_QPixmap);

}

void beginScene::setWindowsConfig()
{
    this->setFixedSize(1500,800);

    this->setWindowTitle("植物大战僵尸++");

    this->setWindowIcon(QIcon(beginScene_windowIcon));

    backGround_QPixmap.load(beginScene_backGround);
}

void beginScene::setButton()
{
    QPushButton *playGame=new QPushButton;     //开始游戏按钮
    QPushButton *colseWindow=new QPushButton;  //关闭按钮
//#2E3648;
    playGame->setStyleSheet(
                "QPushButton{"
                            "background-color: #2E3648;"               // 背景色
                            "color: white;"                            // 字体颜色
                            "font: bold 20px;"                         // 字体: 加粗 大小20
                            "border-radius: 10px;"                      // 边框圆角半径像素
                            "border: 2px solid rgb(50, 50, 50);"       // 边框样式：border-width border-style border-color
                            "border-style:outset;"                     // 定义一个3D突出边框，inset与之相反
                            "border-radius:10px;"                      //圆角
                            "}"
                            );

    colseWindow->setStyleSheet(
                "QPushButton{"
                            "background-color: #2E3648;"
                            "color: white;"
                            "font: bold 20px;"
                            "border-radius: 10px;"
                            "border: 2px solid rgb(50, 50, 50);"
                            "border-style:outset;"
                            "border-radius:10px;"
                            "}"
                            );

    playGame->setParent(this);
    colseWindow->setParent(this);

    playGame->setFixedSize(this->width()*0.133,this->height()*0.125);
    colseWindow->setFixedSize(this->width()*0.133,this->height()*0.125);

    playGame->setText("开始游戏");
    colseWindow->setText("退出游戏");

    playGame->move(this->width()*0.333,this->height()*0.844);
    colseWindow->move(this->width()*0.6,this->height()*0.844);


    connect(playGame,&QPushButton::clicked,[=]()
    {
        QSound::play(beginWav);


        //显示第一个场景
        gameScene_1 *gameScene=new gameScene_1;
        gameScene->show();
        this->hide();
        player->stop(); //停止音乐播放

        connect(&gameScene->backButton,&QPushButton::clicked,[=]()//给第一关场景中的返回按钮做连接
        {
            this->show();
            gameScene->close();
            player->play();     //继续播放音乐
        });

    });


    connect(colseWindow,&QPushButton::clicked,[=]()
    {
       this->close();
    });

}

beginScene::~beginScene()
{
    delete ui;
}
