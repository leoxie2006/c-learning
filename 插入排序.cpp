#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[12],n,x,i,j,k;
	a[0]=-1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		for(j=i-1;a[j]>x;j--)
		for(k=i-1;k>=j;k--)
		a[k+1]=a[k];
		a[j+1]=x;
	}
	for(i=1;i<=n;i++)
	cout<<a[i]; 
	return 0;
}

