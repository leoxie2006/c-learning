#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,m=0,x;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>x;
		if(x>m) m=x;	
	}
	cout<<m; 
return 0;
}

