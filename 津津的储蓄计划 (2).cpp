#include<bits/stdc++.h>
using namespace std;
int main()
{
	int yusuan,i,yu,chuxu,bugou;//声明变量：预算、重复十二次用的i
								//剩余钱数、储蓄和不够 
	bugou=yu=chuxu=yusuan=0;//初始化 
	for(i=1;i<=12;i++)//重复12次（12个月、用i） 
	{
		cin>>yusuan;//输入预算额 
		yu=yu+300;//每月加￥300 
		if(yu<yusuan&&bugou==0)	bugou=-i;//若预算大于剩余钱数
										//计入不够 
		yu=yu-yusuan;//剩余钱数减去预算 
		for(;yu>=100;yu=yu-100) chuxu+=100;//若大于或等于100，存入储蓄 
	}
	if(bugou!=0) cout<<bugou;//若不够有值，输出不够 
	else
		cout<<yu+chuxu+chuxu*0.2;//津津手中的钱=剩余钱币+储蓄+储蓄*0.2 
	return 0;
} 
