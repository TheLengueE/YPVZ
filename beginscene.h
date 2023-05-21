#ifndef BEGINSCENE_H
#define BEGINSCENE_H

#include <QWidget>
#include<QPainter>
#include<QPixmap>
#include<QPushButton>
#include<QDebug>
#include<QSound>
#include<QMediaPlayer>
#include<windows.h>
#include"gamescene_1.h"
#include"configuration.h"
#include"gamescene2.h"
namespace Ui
{
class beginScene;
}
class beginScene : public QWidget
{
    Q_OBJECT

public:
    explicit beginScene(QWidget *parent = 0);
    bool isFull;
    void paintEvent(QPaintEvent *event) override;      //重写绘图事件
    void setWindowsConfig();                           //初始化窗口的设置
    void setButton();                                  //设置按钮
    QPixmap  backGround_QPixmap;                       //背景图片
    QMediaPlayer *player;
    ~beginScene();

private:
    Ui::beginScene *ui;
};

#endif // BEGINSCENE_H
