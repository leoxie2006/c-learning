#include<bits/stdc++.h>
using namespace std;
int main()
{
	int yusuan,i,yu,chuxu,bugou;//����������Ԥ�㡢�ظ�ʮ�����õ�i
								//ʣ��Ǯ��������Ͳ��� 
	bugou=yu=chuxu=yusuan=0;//��ʼ�� 
	for(i=1;i<=12;i++)//�ظ�12�Σ�12���¡���i�� 
	{
		cin>>yusuan;//����Ԥ��� 
		yu=yu+300;//ÿ�¼ӣ�300 
		if(yu<yusuan&&bugou==0)	bugou=-i;//��Ԥ�����ʣ��Ǯ��
										//���벻�� 
		yu=yu-yusuan;//ʣ��Ǯ����ȥԤ�� 
		for(;yu>=100;yu=yu-100) chuxu+=100;//�����ڻ����100�����봢�� 
	}
	if(bugou!=0) cout<<bugou;//��������ֵ��������� 
	else
		cout<<yu+chuxu+chuxu*0.2;//������е�Ǯ=ʣ��Ǯ��+����+����*0.2 
	return 0;
} 
