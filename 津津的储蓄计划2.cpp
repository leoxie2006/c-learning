#include<bits/stdc++.h>
using namespace std;
int main(){
	int y,i,yu,c,b;
	b=yu=c=y=0;
	for(i=1;i<=12;i++)
	{
		cin>>y;
		yu+=300;
		if(yu<y&&b==0)
		b=-i;
		yu=yu-y;
		for(;yu>=100;yu=yu-100)
		c+=100;
		}
	if(b!=0)
	cout<<b;
	else
	cout<<yu+c+c*0.2;
	return 0;
}


