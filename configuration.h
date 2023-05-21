#ifndef CONFIGURATION_H
#define CONFIGURATION_H
//开始场景处的配置
#define beginScene_backGround ":/beginScene/res_YPVZ/beginScene/msedge_TGhjJroFoo.png"  //开始场景的背景图片
#define beginScene_windowIcon ":/beginScene/res_YPVZ/beginScene/msedge_ne08V8mnDs.png"  //开始场景的窗口小图标

//音乐配置
#define beginSceneMusic "qrc:/sound/res_YPVZ/sound/beginSceneMusic.MP3" //url 开始场景的背景音乐
#define zombieComingMusic "qrc:/sound/res_YPVZ/sound/ZombieComing.MP3"  //url 僵尸来了的背景音乐
#define beginWav ":/sound/res_YPVZ/sound/begin.wav"                     //点击开始按钮会触发的音效
#define gameSceneMusice1 "qrc:/sound/res_YPVZ/sound/gameSceneMusic1.MP3"//游戏场景背景音乐
#define placePlantWav     ":/sound/res_YPVZ/sound/place.wav"               //种植物的声音
#define peaHit   ":/sound/res_YPVZ/sound/peaHit.wav"                      //豌豆打到僵尸的声音
#define eatPlant ":/sound/res_YPVZ/sound/Eat.wav"                        //僵尸吃植物声音
#define gameOver    "qrc:/sound/res_YPVZ/sound/ZombieComing.MP3"               //游戏结束
#define woggieWav   ":/sound/res_YPVZ/sound/woggie.wav"                       //倭瓜攻击
#define potatoWav   ":/sound/res_YPVZ/sound/Potato.wav"                       //土豆地雷爆炸
#define notEnoughSunWav ":/sound/res_YPVZ/sound/NotEnoughSun.wav"            //阳光不足
#define gameScene1_overTime 30000                                            //第一关游戏结束时间
#define getSun ":/sound/res_YPVZ/sound/sun.wav" //捡起阳光

//游戏场景配置
#define gameScene_backGround ":/gameScene/res_YPVZ/gameScene/background2.png"   //游戏场景背景图片
#define gameScene_plantBank  ":/gameScene/res_YPVZ/gameScene/plantBank.png"     //游戏场景植物边框图片
#define gameScene_sunBank    ":/gameScene/res_YPVZ/gameScene/sunBack.png"       //游戏场景阳光边框图片
#define gameScene_shavel     ":/gameScene/res_YPVZ/gameScene/Shovel.png"        //第一种铲子
#define gameScene_shavel2    ":/gameScene/res_YPVZ/gameScene/shovel2.png"       //第二种铲子
#define lose         ":/gameScene/res_YPVZ/gameScene/ZombiesWon.png"      //僵尸进村了图片
#define win      ":/gameScene/res_YPVZ/gameScene/msedge_wsJv4ld1Jl.png"  //游戏胜利图片

//植物配置
#define sunFlower_sunCost 50;              //向日葵阳光花费
#define sunFlower_plantId 1;               //向日葵ID数字
#define sunFlower_iceTime 100000;          //向日葵冷却时间
#define sunFlower_everyActivityTime 10000; //向日葵每次活动时间
#define sunFlower_health 50;              //向日葵生命值
#define sunFlower_pix ":/plant/res_YPVZ/plants/SunFlower.gif"     //向日葵的pix路径

#define peaShoot_sunCost 100;            //豌豆射手
#define peaShoot_plantId 2;
#define peaShoot_iceTime 50000;
#define peaShoot_everyActivityTime 2000;
#define peaShoot_health 50;
#define peaShoot_pix ":/plant/res_YPVZ/plants/Peashooter.gif"

#define doublePeaShoot_sunCost 200;      //双枪豌豆射手
#define doublePeaShoot_plantId 3;
#define doublePeaShoot_iceTime 50000;
#define doublePeaShoot_everyActivityTime 2000;
#define doublePeaShoot_health 50;
#define doublePeaShoot_pix ":/plant/res_YPVZ/plants/Repeater.gif"

#define icePeaShoot_sunCost 175;         //寒冰豌豆射手
#define icePeaShoot_plantId 4;
#define icePeaShoot_iceTime 50000;
#define icePeaShoot_everyActivityTime 2000;
#define icePeaShoot_health 50;
#define icePeaShoot_pix ":/plant/res_YPVZ/plants/IcePeaShooter.gif"

#define machineGun_sunCost 400;         //机器豌豆射手
#define machineGun_plantId 5;
#define machineGun_iceTime 10000;
#define machieGun_everyActivityTime 2000;
#define machineGun_health 50;
#define machineGun_pix ":/plant/res_YPVZ/plants/GatlingPea.gif"

#define potatoMines_sunCost 25;         //土豆地雷
#define potatoMines_plantId 6;
#define potatoMines_iceTime 100000;
#define potatoMines_everyActivityTime 10000;
#define potatoMines_health 50;
#define potatoMines_pix ":/plant/res_YPVZ/plants/PotatoMine_1.gif"
#define potatoMines_pix2 ":/plant/res_YPVZ/plants/PotatoMine.gif"


#define woggie_sunCost 50;             //倭瓜
#define woggie_plantId 7;
#define woggie_iceTime 100000;
#define woggie_everyActivityTime 10000;
#define woggie_health 50;
#define woggie_pix ":/plant/res_YPVZ/plants/squash1.gif"
#define woggie_pix2 ":/plant/res_YPVZ/plants/squash2.gif"

#define fireTree_sunCost 175;          //火炬树
#define fireTree_plantId 8;
#define fireTree_iceTime 50000;
#define fireTree_everyActivityTime 10000;
#define fireTree_health 50;
#define fireTree_pix ":/plant/res_YPVZ/plants/fireTree.gif"

#define nut_sunCost 50;                //坚果
#define nut_plantId 9;
#define nut_iceTime 100000;
#define nut_everyActivityTime 10000;
#define nut_health 500;
#define nut_pix ":/plant/res_YPVZ/plants/WallNut.gif"

//植物卡片配置
#define sunFlowerCard ":/plantCard/res_YPVZ/plantCard/SunFlower.png"     //向日葵卡片
#define peaShootCard  ":/plantCard/res_YPVZ/plantCard/Peashooter.png"    //豌豆射手卡片
#define doublePeaShootCard ":/plantCard/res_YPVZ/plantCard/Repeater.png" //双子射手
#define icePeaShootCard ":/plantCard/res_YPVZ/plantCard/SnowPea.png"     //寒冰射手
#define fireTreeCard ":/plantCard/res_YPVZ/plantCard/Torchwood.png"      //火炬树
#define nutCard ":/plantCard/res_YPVZ/plantCard/WallNut.png"         //坚果
#define woggieCard ":/plantCard/res_YPVZ/plantCard/Squash.png"           //倭瓜
#define machineGunCard ":/plantCard/res_YPVZ/plantCard/GatlingPea.png"   //机枪射手
#define potatoMinesCard ":/plantCard/res_YPVZ/plantCard/PotatoMine.png"//土豆地雷

//植物生成物配置
#define sun_pix ":/fly/res_YPVZ/flys/Sun.gif"        //太阳
#define sun_everySunAdd 25                           //每个太阳增加的阳光数量
#define pea_pix ":/fly/res_YPVZ/flys/Pea.gif"        //豌豆
#define pea_speed 50;                                 //豌豆飞行速度
#define pea_attack 13;                                //每个豌豆的伤害
#define icePea_pix ":/fly/res_YPVZ/flys/PeaIce.gif"  //寒冰豌豆
#define icePea_speed 50;                              //寒冰豌豆飞行速度
#define icePea_attack 13;                              //寒冰豌豆伤害
#define firePea_pix ":/fly/res_YPVZ/flys/PeaFire.gif"// 火焰豌豆
#define firePea_speed 50;                             //火焰豌豆
#define firePea_attack 26;                             //火焰豌豆伤害

//僵尸配置
#define baseZombie_walk         ":/zombies/res_YPVZ/zombies/Zombie.gif"//普通僵尸走路
#define baseZombie_attack       ":/zombies/res_YPVZ/zombies/ZombieAttack.gif"//普通僵尸攻击
#define baseZombie_health 50;                                                 //普通僵尸生命值
#define baseZombie_attackNumber 5;                                                 //普通僵尸攻击力
#define baseZombie_speed  2;                                                 //普通僵尸移动速度

#define barricadeZombies_walk   ":/zombies/res_YPVZ/zombies/ConeheadZombie.gif"//路障僵尸走路
#define barricadeZombies_attack ":/zombies/res_YPVZ/zombies/ConeheadZombieAttack.gif"//路障僵尸攻击
#define barricadeZombies_health 100;                                             //路障僵尸生命值
#define barricadeZombies_attackNumber 5;                                               //路障僵尸攻击力
#define barricadeZombies_speed 2;

#define ironBarrelZombie_walk   ":/zombies/res_YPVZ/zombies/BucketheadZombie.gif"      //铁桶僵尸走路
#define ironBarrelZombie_attack ":/zombies/res_YPVZ/zombies/BucketheadZombieAttack.gif"//铁桶僵尸攻击
#define ironBarrelZombie_health 200;                                                    //铁桶僵尸生命值
#define ironBarrelZombie_attackNumber 10;                                               //铁桶僵尸攻击力
#define ironBarrelZombie_speed 2;
#endif // CONFIGURATION_H
