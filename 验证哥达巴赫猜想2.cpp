#include<bits/stdc++.h>
using namespace std;
int main(){
	int q,p,i,j;
		for(int n=4;n<=100;n+=2)
			for(p=2;p<=n/2;p++)
			{
				q=n-p;
				for(i=2;i*i<=p;i++)
				if(p%i==0) 
				break;
				for(j=2;j*j<=q;j++)
				if(q%j==0)
				break;
				if(i*i>p&&j*j>q)
				{
					printf("%d=%d+%d",n,p,q);
					cout<<endl; 
					break;
				}
			} 
	return 0;
}


