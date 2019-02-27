#include<bits/stdc++.h>
using namespace std;
int money=100,zy,x;
double sm=1500,gj=60;
int main()
{
cout<<endl<<"未知的冒险"<<endl<<endl; 
cout<<"--------------------------------";
cout<<endl<<"请选择你的职业"<<endl;
cout<<"剑客 请输入1 技能：三回合双倍伤害（职业和技能暂未开发）"<<endl; 
cin>>zy;
switch(zy)
{
case 1:
cout<<"欢迎来到未知的冒险"<<endl;
open1:
{
while(sm>=0)
{
cout<<"你的生命值："<<sm<<endl;
cout<<"你的金钱："<<money<<endl;
cout<<"你的攻击力："<<gj<<endl<<endl;
cout<<"继续冒险 请输入0"<<endl; 
cout<<"购买装备 请输入1"<<endl;
cout<<"购买符咒 请输入2"<<endl;
cout<<"退出游戏 请输入3"<<endl;
cin>>x;
switch(x)
{
case 0:goto sjmx;
case 1:goto gmzb;
case 2:goto gmfz;
case 3:return 0;
}
}
}
gmfz:
{
int a2;
cout<<"欢迎来到符咒售卖的小店"<<endl;
cout<<"狂暴符咒1级（攻击力增加20%）15元 请输入1"<<endl;
cout<<"狂暴符咒2级（攻击力增加50%）30元 请输入2"<<endl; 
cout<<"狂暴符咒3级（攻击力增加10%）50元 请输入3"<<endl;
cout<<"magic符咒1级（生命增加20%）10元 请输入4"<<endl; 
cout<<"magic符咒2级（生命增加50%）20元 请输入5"<<endl;
cout<<"magic符咒3级（生命增加10%）35元 请输入6"<<endl; 
cout<<"离开商店 请输入7"<<endl;
cin>>a2;
switch(a2)
{
case 1:
{
if(money-15>=0) 
{
cout<<"购买成功！"<<endl;
money-=15;
gj*=1.2; 
}
else cout<<"购买失败！你没钱！"<<endl;
goto gmfz;
}
case 2:
{
if(money-30>=0) 
{
cout<<"购买成功！"<<endl;
money-=30;
gj*=1.5; 
}
else cout<<"购买失败！你没钱！"<<endl;
goto gmfz;
}

case 3:
{
if(money-50>=0) 
{
cout<<"购买成功！"<<endl;
money-=50;
gj*=1.1; 
}
else cout<<"购买失败！你没钱！"<<endl;
goto gmfz;
}
case 4:
{
if(money-10>=0) 
{
cout<<"购买成功！"<<endl;
money-=10;
sm*=1.02; 
}
else cout<<"购买失败！你没钱！"<<endl;
goto gmfz;
}
case 5:
{
if(money-20>=0) 
{
cout<<"购买成功！"<<endl;
money-=20;
sm*=1.05; 
}
else cout<<"购买失败！你没钱！"<<endl;
goto gmfz;
} 
case 6:
{
if(money-35>=0) 
{
cout<<"购买成功！"<<endl;
money-=35;
sm*=1.1; 
}
else cout<<"购买失败！你没钱！"<<endl;
goto gmfz;
} 
case 7: 
{
goto open1;
}
default: 
{
cout<<"你手贱了"<<endl;
goto gmfz;
} 
}
}
gmzb:
{
int a1;
cout<<"欢迎来到装备售卖的小店"<<endl;
cout<<"短剑（攻击力200）20元 请输入1"<<endl;
cout<<"长剑（攻击力500）40元 请输入2"<<endl; 
cout<<"步枪（攻击力800）70元 请输入3"<<endl;
cout<<"狙击枪（攻击力1200）100元 请输入4"<<endl; 
cout<<"小木盾（生命增加200）40元 请输入5"<<endl;
cout<<"小钢盾（生命增加1000）15元 请输入6"<<endl; 
cout<<"离开商店 请输入7"<<endl;
cin>>a1;
switch(a1)
{
case 1:
{
if(money-20>=0) 
{
cout<<"购买成功！"<<endl;
money-=20;
gj+=200; 
}
else cout<<"购买失败！你没钱！"<<endl;
goto gmzb;
}
case 2:
{
if(money-40>=0) 
{
cout<<"购买成功！"<<endl;
money-=40;
gj+=500; 
}
else cout<<"购买失败！你没钱！"<<endl;
goto gmzb;
}
case 3:
{
if(money-70>=0) 
{
cout<<"购买成功！"<<endl;
money-=70;
gj+=800; 
}
else cout<<"购买失败！你没钱！"<<endl;
goto gmzb;
}
case 4:
{
if(money-100>=0) 
{
cout<<"购买成功！"<<endl;
money-=100;
gj+=1200; 
}
else cout<<"购买失败！你没钱！"<<endl;
goto gmzb;
}
case 5:
{
if(money-40>=0) 
{
cout<<"购买成功！"<<endl;
money-=40;
sm+=2000; 
}
else cout<<"购买失败！你没钱！"<<endl;
goto gmzb;
} 
case 6:
{
if(money-15>=0) 
{
cout<<"购买成功！"<<endl;
money-=15;
sm+=1000; 
}
else cout<<"购买失败！你没钱！"<<endl;
goto gmzb;
} 
case 7: 
{
goto open1;
}
default: 
{
cout<<"你手贱了"<<endl;
goto gmzb;
} 
}
}
sjmx:
{
int sj;
srand((unsigned)time(NULL));
sj=rand()%12+1;
switch(sj)
{
case 1:goto smsr;
case 2:goto dxg;
case 3:goto dxg;
case 4:goto smsr;
case 5:goto dxg;
case 6:goto smsr; 
case 7:goto dxg;
case 8:goto dxg; 
case 9:goto smsr;
case 10:goto ddg;
case 11:goto smsr;
case 12:goto dxg; 
}
}
smsr:
{
int a;
cout<<"欢迎来到神秘商人的小店"<<endl;
cout<<"火箭炮(攻击力2000) 100元 请输入1"<<endl;
cout<<"小手枪（攻击力400）25元 请输入2"<<endl; 
cout<<"狂暴符咒4级（攻击增加200%）70元 请输入3"<<endl;
cout<<"magic符咒4级（生命值增加200%）50元 请输入4"<<endl; 
cout<<"血瓶（回复100滴血） 20元 请输入5"<<endl;
cout<<"离开商店 请输入6"<<endl;
cin>>a;
switch(a)
{
case 1:
{
if(money-100>=0) 
{
cout<<"购买成功！"<<endl;
money-=100;
gj+=2000; 
}
else cout<<"购买失败！你没钱！"<<endl;
goto smsr;
}
case 2:
{
if(money-25>=0) 
{
cout<<"购买成功！"<<endl;
money-=25;
gj+=400; 
}
else cout<<"购买失败！你没钱！"<<endl;
goto smsr;
}
case 3:
{
if(money-70>=0) 
{
cout<<"购买成功！"<<endl;
money-=70;
gj*=12; 
}
else cout<<"购买失败！你没钱！"<<endl;
goto smsr;
}
case 4:
{
if(money-50>=0) 
{
cout<<"购买成功！"<<endl;
money-=50;
sm*=12; 
}
else cout<<"购买失败！你没钱！"<<endl;
goto smsr;
}
case 5:
{
if(money-20>=0) 
{
cout<<"购买成功！"<<endl;
money-=20;
sm+=1000; 
}
else cout<<"购买失败！你没钱！"<<endl;
goto smsr;
} 
case 6: 
{
goto open1;
}
default: 
{
cout<<"你手贱了"<<endl;
goto smsr;
} 
} 
} 
dxg:
{
int i1,sh1,gs,hhs=1;
srand((unsigned)time(NULL));
gs=rand()%3+1;
cout<<"有"<<gs<<"只小怪"<<endl; 
int gx[gs];
int gg[gs];
for(i1=1;i1<=gs;i1++)
{
srand((unsigned)time(NULL));
gx[i1]=80+rand()%40+1;

while(gx[i1]>=0)
{
cout<<"第"<<hhs<<"回合"<<endl;
cout<<"你的血量："<<sm<<endl;
cout<<"第"<<i1<<"只小怪的血量："<<gx[i1]<<endl<<endl<<endl;
srand((unsigned)time(NULL));
gg[i1]=30+rand()%30+1;
srand((unsigned)time(NULL));
sh1=gj-60+rand()%60+1;
gx[i1]-=sh1;
if(gx[i1]<=0)
{
srand((unsigned)time(NULL));
money+=20+rand()%30+1;
cout<<"第"<<i1<<"只小怪已死亡"<<endl;
if(i1==gs) goto open1;
break; 
}
sm-=gg[i1];
if(sm<=0)
{
cout<<"丁泰廷死了"<<endl;
return 0; 
}
hhs++;
}
}
}
ddg:
{
int dgx,dgg,sh2;
srand((unsigned)time(NULL));
dgx=rand()%5000+1;

while(dgx>=0)
{
cout<<"Boss的血量："<<dgx<<endl;
cout<<"你的血量："<<sm<<endl;
srand((unsigned)time(NULL));
sh2=gj-60+rand()%60+1;
dgx-=sh2;
if(dgx<=0)
{
srand((unsigned)time(NULL));
money+=400+rand()%1200+1;
cout<<"Boss被你干掉了"<<endl;
goto open1;
}
srand((unsigned)time(NULL));
dgg=300+rand()%500+1;
sm-=dgg;
if(sm<=0)
{
cout<<"丁泰廷死了"<<endl;
return 0;
}
}
}	
} 
return 0;
}
