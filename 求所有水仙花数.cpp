#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,a,b,c;
	for(i=100;i<=999;i++){
	a=i/100;
	b=i%100/10;
	c=i%10;
	if(a*a*a+b*b*b+c*c*c==i)
	 cout<<i<<endl;
	} 
return 0;
}

