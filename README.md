# MuseDash-Peaches
使用Arduino Micro和电容检测原理作为MuseDash的实体键盘
（也称为水果手台或者果元）

#### 简述
使用电容检测原理，可以将水果或一些导体作为实体按键，当人体触摸和电路连接的导体时，Arduino内的程序会计算电容值，如果大于一定阈值，就向PC发送按键按下的命令，当人体离开导体，电容小于一定阈值，就向PC发送释放按键的命令，这样就可以用来玩游戏了w

#### 视频
<https://www.bilibili.com/video/BV1Vz4y1D726>


<https://www.bilibili.com/video/BV1P5411Y7xu>

#### 目录
- [hardware](https://github.com/ciisaichan/MuseDash-Peaches/tree/master/hardware "hardware") - 硬件部分 PCB电路板，原理图工程文件 (Altium Designer格式)
- [software](https://github.com/ciisaichan/MuseDash-Peaches/tree/master/software "software") - 软件部分 单片机的Arduino源代码
- [old](https://github.com/ciisaichan/MuseDash-Peaches/tree/master/old "old") - 旧版源代码以及说明
- [images](https://github.com/ciisaichan/MuseDash-Peaches/tree/master/images "images") - 介绍用的图片资源

#### 制作方法
1. ##### 面包板棚搭
此方法制作简单成本低，也可以方便的修改电路，推荐萌新尝试，缺点是容易接触不良；电路连接方法见下方的原理图。
![面包板棚搭法](https://raw.githubusercontent.com/ciisaichan/MuseDash-Peaches/master/images/bread_board.jpg)

2. #### PCB 电路板
此方法制作的为成品，连接稳定，美观，缺点是制作难度较大，需要找PCB厂家定制，一旦出现问题需要重新打板，需要一定的焊接能力。
![PCB成品](https://raw.githubusercontent.com/ciisaichan/MuseDash-Peaches/master/images/IMG_20200711_163708.jpg)

电路连接原理图，左边连接到单片机的对应引脚，右边为各个触摸电极；其中名称为 NUP2105LT1G 的零件用于静电防护，为可选部件。
![原理图](https://raw.githubusercontent.com/ciisaichan/MuseDash-Peaches/master/images/musedash-peaches_sch.jpg)

#### 必要零件列表
| 名称 | 数量 |
| ---- | ---- |
| Arduino Pro Micro | 1 |
| 1MΩ（1兆欧）电阻 | 4 |
| 用来当按键的水果或者其他导体 | 4 |
| 勇于折腾的心w | 1 |

其他零件请根据制作方法自行采购。

#### 一些心里话
难得做这样一个感觉很开心的项目，受到大家的欢迎和支持，我做这样一个项目的目的就是制作出了另外一种游戏方式吧w，大家能够根据自己的脑洞再去修改电路做出更有趣的玩法，例如用这个设备多人玩音游，也希望有人能从中体会到DIY的乐趣，在这方面学习更多知识做出更多厉害的东西w

#### 参考项目
<https://github.com/jwktje/Arduino-Peaches>
