#include<bits/stdc++.h>
using namespace std;
int main(){
	int s=1,i=0;
	double t=1;
	for(;i<=15;){
		printf("%2d%10d%10.6lf\n",i,s,t);
		s=s*2;
		t=t/2;
		i=i+1;
	}
return 0;
}

