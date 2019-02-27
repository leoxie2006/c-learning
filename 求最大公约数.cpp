#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,k=0,m;
	cin>>a>>b;
	if(a<b){m=a;a=b;b=m;} 
	k=a%b;
	while(k!=0)
	{
		a=b;
		b=k;
		k=a%b;
	}
	cout<<b; 
	return 0;
}

