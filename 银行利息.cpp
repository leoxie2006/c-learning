#include <bits/stdc++.h>
using namespace std;
int main (){
	double R,M,Y;
	scanf("%lf %lf %lf",&R,&M,&Y);
	for(int i=0;i<Y;i++){
		M=M*(1+0.01*R);
	}
	printf("%d",(int)M);
	return 0;
}

