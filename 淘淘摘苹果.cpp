#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,a[50],sum=0;
	for(int i=1;i<=10;i++)
	cin>>a[i];
	cin>>x;
	x+=30;
	for(int i=1;i<=10;i++)
	if(a[i]<=x)
	sum++;
	cout<<sum; 
	return 0;
}

