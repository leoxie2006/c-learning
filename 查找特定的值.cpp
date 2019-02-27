#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,a1,x;
	cin>>a;
	int n[a];
	for(int i=0;i<a;i++)
	{
	cin>>n[i];
	}
	cin>>x;
	for(int i=0;i<a;i++)
	{
	if(n[i]==x)
	{
	cout<<i+1;
	return 0;
	}
	}
	cout<<"-1";
}
