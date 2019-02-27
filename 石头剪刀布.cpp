#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void jidao(){
	cout<<"     \  /               "<<endl;
	cout<<"      \/                 "<<endl;
	cout<<"      /\                "<<endl;
	cout<<"     o  o               "<<endl;
}
void shito(){

}
 
int a=1,b,c=0,d=0,e=0;
	char x='@';
bool outdoting = true; 
void outdot() 
{
while(outdoting){
printf("你赢了%d局  输了%d局  和了%d局\n",c,d,e);
printf("按任意键继续");
for(int i=1;i<=3;i++){
Sleep(250);
cout<<".";
Sleep(250);
}
system("cls");
}
}

int main() {
	
	printf("1-石头\n2-剪刀\n3-布\n0-退出\n");
	while(a!=0){
		
		cin>>a;
		b=rand()%3+1;
		printf("对方出了");
		if(b==1)
			printf("石头");
		else
			if(b==2)
				printf("剪刀");
			else
				printf("布"); 
		if(a==b){
			printf("和局\n\n\n\n");
			e++;
			}
			else
				if(a-b==-1||a-b==2){
					printf("你赢了\n\n\n\n");
					c++;
				}
				else
					if(b-a==-1||b-a==2){
						printf("你输了\n\n\n\n");
						d++;
						}
						Sleep(2000);
						system("cls");
						outdoting = true;
std::thread threadOut (outdot);
cin>>x;
outdoting = false;
threadOut.join(); 
system("cls");
printf("你赢了%d局  输了%d局  和了%d局\n",c,d,e);
	} 
}

