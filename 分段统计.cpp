#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x=0,y=0,a=0,z;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>z;
		if(85<=z&&z<=100)
		x++;
		if(60<=z&&z<=84)
		y++;
		if(z<60)
		a++;	
	}
	cout<<x<<endl<<y<<endl<<a;
	return 0;
}
