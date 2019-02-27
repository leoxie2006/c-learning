//这是修改版
#include <bits/stdc++.h>//万能头文件
#include <windows.h>
#include <iostream>
#include "time.h"
#include "stdlib.h"
using namespace std;
int main()
{
/*printf("\
绝地武士V1.5\n\
\n\
原作者：Steven.S\n\n");
Sleep(1000);
printf("升级：伟大的cyka blyat!\n\n");
Sleep(1000);
printf("升级内容：将密码改为五个0到9的随机数字，并且打怪成功可概率获得密码提示！\n\n\n");
Sleep(2000);
system("color 0E");//先用黑底黄字
Sleep (1000);
printf(" 很久以前，在一个遥远的星系。\n\n");
Sleep (1500);
printf(" 绝地武士，你受命潜伏在死星中。\n\n");
Sleep (1500);
printf(" 为了摧毁帝国，重振共和国。\n\n");
Sleep (1500);
printf(" 你必须打败守卫死星核心的护卫来找到死星自爆密码。\n\n"
" 但是若中途碰到维达，你会被用原力掐死。\n\n"
" 虽然之后你必须面对达斯维达和帕尔帕廷");
Sleep (4500);
printf(" 一天，欧比旺卡诺比的绝地灵魂告诉你：\n\n"
" “和平只是短暂的，终有一日帝国会狂怒起来，\n\n"
" 毁灭整个星系。你时间有限”\n\n");
Sleep(4500);
printf(" 你睁开了眼睛···\n\n");
Sleep(1500);*/
for(int i=1;i<=25;i++)
{
printf("\n");
Sleep(250);
}
Sleep(1000);
char mz[11];//十个字符
char jiaochen ,mxp,mx,ms,shop,pl,gl1,gl2,gl3,gl4,g15,gd;
int sj,xue1,xue2,xue3,xue4,xue5,xue6,xue7,xue8,xue9,xue10,gj=15,xue=200,s2,db,bd1,dbm,gl,dj=0;
srand(time(NULL));
int a11,a22,a33,a44,a55,o,p,q,r,s;
a11= rand()%10;
a22= rand()%10;
a33= rand()%10;
a44= rand()%10;
a55= rand()%10;
long long s1,money=1000000000000;
system("color C0");
Sleep(250);
system("color F0");
Sleep(250);
system("color E0");
Sleep(250);
system("color B0");
Sleep(250);
system("color 70");
Sleep(250);
printf("绝地武士之名（请输入）：");
cin>>mz;
printf("是否需要教程？（Y or N）\n");
cin>>jiaochen;
if( (jiaochen != 'Y'&&jiaochen!='y') && (jiaochen != 'N'&&jiaochen!='n') )//输入错误
{
cout<<"乱输的不忠于共和国。"<<endl;
}
if((jiaochen=='Y')||(jiaochen=='y'))//教程
{
printf("亲爱的%s：\n若输1，则进入通向死星核心的通道。\n若输2，则进入绝地商店。\n若输3，则进入绝地修炼室。\n刚进入时有100元，好好利用它吧！\n没钱就进入通向死星核心的通道赚钱吧！更多玩法等待你发现...\n", mz);
}//教程完
while(1)//主程序
{
loop:
printf("\n\n1--通向死星核心的通道。 2--绝地商店 3--绝地修炼室（查看自己属性） 4--死星酒吧（ 赌博） 5--进入控制室");
cin>>ms;
if(ms=='1')
{
printf(" E--退出\n 1--暴风兵\n 2--暴风兵update\n 3--2代暴风兵\n 4--3代暴风兵\n 5--4代暴风兵\n 6--维达护卫\n 7--帕尔帕廷护卫\n 8--波巴菲特\n 9--维达\n A--帕尔帕廷的愤怒\n");
cin>>mx;
if(mx=='E'||mx=='e'){goto loop;}
if(mx == '1')
{//1
xue1=50;
while(xue1>0)
{
printf("暴风兵用手枪打你，是否逃跑？(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"逃跑成功！"<<endl;break;}else{xue-=10;printf("逃跑失败！你被扣了10滴血，剩%d滴血。\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue1-=gj;xue-=10;
printf("你被扣了10滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue1);
}
if(xue <= 0){printf("维达来了！");Sleep(10000000);return 0;}
}
if(xue1 <= 0){money+=30;dj+=25;printf("你赢了！加30元，25经验，现有%.2f元，%d经验", money,dj);}
}//1完
if(mx == '2')
{//2
xue2=100;
while(xue2>0)
{
printf("暴风兵用手枪打你，是否逃跑？(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"逃跑成功！"<<endl;break;}else{xue-=20;printf("逃跑失败！你被扣了20滴血，剩%d滴血。\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue2-=gj;xue-=20;
printf("你被扣了20滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue2);
}
if(xue <= 0){printf("维达来了！");Sleep(10000000); return 0;}
}
if(xue2 <= 0){money+=60;dj+=50;printf("你赢了！加60元，50经验，现有%.2f元,%d经验", money,dj);}
}//2完
if(mx == '3')
{//3
xue3=200;
while(xue3>0)
{
printf("暴风兵用步枪打你，是否逃跑？(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"逃跑成功！"<<endl;break;}else{xue-=40;printf("逃跑失败！你被扣了40滴血，剩%d滴血。\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue3-=gj;xue-=40;
printf("你被扣了40滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue3);
}
if(xue <= 0){printf("维达来了！"); Sleep(10000000);return 0;}
}
if(xue3 <= 0){money+=120;dj+=100;printf("你赢了！加120元，100经验现有%.2f元,%d经验", money,dj);}
}//3完
if(mx == '4')
{//4
xue4=400;
while(xue4>0)
{
printf("暴风兵用爆能手枪打你，是否逃跑？(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"逃跑成功！"<<endl;break;}else{xue-=80;printf("逃跑失败！你被扣了80滴血，剩%d滴血。\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue4-=gj;xue-=80;
printf("你被扣了40滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue4);
}
if(xue <= 0){printf("维达来了！");Sleep(10000000); return 0;}
}
if(xue4 <= 0){money+=240;dj+=200;printf("你赢了！加240元，200经验,现有%.2f元,%d经验", money,dj);}
}//4完
if(mx == '5')
{//5
xue5=800;
while(xue5>0)
{
printf("暴风兵用爆能步枪打你，是否逃跑？(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"逃跑成功！"<<endl;break;}else{xue-=160;printf("逃跑失败！你被扣了160滴血，剩%d滴血。\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue5-=gj;xue-=160;
printf("你被扣了160滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue5);
}
if(xue <= 0){printf("维达来了！"); Sleep(10000000);return 0;}
}
if(xue5 <= 0){money+=480;dj+=400;printf("你赢了！加480元，400经验,现有%.2f元,%d经验", money,dj);}
}//5完
if(mx == '6')
{//6
xue6=800;
while(xue6>0)
{
printf("敌人冲了过来，是否逃跑？(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"逃跑成功！"<<endl;break;}else{xue-=320;printf("逃跑失败！你被扣了320滴血，剩%d滴血。\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue6-=gj;xue-=320;
printf("你被扣了320滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue6);
}
if(xue <= 0){printf("维达来了！");Sleep(10000000); return 0;}
}
if(xue6 <= 0){
money+=960;dj+=800;printf("你赢了！加960元，800经验,现有%.2f元,%d经验", money,dj);
o=rand()%25;
if(o<=10)
{
printf("恭喜你踩了狗屎运，获得密码提示——第一个数字是%d",a11);
}
}
}//6完
if(mx == '7')
{//7
xue7=1600;
while(xue7>0)
{
printf("红衣人用光剑砍你，是否逃跑？(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"逃跑成功！"<<endl;break;}else{xue-=640;printf("逃跑失败！你被扣了640滴血，剩%d滴血。\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue7-=gj;xue-=640;
printf("你被扣了640滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue7);
}
if(xue <= 0){printf("维达来了！");Sleep(10000000); return 0;}
}
if(xue7 <= 0){
money+=1980;dj+=1600;printf("你赢了！加1980元，1600经验,现有%.2f元,%d经验", money,dj);
p=rand()%25;
if(p<=8)
{
printf("恭喜你踩了狗屎运，获得密码提示——第二个数字是%d",a22);
}
}
}//7完
if(mx == '8')
{//8
xue8=3200;
while(xue8>0)
{
printf("波巴菲特发射火箭炮，是否逃跑？(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"逃跑成功！"<<endl;break;}else{xue-=1280;printf("逃跑失败！你被扣了1280滴血，剩%d滴血。\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue8-=gj;xue-=1280;
printf("你被扣了1280滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue8);
}
if(xue <= 0){printf("维达来了！");Sleep(10000000); return 0;}
}
if(xue8 <= 0){
money+=3960;dj+=3200;printf("你赢了！加3960元，3200经验,现有%.2f元,%d经验", money,dj);
q=rand()%25;
if(q<=6)
{
printf("恭喜你踩了狗屎运，获得密码提示——第三个数字是%d",a33);
}
}
}//8完
if(mx == '9')
{//9
xue9=6400;
while(xue9>0)
{
printf("维达来了，是否逃跑？(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"逃跑成功！"<<endl;break;}else{xue-=2560;printf("逃跑失败！你被扣了2560滴血，剩%d滴血。\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue9-=gj;xue-=2560;
printf("你被扣了2560滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue9);
}
if(xue <= 0){printf("维达杀了你！");Sleep(10000000); return 0;}
}
if(xue9 <= 0){
money+=7980;dj+=6400;printf("维达被斩！加7980元，6400经验,现有%.2f元%d经验", money,dj);
r=rand()%25;
if(r<=5)
{
printf("恭喜你踩了狗屎运，获得密码提示——第四个数字是%d",a44);
}
}
}//9完
if(mx == 'a'||mx=='A' )
{//10
xue10=12800;
while(xue10>0)
{
printf("帕尔帕廷用原力闪电打你，是否逃跑？(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"逃跑成功！"<<endl;break;}else{xue-=5120;printf("逃跑失败！你被扣了5120滴血，剩%d滴血。\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue10-=gj;xue-=5120;
printf("你被扣了5120滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue10);
}
if(xue <= 0){printf("任务失败");Sleep(10000000); return 0;}
}
if(xue10 <= 0){/*Sleep(2500);system("color C0");
Sleep(250);
system("color F0");
Sleep(250);
system("color E0");
Sleep(250);
system("color B0");
Sleep(250);
system("color 70");*/
Sleep(250);money+=15960;dj+=12800;printf("帕尔帕廷被斩！加15960元，12800经验,现有%.2f元,%d经验z！\n ", money,dj);
s=rand()%25;
if(s<=22)
{
printf("恭喜你踩了狗屎运，获得密码提示——第五个数字是%d",a55);
}}
}
}
if(ms=='2')
{
printf("\n E--退出\n 1--原力药水I(加20攻击力)--40元\n 2--塔图因酒II(加40攻击力)--80元\n 3--绝地原食III(加80攻击力)--160元\n 4--早餐饼I(加160滴血)--40元\n 5--奥利奥II(加320滴血)--80元\n 6--狗粮III(加640滴血)--160元\n 7--批量购买\n若金钱不足自动跳出");
cin>>shop;
if( (shop == '1') && (money >= 40) ){ gj += 20; money-=40; printf("\n\n成功！你有%d点攻击,%.2f元\n" ,gj,money); }//1
if( (shop == '2') && (money >= 80) ){ gj += 40; money-=80; printf("\n\n成功！你有%d点攻击,%.2f元\n" ,gj,money); }//2
if( (shop == '3') && (money >= 160) ){ gj += 80; money-=160; printf("\n\n成功！你有%d点攻击,%.2f元\n" ,gj,money); }//3
if( (shop == '4') && (money >= 40) ){ xue += 160; money-=40; printf("\n\n成功！你有%d滴血,%.2f元\n" ,xue,money); }//4
if( (shop == '5') && (money >= 80) ){ xue += 320; money-=80; printf("\n\n成功！你有%d滴血,%.2f元\n" ,xue,money); }//5
if( (shop == '6') && (money >= 160) ){ xue += 640; money-=160; printf("\n\n成功！你有%d滴血,%.2f元\n" ,xue,money); }//6
if(shop=='e'||shop=='E')goto loop;
if( shop == '7')
{//7
printf("\n E--退出\n 1--力量型药水\n 2--治疗型药水");
cin>>pl;
if(pl=='e'||pl=='E')goto loop;
if(pl == '1')
{
printf("请输入要加的攻击力：");cin>>s2;
s1 = s2/20.00*40;if(money >= s1){gj+=s2;money-=s1;printf("\n\n成功！你有%d点攻击,%.2f元\n" ,gj,money);}
}
if(pl == '2')
{
printf("请输入要加的血：");cin>>s2;
s1 = s2/160.00*40;if(money >= s1){xue+=s2;money-=s1;printf("\n\n成功！你有%d滴血,%.2f元\n" ,xue,money);}
}
}//7完
}//商店完
if(ms=='3')//状态显示模式
{
printf("\n你有%d滴血，%d点攻击，%.2f元。\n" ,xue,gj,money);
}//状态显示模式
if( (ms!='1') && (ms!='2') && (ms!='3') &&(ms!='4')&&(ms!='5'))
{
cout<<"\n乱输的不忠于共和国。";
}
if(ms=='4')
{
printf("\n惊心动魂的时刻来了，请输入尤达的幸运数字：");cin>>db;
printf("\n请输入你的赌注：");cin>>dbm;
srand((unsigned)time(NULL));bd1 = rand();
if( bd1 % 2 == dbm % 2 && money >= dbm){printf("\n你赢了！加赌注的1.5倍！");money = money+0.5*dbm;}
if( bd1 % 2 != dbm % 2 && money >= dbm){printf("\n你输了！减去赌注！");money-=dbm;}
}
if(ms=='5')
{
gly:
printf("\n (EEEEE--退出) 请输入密码(五个数字，要有空格)：");cin>>gl1>>gl2>>gl3>>gl4>>g15;
if((gl1=='E'&&gl2=='E'&&gl3=='E'&&gl4=='E'&&g15=='E')||(gl1=='e'&&gl2=='e'&&gl3=='e'&&gl4=='e'&&g15=='e'))goto loop;
if(gl1==a11&&gl2==a22&&gl3==a33&&gl4==a44&&g15==a55)
{Sleep(250);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
system("color F0");
Sleep(300);
system("color E0");
Sleep(300);
system("color B0");
Sleep(300);
system("color 70");
Sleep(2500);
system("cls");g1:
printf("\n 成功！\n 你顺利完成了任务\n共和国为你骄傲\n制作人Steven.S\n copyrite2018,all write reserved\n game over",xue,gj,money);cin>>gd;
if(gd=='1')goto gd1;
if(gd=='2')goto gd2;
if(gd=='3')goto gd3;
}
else{system("cls");printf("\n错误！维达来了，快跑\n");goto gly;}
}
}//主程序完 1221
gd1:
printf("请输入血：");cin>>gl;xue=gl;goto g1;
gd2:
printf("请输入攻击：");cin>>gl;gj=gl;goto g1;
gd3:
printf("请输入金钱：");cin>>gl;money=gl;goto g1;
return 0;}


