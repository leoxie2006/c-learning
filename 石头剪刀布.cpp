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
printf("��Ӯ��%d��  ����%d��  ����%d��\n",c,d,e);
printf("�����������");
for(int i=1;i<=3;i++){
Sleep(250);
cout<<".";
Sleep(250);
}
system("cls");
}
}

int main() {
	
	printf("1-ʯͷ\n2-����\n3-��\n0-�˳�\n");
	while(a!=0){
		
		cin>>a;
		b=rand()%3+1;
		printf("�Է�����");
		if(b==1)
			printf("ʯͷ");
		else
			if(b==2)
				printf("����");
			else
				printf("��"); 
		if(a==b){
			printf("�;�\n\n\n\n");
			e++;
			}
			else
				if(a-b==-1||a-b==2){
					printf("��Ӯ��\n\n\n\n");
					c++;
				}
				else
					if(b-a==-1||b-a==2){
						printf("������\n\n\n\n");
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
printf("��Ӯ��%d��  ����%d��  ����%d��\n",c,d,e);
	} 
}

