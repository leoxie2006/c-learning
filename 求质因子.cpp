#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,j,i,b=1;
	for(j=2;j<=100;j++){
		n=j;
		b=1;
			printf("%d=",n);
	i=2;
		while(n>1)
	{
		while(n%i==0){
			if(b==1){
				printf("%d",i);
				b=0;
			}
			else
			printf("*%d",i); 
			n=n/i;
		}
		i++;
	}
	cout<<endl;
	}

	return 0;
}


