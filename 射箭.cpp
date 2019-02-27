//更正一下：射箭 v1.2
//更新日志：v1.1加速游戏，增加游戏指南 
// v1.1.1增加箭矢数量控制 
// v1.2增设城门，调整了一些数字 
#include<iostream>
#include<windows.h>
using namespace std;
#define workout "=>-----|>"
int level=1,humans=0,arrows=0,killed=0,percent=100;
void go(int x,int y)
{
HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
COORD p;
p.X=x;
p.Y=y;
SetConsoleCursorPosition(handle,p);
}
class arrow
{
public:
int x=10,y=23,godown=5,put=0,speed=rand()%4;
}a[10000];
class humand
{
public:
int x=rand()%30+100,blood=0;
void print()
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY|BACKGROUND_RED);
for(int i=27;i>27-blood/10;i--){go(x,i);cout<<' ';}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY|BACKGROUND_BLUE|BACKGROUND_INTENSITY);
for(int i=27;i>27-blood/10;i--){go(x+1,i);cout<<' ';}
go(x+1,28);
cout<<' ';
go(x+1,29);
cout<<' ';
go(x,28);
cout << "@";
go(x,29);
cout << "|"; 
}
void deadprint()
{
for(int i=27;i>10;i--){go(x,i);cout<<' ';}
}
}human[10000];
void movewindow()
{
RECT rect;
HWND hwnd = GetForegroundWindow();
GetWindowRect(hwnd, &rect);
MoveWindow(hwnd, 0, 0, 0, 0, TRUE);
}
int main()
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY|BACKGROUND_BLUE|BACKGROUND_INTENSITY);
cout<<"欢迎来到：射死小人"<<endl;
cout<<"游戏指南：按空格键射出箭矢，按得越久飞得越远"<<endl<<endl<<endl;
Sleep(50);
//system("cls");
system("pause");
system("cls");
movewindow();
system("mode con lines=60 cols=160");
for(int i=0;i<160;i++){go(i,30);cout<<(char)3;}
go(4,18);
cout<<'*';
go(5,19);
cout<<'*';
go(6,20);
cout<<'*';
go(7,21);
cout<<'*';
go(8,22);
cout<<'*';
go(8,23);
cout<<'*';
go(8,24);
cout<<'*';
go(8,25);
cout<<'*';
go(7,26);
cout<<'*';
go(6,27);
cout<<'*';
go(5,28);
cout<<'*';
go(4,29);
cout<<'*';
for(int i=19;i<29;i++)
{
go(4,i);
cout<<'|'; 
}
while(level<30)
{
for(int i=19;i<29;i++)
{
go(4,i);
cout<<'|'; 
}
go(5,19);
cout<<'*';
go(6,20);
cout<<'*';
go(7,21);
cout<<'*';
go(8,22);
cout<<'*';
go(8,23);
cout<<'*';
go(8,24);
cout<<'*';
go(8,25);
cout<<'*';
go(7,26);
cout<<'*';
go(6,27);
cout<<'*';
go(5,28);
cout<<'*';
go(4,29);
cout<<'*';
go(4,23);
cout<<'|';
go(0,1);
cout<<"Level:"<<level;
go(0,2);
cout<<" ";
go(0,2);
cout<<"剩余箭矢："<<120-arrows;
go(0,3);
for(int i=0;i<150;i++)cout<<' ';
go(0,3);
cout<<"城门剩余坚固度："; 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY|BACKGROUND_RED);
for(int i=0;i<percent;i++)cout<<' ';
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY|BACKGROUND_BLUE|BACKGROUND_INTENSITY);
for(int i=1;i<=level;i++)
if(rand()%(60-level)==0)
human[humans++].blood=100+level;
else 
{
go(human[i].x,28);
cout<<' ';go(human[i].x,29);
cout<<' ';

}
for(int i=0;i<humans;i++)
{
if(human[i].x<2&&human[i].blood>0)percent-=rand()%3,human[i].blood=0;
if(percent<=0)
{
system("cls");
cout<<"你输了"<<endl;
Sleep(5000);
return 0;
}
if(human[i].blood>0)human[i].x--; 
}
for(int i=0;i<humans;i++)if(human[i].blood>0)human[i].print();else human[i].deadprint();
if(GetKeyState(' ')<0&&arrows<=120)
{
go(4,19);
cout<<'/';
go(3,20);
cout<<'/';
go(2,21);
cout<<'/';
go(1,22);
cout<<'/';
go(0,23);
cout<<'/';
go(0,24);
cout<<'\\';
go(1,25);
cout<<'\\';
go(2,26);
cout<<'\\';
go(3,27);
cout<<'\\';
go(4,28);
cout<<'\\';
int n;
while(GetKeyState(' ')<0)
{
Sleep(1);
n++;
}
go(0,0);
cout<<" ";
go(0,0);
cout<<n;
if(n>140)n/=2500000;
else n/=25;
cout<<' '<<n;
a[arrows].godown=n;
a[arrows].speed=2+n/2;
for(int i=19;i<29;i++)
{
go(4,i);
cout<<' '; 
}
a[arrows++].put=1;
Sleep(300);
go(4,19);
cout<<' ';
go(3,20);
cout<<' ';
go(2,21);
cout<<' ';
go(1,22);
cout<<' ';
go(0,23);
cout<<' ';
go(0,24);
cout<<' ';
go(1,25);
cout<<' ';
go(2,26);
cout<<' ';
go(3,27);
cout<<' ';
go(4,28);
cout<<' ';
Sleep(300);
go(4,18);
for(int i=19;i<29;i++)
{
go(4,i);
cout<<'|'; 
}
}
for(int i=0;i<arrows;i++)if(a[i].put==1)
{
go(a[i].x-9-a[i].speed,a[i].y);
for(int j=0;j<9+a[i].speed;j++)cout<<" ";
go(a[i].x-9,a[i].y);
cout<<workout;
a[i].x+=a[i].speed;
a[i].godown--;
if(a[i].godown<=0)
{

cout<<'|'; 
a[i].y++,a[i].godown=5;
go(a[i].x-9-a[i].speed,a[i].y-1);
for(int j=0;j<9+a[i].speed;j++)cout<<" ";
}
for(int j=0;j<humans;j++)
{
//go(0,1);
//cout<< a[i].x<<' '<<human[j].x<<' '<<a[i].y;
//Sleep(100);
if(a[i].x-human[j].x<=a[i].speed&&a[i].x-human[j].x>0&&(a[i].y==28||a[i].y==29))
human[j].blood-=a[i].speed*15+rand()%70,a[i].godown-=3,killed++;
} 
if(a[i].y==30)a[i].put=0;
}
if(killed>5+level)level++,killed=0;
Sleep(50);
}
cout<<"恭喜你胜利了！！！！！！！！！！"<<endl;
Sleep(50000);
return 0;
}
