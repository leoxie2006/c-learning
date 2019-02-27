#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,t=0;
	for(a=1;a<=9;a++)
		for(b=1;b<=17;b++)
			for(c=1;c<=40;c++)
			{
				d=40-a-b-c;
				if(d>0)
				if(a*10+b*5+c*2+d==100){
						printf("10=%2d\n5=%2d\n2=%2d,\n1=%2d\n",a,b,c,d);
						cout<<endl; 
						t++;
				}
			
			}
			cout<<t;
	return 0;
}


