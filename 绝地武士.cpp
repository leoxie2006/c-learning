//�����޸İ�
#include <bits/stdc++.h>//����ͷ�ļ�
#include <windows.h>
#include <iostream>
#include "time.h"
#include "stdlib.h"
using namespace std;
int main()
{
/*printf("\
������ʿV1.5\n\
\n\
ԭ���ߣ�Steven.S\n\n");
Sleep(1000);
printf("������ΰ���cyka blyat!\n\n");
Sleep(1000);
printf("�������ݣ��������Ϊ���0��9��������֣����Ҵ�ֳɹ��ɸ��ʻ��������ʾ��\n\n\n");
Sleep(2000);
system("color 0E");//���úڵ׻���
Sleep (1000);
printf(" �ܾ���ǰ����һ��ңԶ����ϵ��\n\n");
Sleep (1500);
printf(" ������ʿ��������Ǳ���������С�\n\n");
Sleep (1500);
printf(" Ϊ�˴ݻٵ۹������񹲺͹���\n\n");
Sleep (1500);
printf(" ��������������Ǻ��ĵĻ������ҵ������Ա����롣\n\n"
" ��������;����ά���ᱻ��ԭ��������\n\n"
" ��Ȼ֮���������Դ�˹ά���������͢");
Sleep (4500);
printf(" һ�죬ŷ������ŵ�ȵľ����������㣺\n\n"
" ����ƽֻ�Ƕ��ݵģ�����һ�յ۹����ŭ������\n\n"
" ����������ϵ����ʱ�����ޡ�\n\n");
Sleep(4500);
printf(" ���������۾�������\n\n");
Sleep(1500);*/
for(int i=1;i<=25;i++)
{
printf("\n");
Sleep(250);
}
Sleep(1000);
char mz[11];//ʮ���ַ�
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
printf("������ʿ֮���������룩��");
cin>>mz;
printf("�Ƿ���Ҫ�̳̣���Y or N��\n");
cin>>jiaochen;
if( (jiaochen != 'Y'&&jiaochen!='y') && (jiaochen != 'N'&&jiaochen!='n') )//�������
{
cout<<"����Ĳ����ڹ��͹���"<<endl;
}
if((jiaochen=='Y')||(jiaochen=='y'))//�̳�
{
printf("�װ���%s��\n����1�������ͨ�����Ǻ��ĵ�ͨ����\n����2�����������̵ꡣ\n����3���������������ҡ�\n�ս���ʱ��100Ԫ���ú��������ɣ�\nûǮ�ͽ���ͨ�����Ǻ��ĵ�ͨ��׬Ǯ�ɣ������淨�ȴ��㷢��...\n", mz);
}//�̳���
while(1)//������
{
loop:
printf("\n\n1--ͨ�����Ǻ��ĵ�ͨ���� 2--�����̵� 3--���������ң��鿴�Լ����ԣ� 4--���Ǿưɣ� �Ĳ��� 5--���������");
cin>>ms;
if(ms=='1')
{
printf(" E--�˳�\n 1--�����\n 2--�����update\n 3--2�������\n 4--3�������\n 5--4�������\n 6--ά�ﻤ��\n 7--������͢����\n 8--���ͷ���\n 9--ά��\n A--������͢�ķ�ŭ\n");
cin>>mx;
if(mx=='E'||mx=='e'){goto loop;}
if(mx == '1')
{//1
xue1=50;
while(xue1>0)
{
printf("���������ǹ���㣬�Ƿ����ܣ�(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"���ܳɹ���"<<endl;break;}else{xue-=10;printf("����ʧ�ܣ��㱻����10��Ѫ��ʣ%d��Ѫ��\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue1-=gj;xue-=10;
printf("�㱻����10��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue1);
}
if(xue <= 0){printf("ά�����ˣ�");Sleep(10000000);return 0;}
}
if(xue1 <= 0){money+=30;dj+=25;printf("��Ӯ�ˣ���30Ԫ��25���飬����%.2fԪ��%d����", money,dj);}
}//1��
if(mx == '2')
{//2
xue2=100;
while(xue2>0)
{
printf("���������ǹ���㣬�Ƿ����ܣ�(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"���ܳɹ���"<<endl;break;}else{xue-=20;printf("����ʧ�ܣ��㱻����20��Ѫ��ʣ%d��Ѫ��\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue2-=gj;xue-=20;
printf("�㱻����20��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue2);
}
if(xue <= 0){printf("ά�����ˣ�");Sleep(10000000); return 0;}
}
if(xue2 <= 0){money+=60;dj+=50;printf("��Ӯ�ˣ���60Ԫ��50���飬����%.2fԪ,%d����", money,dj);}
}//2��
if(mx == '3')
{//3
xue3=200;
while(xue3>0)
{
printf("������ò�ǹ���㣬�Ƿ����ܣ�(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"���ܳɹ���"<<endl;break;}else{xue-=40;printf("����ʧ�ܣ��㱻����40��Ѫ��ʣ%d��Ѫ��\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue3-=gj;xue-=40;
printf("�㱻����40��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue3);
}
if(xue <= 0){printf("ά�����ˣ�"); Sleep(10000000);return 0;}
}
if(xue3 <= 0){money+=120;dj+=100;printf("��Ӯ�ˣ���120Ԫ��100��������%.2fԪ,%d����", money,dj);}
}//3��
if(mx == '4')
{//4
xue4=400;
while(xue4>0)
{
printf("������ñ�����ǹ���㣬�Ƿ����ܣ�(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"���ܳɹ���"<<endl;break;}else{xue-=80;printf("����ʧ�ܣ��㱻����80��Ѫ��ʣ%d��Ѫ��\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue4-=gj;xue-=80;
printf("�㱻����40��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue4);
}
if(xue <= 0){printf("ά�����ˣ�");Sleep(10000000); return 0;}
}
if(xue4 <= 0){money+=240;dj+=200;printf("��Ӯ�ˣ���240Ԫ��200����,����%.2fԪ,%d����", money,dj);}
}//4��
if(mx == '5')
{//5
xue5=800;
while(xue5>0)
{
printf("������ñ��ܲ�ǹ���㣬�Ƿ����ܣ�(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"���ܳɹ���"<<endl;break;}else{xue-=160;printf("����ʧ�ܣ��㱻����160��Ѫ��ʣ%d��Ѫ��\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue5-=gj;xue-=160;
printf("�㱻����160��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue5);
}
if(xue <= 0){printf("ά�����ˣ�"); Sleep(10000000);return 0;}
}
if(xue5 <= 0){money+=480;dj+=400;printf("��Ӯ�ˣ���480Ԫ��400����,����%.2fԪ,%d����", money,dj);}
}//5��
if(mx == '6')
{//6
xue6=800;
while(xue6>0)
{
printf("���˳��˹������Ƿ����ܣ�(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"���ܳɹ���"<<endl;break;}else{xue-=320;printf("����ʧ�ܣ��㱻����320��Ѫ��ʣ%d��Ѫ��\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue6-=gj;xue-=320;
printf("�㱻����320��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue6);
}
if(xue <= 0){printf("ά�����ˣ�");Sleep(10000000); return 0;}
}
if(xue6 <= 0){
money+=960;dj+=800;printf("��Ӯ�ˣ���960Ԫ��800����,����%.2fԪ,%d����", money,dj);
o=rand()%25;
if(o<=10)
{
printf("��ϲ����˹�ʺ�ˣ����������ʾ������һ��������%d",a11);
}
}
}//6��
if(mx == '7')
{//7
xue7=1600;
while(xue7>0)
{
printf("�������ù⽣���㣬�Ƿ����ܣ�(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"���ܳɹ���"<<endl;break;}else{xue-=640;printf("����ʧ�ܣ��㱻����640��Ѫ��ʣ%d��Ѫ��\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue7-=gj;xue-=640;
printf("�㱻����640��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue7);
}
if(xue <= 0){printf("ά�����ˣ�");Sleep(10000000); return 0;}
}
if(xue7 <= 0){
money+=1980;dj+=1600;printf("��Ӯ�ˣ���1980Ԫ��1600����,����%.2fԪ,%d����", money,dj);
p=rand()%25;
if(p<=8)
{
printf("��ϲ����˹�ʺ�ˣ����������ʾ�����ڶ���������%d",a22);
}
}
}//7��
if(mx == '8')
{//8
xue8=3200;
while(xue8>0)
{
printf("���ͷ��ط������ڣ��Ƿ����ܣ�(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"���ܳɹ���"<<endl;break;}else{xue-=1280;printf("����ʧ�ܣ��㱻����1280��Ѫ��ʣ%d��Ѫ��\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue8-=gj;xue-=1280;
printf("�㱻����1280��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue8);
}
if(xue <= 0){printf("ά�����ˣ�");Sleep(10000000); return 0;}
}
if(xue8 <= 0){
money+=3960;dj+=3200;printf("��Ӯ�ˣ���3960Ԫ��3200����,����%.2fԪ,%d����", money,dj);
q=rand()%25;
if(q<=6)
{
printf("��ϲ����˹�ʺ�ˣ����������ʾ����������������%d",a33);
}
}
}//8��
if(mx == '9')
{//9
xue9=6400;
while(xue9>0)
{
printf("ά�����ˣ��Ƿ����ܣ�(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"���ܳɹ���"<<endl;break;}else{xue-=2560;printf("����ʧ�ܣ��㱻����2560��Ѫ��ʣ%d��Ѫ��\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue9-=gj;xue-=2560;
printf("�㱻����2560��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue9);
}
if(xue <= 0){printf("ά��ɱ���㣡");Sleep(10000000); return 0;}
}
if(xue9 <= 0){
money+=7980;dj+=6400;printf("ά�ﱻն����7980Ԫ��6400����,����%.2fԪ%d����", money,dj);
r=rand()%25;
if(r<=5)
{
printf("��ϲ����˹�ʺ�ˣ����������ʾ�������ĸ�������%d",a44);
}
}
}//9��
if(mx == 'a'||mx=='A' )
{//10
xue10=12800;
while(xue10>0)
{
printf("������͢��ԭ��������㣬�Ƿ����ܣ�(Y or N)");
cin>>mxp;
srand((unsigned)time(NULL));
sj = rand();
if(mxp == 'Y'||mxp=='y')
{
if(sj%2==0){cout<<"���ܳɹ���"<<endl;break;}else{xue-=5120;printf("����ʧ�ܣ��㱻����5120��Ѫ��ʣ%d��Ѫ��\n", xue);}
}
if(mxp == 'N'||mxp=='n')
{
xue10-=gj;xue-=5120;
printf("�㱻����5120��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue10);
}
if(xue <= 0){printf("����ʧ��");Sleep(10000000); return 0;}
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
Sleep(250);money+=15960;dj+=12800;printf("������͢��ն����15960Ԫ��12800����,����%.2fԪ,%d����z��\n ", money,dj);
s=rand()%25;
if(s<=22)
{
printf("��ϲ����˹�ʺ�ˣ����������ʾ���������������%d",a55);
}}
}
}
if(ms=='2')
{
printf("\n E--�˳�\n 1--ԭ��ҩˮI(��20������)--40Ԫ\n 2--��ͼ���II(��40������)--80Ԫ\n 3--����ԭʳIII(��80������)--160Ԫ\n 4--��ͱ�I(��160��Ѫ)--40Ԫ\n 5--������II(��320��Ѫ)--80Ԫ\n 6--����III(��640��Ѫ)--160Ԫ\n 7--��������\n����Ǯ�����Զ�����");
cin>>shop;
if( (shop == '1') && (money >= 40) ){ gj += 20; money-=40; printf("\n\n�ɹ�������%d�㹥��,%.2fԪ\n" ,gj,money); }//1
if( (shop == '2') && (money >= 80) ){ gj += 40; money-=80; printf("\n\n�ɹ�������%d�㹥��,%.2fԪ\n" ,gj,money); }//2
if( (shop == '3') && (money >= 160) ){ gj += 80; money-=160; printf("\n\n�ɹ�������%d�㹥��,%.2fԪ\n" ,gj,money); }//3
if( (shop == '4') && (money >= 40) ){ xue += 160; money-=40; printf("\n\n�ɹ�������%d��Ѫ,%.2fԪ\n" ,xue,money); }//4
if( (shop == '5') && (money >= 80) ){ xue += 320; money-=80; printf("\n\n�ɹ�������%d��Ѫ,%.2fԪ\n" ,xue,money); }//5
if( (shop == '6') && (money >= 160) ){ xue += 640; money-=160; printf("\n\n�ɹ�������%d��Ѫ,%.2fԪ\n" ,xue,money); }//6
if(shop=='e'||shop=='E')goto loop;
if( shop == '7')
{//7
printf("\n E--�˳�\n 1--������ҩˮ\n 2--������ҩˮ");
cin>>pl;
if(pl=='e'||pl=='E')goto loop;
if(pl == '1')
{
printf("������Ҫ�ӵĹ�������");cin>>s2;
s1 = s2/20.00*40;if(money >= s1){gj+=s2;money-=s1;printf("\n\n�ɹ�������%d�㹥��,%.2fԪ\n" ,gj,money);}
}
if(pl == '2')
{
printf("������Ҫ�ӵ�Ѫ��");cin>>s2;
s1 = s2/160.00*40;if(money >= s1){xue+=s2;money-=s1;printf("\n\n�ɹ�������%d��Ѫ,%.2fԪ\n" ,xue,money);}
}
}//7��
}//�̵���
if(ms=='3')//״̬��ʾģʽ
{
printf("\n����%d��Ѫ��%d�㹥����%.2fԪ��\n" ,xue,gj,money);
}//״̬��ʾģʽ
if( (ms!='1') && (ms!='2') && (ms!='3') &&(ms!='4')&&(ms!='5'))
{
cout<<"\n����Ĳ����ڹ��͹���";
}
if(ms=='4')
{
printf("\n���Ķ����ʱ�����ˣ��������ȴ���������֣�");cin>>db;
printf("\n��������Ķ�ע��");cin>>dbm;
srand((unsigned)time(NULL));bd1 = rand();
if( bd1 % 2 == dbm % 2 && money >= dbm){printf("\n��Ӯ�ˣ��Ӷ�ע��1.5����");money = money+0.5*dbm;}
if( bd1 % 2 != dbm % 2 && money >= dbm){printf("\n�����ˣ���ȥ��ע��");money-=dbm;}
}
if(ms=='5')
{
gly:
printf("\n (EEEEE--�˳�) ����������(������֣�Ҫ�пո�)��");cin>>gl1>>gl2>>gl3>>gl4>>g15;
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
printf("\n �ɹ���\n ��˳�����������\n���͹�Ϊ�㽾��\n������Steven.S\n copyrite2018,all write reserved\n game over",xue,gj,money);cin>>gd;
if(gd=='1')goto gd1;
if(gd=='2')goto gd2;
if(gd=='3')goto gd3;
}
else{system("cls");printf("\n����ά�����ˣ�����\n");goto gly;}
}
}//�������� 1221
gd1:
printf("������Ѫ��");cin>>gl;xue=gl;goto g1;
gd2:
printf("�����빥����");cin>>gl;gj=gl;goto g1;
gd3:
printf("�������Ǯ��");cin>>gl;money=gl;goto g1;
return 0;}


