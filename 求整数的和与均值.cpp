#include<bits/stdc++.h>
using namespace std;
int main(){
	double n,a,b,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		s+=a;
	}
	b=s/n;
	printf("%d %.5lf",(int)s,b);
return 0;
}
