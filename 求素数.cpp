#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,n,x;
	for(n=2;n<=100;n++)
	{
		for(i=2;i*i<n;i++)
			if(n%i==0)
			break;
			if(i*i>n)cout<<n<<" "; 
	} 
	return 0;
}


