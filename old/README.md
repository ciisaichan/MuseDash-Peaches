# MuseDash-Peaches
使用Arduino Micro和电容检测原理作为MuseDash的实体键盘

#### 简述
使用电容检测原理，可以将水果或一些导体作为实体按键，将其映射到键盘的F和J按键，当人体触摸和电路连接的导体时，Arduino内的程序会计算电容值，如果大于一定阈值，就向PC发送按键按下的命令，当人体离开导体，电容小于一定阈值，就向PC发送释放按键的命令，这样就可以用来玩游戏了w

#### 视频
<https://www.bilibili.com/video/BV1P5411Y7xu>

#### 零件列表
| 名称 | 数量 |
| ---- | ---- |
| Arduino Pro Micro | 1 |
| 1MΩ（1兆欧）电阻 | 2 |
| 面包板 | 1 |
| 面包板跳线 | 若干 |
| 用来当按键的水果或者其他导体 | 2 |
| 勇于折腾的心w | 1 |

#### 实物连接图
![实物连接图](https://raw.githubusercontent.com/ciisaichan/MuseDash-Peaches/master/old/images/1.jpg)
#### 原理图
![原理图](https://raw.githubusercontent.com/ciisaichan/MuseDash-Peaches/master/old/images/2.jpg)

#### 参考项目
<https://github.com/jwktje/Arduino-Peaches>
