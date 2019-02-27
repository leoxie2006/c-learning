#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,k,i=0;
	cin>>m>>k;
	if(m%19!=0)
	cout<<"NO";
	else 
	{
		for(int n=1;n<=100000000;n=n*10){
	if(m/n%10==3)
	i++;
	}
	if(i==k)
	cout<<"YES";
		else cout<<"NO";
	}
	return 0;
}

