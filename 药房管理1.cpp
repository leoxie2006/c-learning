#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,c=0,a;
	cin>>m;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(a>m)
			c++;
		else
			m-=a;
	}
	cout<<c;
	return 0;
}
