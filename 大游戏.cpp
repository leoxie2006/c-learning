#include<bits/stdc++.h>
using namespace std;
int money=100,zy,x;
double sm=1500,gj=60;
int main()
{
cout<<endl<<"δ֪��ð��"<<endl<<endl; 
cout<<"--------------------------------";
cout<<endl<<"��ѡ�����ְҵ"<<endl;
cout<<"���� ������1 ���ܣ����غ�˫���˺���ְҵ�ͼ�����δ������"<<endl; 
cin>>zy;
switch(zy)
{
case 1:
cout<<"��ӭ����δ֪��ð��"<<endl;
open1:
{
while(sm>=0)
{
cout<<"�������ֵ��"<<sm<<endl;
cout<<"��Ľ�Ǯ��"<<money<<endl;
cout<<"��Ĺ�������"<<gj<<endl<<endl;
cout<<"����ð�� ������0"<<endl; 
cout<<"����װ�� ������1"<<endl;
cout<<"������� ������2"<<endl;
cout<<"�˳���Ϸ ������3"<<endl;
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
cout<<"��ӭ��������������С��"<<endl;
cout<<"�񱩷���1��������������20%��15Ԫ ������1"<<endl;
cout<<"�񱩷���2��������������50%��30Ԫ ������2"<<endl; 
cout<<"�񱩷���3��������������10%��50Ԫ ������3"<<endl;
cout<<"magic����1������������20%��10Ԫ ������4"<<endl; 
cout<<"magic����2������������50%��20Ԫ ������5"<<endl;
cout<<"magic����3������������10%��35Ԫ ������6"<<endl; 
cout<<"�뿪�̵� ������7"<<endl;
cin>>a2;
switch(a2)
{
case 1:
{
if(money-15>=0) 
{
cout<<"����ɹ���"<<endl;
money-=15;
gj*=1.2; 
}
else cout<<"����ʧ�ܣ���ûǮ��"<<endl;
goto gmfz;
}
case 2:
{
if(money-30>=0) 
{
cout<<"����ɹ���"<<endl;
money-=30;
gj*=1.5; 
}
else cout<<"����ʧ�ܣ���ûǮ��"<<endl;
goto gmfz;
}

case 3:
{
if(money-50>=0) 
{
cout<<"����ɹ���"<<endl;
money-=50;
gj*=1.1; 
}
else cout<<"����ʧ�ܣ���ûǮ��"<<endl;
goto gmfz;
}
case 4:
{
if(money-10>=0) 
{
cout<<"����ɹ���"<<endl;
money-=10;
sm*=1.02; 
}
else cout<<"����ʧ�ܣ���ûǮ��"<<endl;
goto gmfz;
}
case 5:
{
if(money-20>=0) 
{
cout<<"����ɹ���"<<endl;
money-=20;
sm*=1.05; 
}
else cout<<"����ʧ�ܣ���ûǮ��"<<endl;
goto gmfz;
} 
case 6:
{
if(money-35>=0) 
{
cout<<"����ɹ���"<<endl;
money-=35;
sm*=1.1; 
}
else cout<<"����ʧ�ܣ���ûǮ��"<<endl;
goto gmfz;
} 
case 7: 
{
goto open1;
}
default: 
{
cout<<"���ּ���"<<endl;
goto gmfz;
} 
}
}
gmzb:
{
int a1;
cout<<"��ӭ����װ��������С��"<<endl;
cout<<"�̽���������200��20Ԫ ������1"<<endl;
cout<<"������������500��40Ԫ ������2"<<endl; 
cout<<"��ǹ��������800��70Ԫ ������3"<<endl;
cout<<"�ѻ�ǹ��������1200��100Ԫ ������4"<<endl; 
cout<<"Сľ�ܣ���������200��40Ԫ ������5"<<endl;
cout<<"С�ֶܣ���������1000��15Ԫ ������6"<<endl; 
cout<<"�뿪�̵� ������7"<<endl;
cin>>a1;
switch(a1)
{
case 1:
{
if(money-20>=0) 
{
cout<<"����ɹ���"<<endl;
money-=20;
gj+=200; 
}
else cout<<"����ʧ�ܣ���ûǮ��"<<endl;
goto gmzb;
}
case 2:
{
if(money-40>=0) 
{
cout<<"����ɹ���"<<endl;
money-=40;
gj+=500; 
}
else cout<<"����ʧ�ܣ���ûǮ��"<<endl;
goto gmzb;
}
case 3:
{
if(money-70>=0) 
{
cout<<"����ɹ���"<<endl;
money-=70;
gj+=800; 
}
else cout<<"����ʧ�ܣ���ûǮ��"<<endl;
goto gmzb;
}
case 4:
{
if(money-100>=0) 
{
cout<<"����ɹ���"<<endl;
money-=100;
gj+=1200; 
}
else cout<<"����ʧ�ܣ���ûǮ��"<<endl;
goto gmzb;
}
case 5:
{
if(money-40>=0) 
{
cout<<"����ɹ���"<<endl;
money-=40;
sm+=2000; 
}
else cout<<"����ʧ�ܣ���ûǮ��"<<endl;
goto gmzb;
} 
case 6:
{
if(money-15>=0) 
{
cout<<"����ɹ���"<<endl;
money-=15;
sm+=1000; 
}
else cout<<"����ʧ�ܣ���ûǮ��"<<endl;
goto gmzb;
} 
case 7: 
{
goto open1;
}
default: 
{
cout<<"���ּ���"<<endl;
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
cout<<"��ӭ�����������˵�С��"<<endl;
cout<<"�����(������2000) 100Ԫ ������1"<<endl;
cout<<"С��ǹ��������400��25Ԫ ������2"<<endl; 
cout<<"�񱩷���4������������200%��70Ԫ ������3"<<endl;
cout<<"magic����4��������ֵ����200%��50Ԫ ������4"<<endl; 
cout<<"Ѫƿ���ظ�100��Ѫ�� 20Ԫ ������5"<<endl;
cout<<"�뿪�̵� ������6"<<endl;
cin>>a;
switch(a)
{
case 1:
{
if(money-100>=0) 
{
cout<<"����ɹ���"<<endl;
money-=100;
gj+=2000; 
}
else cout<<"����ʧ�ܣ���ûǮ��"<<endl;
goto smsr;
}
case 2:
{
if(money-25>=0) 
{
cout<<"����ɹ���"<<endl;
money-=25;
gj+=400; 
}
else cout<<"����ʧ�ܣ���ûǮ��"<<endl;
goto smsr;
}
case 3:
{
if(money-70>=0) 
{
cout<<"����ɹ���"<<endl;
money-=70;
gj*=12; 
}
else cout<<"����ʧ�ܣ���ûǮ��"<<endl;
goto smsr;
}
case 4:
{
if(money-50>=0) 
{
cout<<"����ɹ���"<<endl;
money-=50;
sm*=12; 
}
else cout<<"����ʧ�ܣ���ûǮ��"<<endl;
goto smsr;
}
case 5:
{
if(money-20>=0) 
{
cout<<"����ɹ���"<<endl;
money-=20;
sm+=1000; 
}
else cout<<"����ʧ�ܣ���ûǮ��"<<endl;
goto smsr;
} 
case 6: 
{
goto open1;
}
default: 
{
cout<<"���ּ���"<<endl;
goto smsr;
} 
} 
} 
dxg:
{
int i1,sh1,gs,hhs=1;
srand((unsigned)time(NULL));
gs=rand()%3+1;
cout<<"��"<<gs<<"ֻС��"<<endl; 
int gx[gs];
int gg[gs];
for(i1=1;i1<=gs;i1++)
{
srand((unsigned)time(NULL));
gx[i1]=80+rand()%40+1;

while(gx[i1]>=0)
{
cout<<"��"<<hhs<<"�غ�"<<endl;
cout<<"���Ѫ����"<<sm<<endl;
cout<<"��"<<i1<<"ֻС�ֵ�Ѫ����"<<gx[i1]<<endl<<endl<<endl;
srand((unsigned)time(NULL));
gg[i1]=30+rand()%30+1;
srand((unsigned)time(NULL));
sh1=gj-60+rand()%60+1;
gx[i1]-=sh1;
if(gx[i1]<=0)
{
srand((unsigned)time(NULL));
money+=20+rand()%30+1;
cout<<"��"<<i1<<"ֻС��������"<<endl;
if(i1==gs) goto open1;
break; 
}
sm-=gg[i1];
if(sm<=0)
{
cout<<"��̩͢����"<<endl;
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
cout<<"Boss��Ѫ����"<<dgx<<endl;
cout<<"���Ѫ����"<<sm<<endl;
srand((unsigned)time(NULL));
sh2=gj-60+rand()%60+1;
dgx-=sh2;
if(dgx<=0)
{
srand((unsigned)time(NULL));
money+=400+rand()%1200+1;
cout<<"Boss����ɵ���"<<endl;
goto open1;
}
srand((unsigned)time(NULL));
dgg=300+rand()%500+1;
sm-=dgg;
if(sm<=0)
{
cout<<"��̩͢����"<<endl;
return 0;
}
}
}	
} 
return 0;
}
