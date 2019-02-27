#include<bits/stdc++.h>
using namespace std;
int main(){
	int a0=0,a1=1,a2,i,k,s=0;
	cin>>k; 
	for(i=2;i<=k;i++){
		a2=a0+a1;
		s+=a2;
		a0=a1;
		a1=a2;
	}
	cout<<s;	
return 0;
}

