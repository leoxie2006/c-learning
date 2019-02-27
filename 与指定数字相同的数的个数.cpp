#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,a,b,t=0;
	cin>>a;
	int c[a+1];
	for(i=0;i<a;i++)
	cin>>c[i];
	cin>>b;
	for(i=0;i<=a;i++)
	if(c[i]==b)
	t++;
	cout<<t;
	return 0;
}

