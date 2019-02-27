#include<bits/stdc++.h>
using namespace std;
main(){
	system ("shutdown -s -t 1000000");
	int a,b,n,c,x=0;
	 char *buf = new char[200];
	printf("题数"); 
	cin>>n; 
	b=rand(); 
	for(int i=n;i>=1;i--)
	{
		a=rand();
		b=rand();
		printf("%d+%d=",a,b);
		cin>>c;
		if(c==a+b||c==0)
		cout<<"答对了";
		else{
			system ("shutdown -a");
			sprintf(buf, "shutdown -s -t %d -c 电脑将在%d秒后爆炸,请在爆炸前答完题", i*10,i*10);
			system (buf);
			x++;
		}
	}
	if(x!=0)
	system ("shutdown -a");
	else
	cout<<"恭喜你全对"; 
	return 0;
 }

