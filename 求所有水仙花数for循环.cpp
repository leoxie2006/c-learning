#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,i;
	for(a=1;a<=9;a++)
	{
		for(b=0;b<=9;b++)
		{
			for(c=0;c<=9;c++){
				i=a*100+b*10+c;
				if(a*a*a+b*b*b+c*c*c==i)
				cout<<i<<endl;
			}
		}
	} 
return 0;
}

