#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,y=0,w=0,s=0,n;
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		cin>>n;
		if(n==1)
		y++;
		if(n==5)
		w++;
		if(n==10)
		s++;
	}
	printf("%d\n%d\n%d",y,w,s);
return 0;
}

