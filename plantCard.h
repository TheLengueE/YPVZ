#ifndef PLANTCARD_H
#define PLANTCARD_H
#include<QPushButton>

class plantCard :public QPushButton
{
public:
    plantCard();
    int planId;
    int sunCost;
    int iceTime;
    bool isRead;
};

#endif // PLANTCATD_H
