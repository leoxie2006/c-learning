#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	int n,a,b,h=0,max=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	cin>>a>>b;
	if(a<=140&&a>=90&&b<=90&&b>=60)
	{
	h++;
	if(h>max)max=h;
	}
	else h=0;
	}

	cout<<max;
 return 0;
}
