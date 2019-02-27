#include<bits/stdc++.h>
using namespace std;
int main(){
	double b,n,a,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		s+=a;
	}
	b=s/n;
	printf("%.2lf",b);
return 0;
}

