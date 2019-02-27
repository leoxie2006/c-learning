#include<bits/stdc++.h>
using namespace std;
int main(){
	double a=0,b=0,c=0,d=0;
	int n;
	cin>>n;
	int e[n];
	for(int i=0;i<=n-1;i++)
	{
		cin>>e[i];
		if(e[i]>=0&&e[i]<=18)
		a++;
		else
		if(e[i]>=19&&e[i]<=35)
		b++;
		else
		if(e[i]>=36&&e[i]<=60)
		c++;
		else
		if(e[i]>=60)
		d++;
	}
	a=a/n*100;b=b/n*100;c=c/n*100;d=d/n*100;
	printf("%.2lf%\n%.2lf%\n%.2lf%\n%.2lf",a,b,c,d);cout<<"%";
	return 0;
}

