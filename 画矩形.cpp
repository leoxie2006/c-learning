#include<bits/stdc++.h>
using namespace std;
int main(){
	int g,k,z,j,i;
	char a;
	cin>>g>>k>>a>>z;
	if(z==1){
	for(i=1;i<=g;i++){
		for(j=1;j<=k;j++)
		printf("%c",a);
		cout<<endl;
	}
	}
	else{
		for(int o=1;o<=k;o++)
		printf("%c",a);
		cout<<endl;
		for(int x=1;x<=g-2;x++)
		{
			printf("%c",a);
			for(int b=1;b<=k-2;b++)
				printf(" ");
			printf("%c",a);	
			cout<<endl;
			}
			for(int o=1;o<=k;o++)
		printf("%c",a);
	}
	return 0;
}

