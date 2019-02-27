#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p,q,i,j;
	cin>>n;
	for(p=2;p<=n/2;p++)
	{
		q=n/p;
		for(i=2;i*i<=p;i++)
			if(p%i==0)
			break;
		for(j=2;j*j<=q;j++)
			if(q%j==0)
			break;
		if(i*i>p&&j*j>q)
		{
		if(p<=q)
		p=q;
		cout<<p;
		}
	}
	return 0;
}


