#include <bits/stdc++.h>
#include <windows.h>
#include <iostream>
using namespace std;
int main() {
	cout<<"\n你好"; 
	system("color f0");//先用黑底白字，顺眼
	printf("\
神奇宝贝\n\
n\
著作者：朱逸轩\n\n");
	Sleep (1000);
	printf("很久以前，有一对兄弟--小火和小水。他们一直以神奇宝贝大师为目标，不断进行战斗。\n\n");
	Sleep (1000);
	printf("但水火不容，他们慢慢积下了对互相的仇恨。\n\n");
	Sleep (1000);
	printf("不久，一场大战便引发了。\n\n");
	Sleep (1000);
	printf("大战了三天三夜，三百万个回合。终于，小水的盖欧卡被小火用固拉多封印在火山底。\n\n");
	Sleep (1000);
	printf("一天，固拉多用最后一点神力，从梦中告诉你：\n\
“和平只是短暂的，终有一日盖欧卡会苏醒过来。”\n\n\
说罢，便将神奇宝贝球交给了你。\n\n");
	Sleep(1000);
	printf("一场新的故事拉开了序幕...\n\n");
	Sleep(1000);
	char mz[11];//十个字符
	char jiaochen ,mxp,mx,ms,shop,pl,gl1,gl2,gl3,gl4,gd;
	long long sj,xue1,xue2,xue3,xue4,xue5,xue6,xue7,xue8,xue9,xue10,gj=15,xue=200,s2,db,bd1,dbm,gl,dj=0;
	float s1,money=100;
	printf(" 你的名字：");
	cin>>mz;
	printf("是否需要教程？（Y or N）\n");
	cin>>jiaochen;
	if( (jiaochen != 'Y'&&jiaochen!='y') && (jiaochen != 'N'&&jiaochen!='n') ) { //输入错误
		cout<<"乱输！"<<endl;
	}
	if((jiaochen=='Y')||(jiaochen=='y')) { //教程
		printf("亲爱的%s：\n若输1，则进入冒险模式。\n若输2，则进入商店模式。\n若输3，则进入状态显示模式。\n刚进入时有100元，好好利用他吧！\n没钱就进入冒险模式打怪赚钱吧！更多玩法等待你发现...\n", mz);
	}//教程完
	while(1) { //主程序
loop:
		printf("\n\n1--冒险模式 2--商店模式 3--状态显示模式 4--赌博模式 5--管理模式");
		cin>>ms;
		if(ms=='1') { //冒险模式
			printf(" E--退出\n 1--皮神的试炼\n 2--获得传说神兽皮卡丘\n 3--招唤固拉多\n 4--获得胡帕\n 5--胡帕（被解放）\n 6--mage暴走皮神\n 7--获得全部传说神兽\n 8--盖欧卡解开封印\n 9--神兽合体mage阿尔宙斯x,y&z\n A--决战超进化mage盖欧卡x,y&z\n");
			cin>>mx;
			if(mx=='E'||mx=='e') {
				goto loop;
			}
			if(mx == '1') {
				//1
				xue1=50;
				while(xue1>0) {
					printf("皮神冲了过来，是否逃跑？(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"逃跑成功！"<<endl;
							break;
						} else {
							xue-=10;
							printf("逃跑失败！你被扣了10滴血，剩%d滴血。\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue1-=gj;
						xue-=10;
						printf("你的神奇宝贝被扣了10滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue1);
					}
					if(xue <= 0) {
						printf("你的神奇宝贝失去了战斗能力！");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue1 <= 0) {
					money+=30;
					dj+=25;
					printf("你赢了！加30元，25经验，现有%.2f元，%d经验", money,dj);
				}
			}//1完
			if(mx == '2') {
				//2
				xue2=100;
				while(xue2>0) {
					printf("皮卡丘冲了过来，是否逃跑？(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"逃跑成功！"<<endl;
							break;
						} else {
							xue-=20;
							printf("逃跑失败！你被扣了20滴血，剩%d滴血。\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue2-=gj;
						xue-=20;
						printf("你的神奇宝贝被扣了20滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue2);
					}
					if(xue <= 0) {
						printf("你的神奇宝贝失去了战斗能力！");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue2 <= 0) {
					money+=60;
					dj+=50;
					printf("你赢了！加60元，50经验，现有%.2f元,%d经验", money,dj);
				}
			}//2完
			if(mx == '3') {
				//3
				xue3=200;
				while(xue3>0) {
					printf("固拉多冲了过来，是否逃跑？(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"逃跑成功！"<<endl;
							break;
						} else {
							xue-=40;
							printf("逃跑失败！你被扣了40滴血，剩%d滴血。\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue3-=gj;
						xue-=40;
						printf("你的神奇宝贝被扣了40滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue3);
					}
					if(xue <= 0) {
						printf("你的神奇宝贝失去了战斗能力！");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue3 <= 0) {
					money+=120;
					dj+=100;
					printf("你赢了！加120元，100经验现有%.2f元,%d经验", money,dj);
				}
			}//3完
			if(mx == '4') {
				//4
				xue4=400;
				while(xue4>0) {
					printf("胡帕冲了过来，是否逃跑？(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"逃跑成功！"<<endl;
							break;
						} else {
							xue-=80;
							printf("逃跑失败！你被扣了80滴血，剩%d滴血。\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue4-=gj;
						xue-=80;
						printf("你的神奇宝贝被扣了40滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue4);
					}
					if(xue <= 0) {
						printf("你的神奇宝贝失去了战斗能力！");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue4 <= 0) {
					money+=240;
					dj+=200;
					printf("你赢了！加240元，200经验,现有%.2f元,%d经验", money,dj);
				}
			}//4完
			if(mx == '5') {
				//5
				xue5=800;
				while(xue5>0) {
					printf("胡帕（被解放）冲了过来，是否逃跑？(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"逃跑成功！"<<endl;
							break;
						} else {
							xue-=160;
							printf("逃跑失败！你被扣了160滴血，剩%d滴血。\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue5-=gj;
						xue-=160;
						printf("你的神奇宝贝被扣了160滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue5);
					}
					if(xue <= 0) {
						printf("你的神奇宝贝失去了战斗能力！");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue5 <= 0) {
					money+=480;
					dj+=400;
					printf("你赢了！加480元，400经验,现有%.2f元,%d经验", money,dj);
				}
			}//5完
			if(mx == '6') {
				//6
				xue6=800;
				while(xue6>0) {
					printf("mage暴走皮神冲了过来，是否逃跑？(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"逃跑成功！"<<endl;
							break;
						} else {
							xue-=320;
							printf("逃跑失败！你被扣了320滴血，剩%d滴血。\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue6-=gj;
						xue-=320;
						printf("你的神奇宝贝被扣了3200滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue6);
					}
					if(xue <= 0) {
						printf("你的神奇宝贝失去了战斗能力！");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue6 <= 0) {
					money+=960;
					dj+=800;
					printf("你赢了！加960元，800经验,现有%.2f元,%d经验", money,dj);
				}
			}//6完
			if(mx == '7') {
				//7
				xue7=1600;
				while(xue7>0) {
					printf("全部神兽冲了过来，是否逃跑？(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"逃跑成功！"<<endl;
							break;
						} else {
							xue-=640;
							printf("逃跑失败！你被扣了640滴血，剩%d滴血。\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue7-=gj;
						xue-=640;
						printf("你的神奇宝贝被扣了6400滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue7);
					}
					if(xue <= 0) {
						printf("你的神奇宝贝失去了战斗能力！");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue7 <= 0) {
					money+=1980;
					dj+=1600;
					printf("你赢了！加1980元，1600经验,现有%.2f元,%d经验", money,dj);
				}
			}//7完
			if(mx == '8') {
				//8
				xue8=3200;
				while(xue8>0) {
					printf("mage阿尔宙斯x,y&z`冲了过来，是否逃跑？(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"逃跑成功！"<<endl;
							break;
						} else {
							xue-=1280;
							printf("逃跑失败！你被扣了1280滴血，剩%d滴血。\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue8-=gj;
						xue-=1280;
						printf("你的神奇宝贝被扣了12800滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue8);
					}
					if(xue <= 0) {
						printf("你的神奇宝贝失去了战斗能力！");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue8 <= 0) {
					money+=3960;
					dj+=3200;
					printf("你赢了！加3960元，3200经验,现有%.2f元,%d经验", money,dj);
				}
			}//8完
			if(mx == '9') {
				//9
				xue9=6400;
				while(xue9>0) {
					printf("盖欧卡冲了过来，是否逃跑？(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"逃跑成功！"<<endl;
							break;
						} else {
							xue-=2560;
							printf("逃跑失败！你被扣了2560滴血，剩%d滴血。\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue9-=gj;
						xue-=25600;
						printf("你的神奇宝贝被扣了25600滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue9);
					}
					if(xue <= 0) {
						printf("你的神奇宝贝失去了战斗能力！");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue9 <= 0) {
					money+=7980;
					dj+=6400;
					printf("你赢了！加7980元，6400经验,现有%.2f元%d经验", money,dj);
				}
			}//9完
			if(mx == 'a'||mx=='A' ) {
				//10
				xue10=12800;
				while(xue10>0) {
					printf("超进化mage盖欧卡x,y&z冲了过来，是否逃跑？(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"逃跑成功！"<<endl;
							break;
						} else {
							xue-=5120;
							printf("逃跑失败！你被扣了5120滴血，剩%d滴血。\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue10-=gj;
						xue-=51200;
						printf("你的神奇宝贝被扣了51200滴血，剩%d滴血。\n敌人被扣了%d滴血，剩%d滴血。\n",xue,gj,xue10);
					}
					if(xue <= 0) {
						printf("你的神奇宝贝失去了战斗能力！");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue10 <= 0) {
					money+=15960;
					dj+=12800;
					printf("你赢了！加1556元，12800经验,现有%.2f元,%d经验", money,dj);
				}
			}//10完

		}//冒险模式完
		if(ms=='2') { //商店模式
			printf("\n E--退出\n 1--力量药水I(加20攻击力)--40元\n 2--力量药水II(加40攻击力)--80元\n 3--力量药水III(加80攻击力)--160元\n 4--治疗药水I(加160滴血)--40元\n 5--治疗药水II(加320滴血)--80元\n 6--治疗药水III(加640滴血)--160元\n 7--批量购买\n若金钱不足自动跳出");
			cin>>shop;
			if( (shop == '1') && (money >= 40) ) {
				gj += 20;    //1
				money-=40;
				printf("\n\n成功！你有%d点攻击,%.2f元\n" ,gj,money);
			}
			if( (shop == '2') && (money >= 80) ) {
				gj += 40;    //2
				money-=80;
				printf("\n\n成功！你有%d点攻击,%.2f元\n" ,gj,money);
			}
			if( (shop == '3') && (money >= 160) ) {
				gj += 80;    //3
				money-=160;
				printf("\n\n成功！你有%d点攻击,%.2f元\n" ,gj,money);
			}
			if( (shop == '4') && (money >= 40) ) {
				xue += 160;    //4
				money-=40;
				printf("\n\n成功！你有%d滴血,%.2f元\n" ,xue,money);
			}
			if( (shop == '5') && (money >= 80) ) {
				xue += 320;    //5
				money-=80;
				printf("\n\n成功！你有%d滴血,%.2f元\n" ,xue,money);
			}
			if( (shop == '6') && (money >= 160) ) {
				xue += 640;    //6
				money-=160;
				printf("\n\n成功！你有%d滴血,%.2f元\n" ,xue,money);
			}
			if(shop=='e'||shop=='E')goto loop;
			if( shop == '7') {
				//7
				printf("\n E--退出\n 1--力量型药水\n 2--治疗型药水");
				cin>>pl;
				if(pl=='e'||pl=='E')goto loop;
				if(pl == '1') {
					printf("请输入要加的攻击：");
					cin>>s2;
					s1 = s2/20.00*40;
					if(money >= s1) {
						gj+=s2;
						money-=s1;
						printf("\n\n成功！你有%d点攻击,%.2f元\n" ,gj,money);
					}
				}
				if(pl == '2') {
					printf("请输入要加的血：");
					cin>>s2;
					s1 = s2/160.00*40;
					if(money >= s1) {
						xue+=s2;
						money-=s1;
						printf("\n\n成功！你有%d滴血,%.2f元\n" ,xue,money);
					}
				}
			}//7完
		}//商店模式完
		if(ms=='3') { //状态显示模式
			printf("\n你有%d滴血，%d点攻击，%.2f元。\n" ,xue,gj,money);
		}//状态显示模式
		if( (ms!='1') && (ms!='2') && (ms!='3') &&(ms!='4')&&(ms!='5')) {
			cout<<"\n乱输的孩子不是好孩子。";
		}
		if(ms=='4') {
			printf("\n惊心动魂的时刻来了，请输入你的幸运数字：");
			cin>>db;
			printf("\n请输入你的赌注：");
			cin>>dbm;
			srand((unsigned)time(NULL));
			bd1 = rand();
			if( bd1 % 2 == dbm % 2 && money >= dbm) {
				printf("\n你赢了！加赌注的1.5倍！");
				money = money+0.5*dbm;
			}
			if( bd1 % 2 != dbm % 2 && money >= dbm) {
				printf("\n你输了！减去赌注！");
				money-=dbm;
			}
		}
		if(ms=='5') {
gly:
			printf("\n (EEEE--退出) 请输入管理员密码(四位)：");
			cin>>gl1>>gl2>>gl3>>gl4;
			if((gl1=='E'&&gl2=='E'&&gl3=='E'&&gl4=='E')||(gl1=='e'&&gl2=='e'&&gl3=='e'&&gl4=='e'))goto loop;
			if(gl1=='0'&&gl2=='8'&&gl3=='2'&&gl4=='5') {
				system("cls");
g1:
				printf("\n 成功！\n (E--退出)你有%d滴血，%d点攻击，%.2f元。\n 1--改血量\n 2--改攻击\n 3--改金钱\n",xue,gj,money);
				cin>>gd;
				if(gd=='1')goto gd1;
				if(gd=='2')goto gd2;
				if(gd=='3')goto gd3;
			} else {
				system("cls");
				printf("\n错误！\n");
				goto gly;
			}
		}
	}//主程序完 1221
gd1:
	printf("请输入血：");
	cin>>gl;
	xue=gl;
	goto g1;
gd2:
	printf("请输入攻击：");
	cin>>gl;
	gj=gl;
	goto g1;
gd3:
	printf("请输入金钱：");
	cin>>gl;
	money=gl;
	goto g1;
	return 0;
}
