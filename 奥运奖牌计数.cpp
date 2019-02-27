#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i;
cin>>n;
int a[n],b[n],c[n];
a[n+1]=0;
b[n+1]=0;
c[n+1]=0;
for(i=1;i<=n;i++)
cin>>a[i]>>b[i]>>c[i];
for(i=1;i<=n;i++)
{
	a[i]+=a[i+1];
	b[i]+=b[i+1];
	c[i]+=c[i+1];
}
printf("%d %d %d %d",a[n],b[n],c[n],a[n]+b[n]+c[n]);
	return 0;
}

