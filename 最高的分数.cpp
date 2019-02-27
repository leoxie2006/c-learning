#include<bits/stdc++.h>
using namespace std;
int main(){
	int b=0,n,a;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(b<a)
		b=a;
	}
	cout<<b;
return 0;
}

