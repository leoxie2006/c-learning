//c++ yourcraft v1.12.1
//��л��ҵ�֧�֣��һ���������ģ�
//���������--�̵꣬������޸���һЩСBug 
#include<bits/stdc++.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
using namespace std;
int main()
{//��ͷ 
cout<<" "<<"��";
Sleep(500);
cout<<" ��";
Sleep(500);
cout<<" ��";
Sleep(500);
cout<<" ��";
Sleep(1000);
cout<<endl<<" ����:";
Sleep(500);
cout<<"��";
Sleep(500);
cout<<"��"; 
Sleep(500);
cout<<"˧!";
cout<<endl<<" d---���� s---˫��"<<endl;
string a;
cin>>a;
if(a=="s")
cout<<"ֻ����һ���ˣ��޷�����!";
else if(a=="d")
{
cout<<endl<<"�ഫ������2�������������졣һ����Notch,һ����Herobring��";
cout<<"������һ���ֵܡ�";
Sleep(1000);
cout<<endl<<endl<<"���Ǵ���������ࡣNotch���Ǵ��������������Ķ�����";
cout<<"��Herobring�෴��"; 
Sleep(1000);
cout<<endl<<endl<<"��һ�죬Herobring��Notch��ս��һ����Herobring��Notch";
cout<<"�������ܻ�ɱ�ˡ�Herobring��ǰ����Ҫ����";
Sleep(1000);
cout<<endl<<endl<<"���ǣ�����Ҷ��ܸ��˵�ʱ��Notch�ҵ��㣬����˵:";
Sleep(1000);
cout<<endl<<endl<<"��Him�Ĵ���֮�����ᱻ������������һ�죬�������ѵģ���";
Sleep(1000);
cout<<endl<<endl<<"���ϵ�Notch˵�껰���㵹���ˡ�"; 
Sleep(1000); 
cout<<endl<<endl<<endl<<endl<<"һ���µĹ��£���������Ļ...";
string name;
cout<<endl<<endl<<"������֣�";
cin>>name; 
int a,b,c,him=0,xue=500,gong=1000,ji=1,jin=0,hxue=1000;
int xue1=100,xue2=200,xue3=400,xue4=400,xue5=700,xue6=800,money=0;//��ͷ���� 
while(him!=1)//������ 
{
cout<<endl<<"1--ð�� 2--�̵� 3--״̬ ";
cin>>a;
if(a==1)//ð�� 
{
cout<<endl<<"1--��ʬɭ�� 2--���ô�½ 3--Ů������ 4--ĩӰ���� ";
cout<<"5--����֮�� 6--�ֵظ�ۡ 7--herobring�ķ�ӡ";
cin>>b; 
if(b==1)//��ʬ 
{
while(xue1>0)
{
cout<<endl<<"��ʬ����������";
cout<<endl<<"�Ƿ񹥻�/���ܣ�(1/2)";
cin>>c;
if(c==1) 
{
xue1-=gong;

cout<<endl<<"��ʬ����"<<gong<<"��Ѫ";
if(xue1>0)
{
cout<<endl<<"��ʬ����"<<xue1<<"��Ѫ";
cout<<endl<<"��ʬҧ���㣡�����10��Ѫ";
xue-=10;
cout<<endl<<"�㻹��"<<xue<<"��Ѫ"; 
}
else
cout<<endl<<"��ʬ�Ҳˣ�"; 
} 
else if(c==2) 
{
xue-=50;
cout<<endl<<"����ʧ�ܣ���50��Ѫ ";
cout<<endl<<"�㻹��"<<xue<<"��Ѫ";
} 
if(xue<=0)
{
cout<<endl<<"�����ˣ�";
return 0; 
}
}
cout<<endl<<"��ܽ�ʬ�������10�㣡���50Ԫ��";
jin+=10;
xue1=100;
money+=50;
while(jin>=50) 
{
jin-=50;
ji+=1;
cout<<endl<<name<<"������";
gong+=2;
xue+=20; 
}
}//��ʬ���� 
if(b==2)//������ 
{
while(xue2>0)
{
cout<<endl<<"���������˹���";
cout<<endl<<"�Ƿ񹥻�/���ܣ�(1/2)";
cin>>c;
if(c==1) 
{
xue2-=gong;

cout<<endl<<"���ÿ���"<<gong<<"��Ѫ";
if(xue2>0)
{
cout<<endl<<"���û���"<<xue2<<"��Ѫ";
cout<<endl<<"�㱻�����ˣ������20��Ѫ";
xue-=20;
cout<<endl<<"�㻹��"<<xue<<"��Ѫ"; 
}
else
cout<<endl<<"���ùҲˣ�"; 
} 
else if(c==2) 
{
xue-=50;
cout<<endl<<"����ʧ�ܣ���50��Ѫ ";
cout<<endl<<"�㻹��"<<xue<<"��Ѫ";
} 
if(xue<=0)
{
cout<<endl<<"�����ˣ�";
return 0; 
}
}
cout<<endl<<"������ã������20�㣡���100Ԫ";
jin+=20;
xue2=200; 
money+=100; 
while(jin>=50) 
{
jin-=50;
ji+=1;
cout<<endl<<name<<"������";
gong+=2;
xue+=20; 
} 
}//�����ý��� 
if(b==3)//��Ů�� 
{
while(xue3>0)
{
cout<<endl<<"Ů�׶�����ҩˮ��";
cout<<endl<<"�Ƿ񹥻�/���ܣ�(1/2)";
cin>>c;
if(c==1) 
{
xue3-=gong;

cout<<endl<<"Ů�׿���"<<gong<<"��Ѫ";
if(xue3>0)
{
cout<<endl<<"Ů�׻���"<<xue3<<"��Ѫ";
cout<<endl<<"�㱻ҩˮ�����ˣ������50��Ѫ";
xue-=50;
cout<<endl<<"�㻹��"<<xue<<"��Ѫ"; 
}
else
cout<<endl<<"Ů�׹Ҳˣ�"; 
} 
else if(c==2) 
{
xue-=50;
cout<<endl<<"����ʧ�ܣ���50��Ѫ ";
cout<<endl<<"�㻹��"<<xue<<"��Ѫ";
} 
if(xue<=0)
{
cout<<endl<<"�����ˣ�";
return 0; 
}
}
cout<<endl<<"���Ů�ף������50�㣡���250Ԫ�������ֺ����㣩";
jin+=50;
xue3=400; 
money+=250; 
while(jin>=50) 
{
jin-=50;
ji+=1;
cout<<endl<<name<<"������";
gong+=2;
xue+=20; 
} 
}//��Ů�׽��� 
if(b==4)//��ĩӰ�� 
{
while(xue4>0)
{
cout<<endl<<"�㿴����ĩӰ�˵��۾���";
cout<<endl<<"�Ƿ񹥻�/���ܣ�(1/2)";
cin>>c;
if(c==1) 
{
xue4-=gong;

cout<<endl<<"ĩӰ�˿���"<<gong<<"��Ѫ";
if(xue4>0)
{
cout<<endl<<"ĩӰ�˻���"<<xue4<<"��Ѫ";
cout<<endl<<"�㱻ĩӰ�˹����ˣ������80��Ѫ";
xue-=80;
cout<<endl<<"�㻹��"<<xue<<"��Ѫ"; 
}
else
cout<<endl<<"ĩӰ�˹Ҳˣ�"; 
} 
else if(c==2) 
{
xue-=50;
cout<<endl<<"����ʧ�ܣ���50��Ѫ ";
cout<<endl<<"�㻹��"<<xue<<"��Ѫ";
} 
if(xue<=0)
{
cout<<endl<<"�����ˣ�";
return 0; 
}
}
cout<<endl<<"���ĩӰ�ˣ������80�㣡���400Ԫ";
jin+=80;
xue4=100; 
money+=400; 
while(jin>=50) 
{
jin-=50;
ji+=1;
cout<<endl<<name<<"������";
gong+=2;
xue+=20; 
} 
}//��ĩӰ�˽��� 
if(b==5)//�������� 
{
while(xue5>0)
{
cout<<endl<<"�㱻�������ùⲨ�����ˣ�";
cout<<endl<<"�Ƿ񹥻�/���ܣ�(1/2)";
cin>>c;
if(c==1) 
{
xue5-=gong;

cout<<endl<<"�����߿���"<<gong<<"��Ѫ";
if(xue5>0)
{
cout<<endl<<"�����߻���"<<xue5<<"��Ѫ";
cout<<endl<<"�����߹Ⲩ�����ɹ��������150��Ѫ";
xue-=150;
cout<<endl<<"�㻹��"<<xue<<"��Ѫ"; 
}
else
cout<<endl<<"�����߹Ҳˣ�"; 
} 
else if(c==2) 
{
xue-=50;
cout<<endl<<"����ʧ�ܣ���50��Ѫ ";
cout<<endl<<"�㻹��"<<xue<<"��Ѫ";
} 
if(xue<=0)
{
cout<<endl<<"�����ˣ�";
return 0; 
}
}
cout<<endl<<"��������ߣ������150�㣡���750Ԫ";
jin+=150;
xue5=100; 
money+=750; 
while(jin>=50) 
{
jin-=50;
ji+=1;
cout<<endl<<name<<"������";
gong+=2;
xue+=20; 
} 
}//�������߽��� 
if(b==6)//������ʿ 
{
while(xue6>0)
{
cout<<endl<<"����ʿ�ó�һ�Ѵ�ͷ��";
cout<<endl<<"�Ƿ񹥻�/���ܣ�(1/2)";
cin>>c;
if(c==1) 
{
xue6-=gong;

cout<<endl<<"����ʿ����"<<gong<<"��Ѫ";
if(xue6>0)
{
cout<<endl<<"����ʿ����"<<xue6<<"��Ѫ";
cout<<endl<<"����ʿ�ݺݿ�����һ���������300��Ѫ";
xue-=300;
cout<<endl<<"�㻹��"<<xue<<"��Ѫ"; 
}
else
cout<<endl<<"����ʿ�Ҳˣ�"; 
} 
else if(c==2) 
{
xue-=50;
cout<<endl<<"����ʧ�ܣ���50��Ѫ ";
cout<<endl<<"�㻹��"<<xue<<"��Ѫ";
} 
if(xue<=0)
{
cout<<endl<<"�����ˣ�";
return 0; 
}
}
cout<<endl<<"�������ʿ�������300�㣡���1500Ԫ";
jin+=300;
xue6=100; 
money+=1500; 
while(jin>=50) 
{
jin-=50;
ji+=1;
cout<<endl<<name<<"������";
gong+=2;
xue+=20; 
} 
}//������ʿ����
if(b==7)//��Him
{
cout<<"ȷ����(1/2)";
cin>>b;
if(b==1)
{ 
cout<<"��ؼ�һ�����죬Him�����ˣ�"<<endl;
cout<<"�������Notch�Ĵ����ˣ�������һ������";
while(hxue>0)
{
cout<<endl<<"Him���˹�����";
cout<<endl<<"�Ƿ񹥻�/���ܣ�(1/2)";
cin>>c;
if(c==1) 
{
hxue-=gong;

cout<<endl<<"Him����"<<gong<<"��Ѫ";
if(hxue>0)
{
cout<<endl<<"Him����"<<hxue<<"��Ѫ";
cout<<endl<<"�㱻Him�����ˣ������500��Ѫ";
xue-=500;
if(xue<=0)
{
cout<<endl<<"�����ˣ�";
return 0; 
}
else
cout<<endl<<"�㻹��"<<xue<<"��Ѫ"; 
}
else
cout<<endl<<"Him���ˣ�"; 
} 
else if(c==2) 
{
xue-=50;
cout<<endl<<"����ʧ�ܣ���50��Ѫ ";
cout<<endl<<"�㻹��"<<xue<<"��Ѫ";
}
}
cout<<endl<<"���ɱ��Him������˴�Ӣ�ۣ�";
him+=1; 
}//��Him����
} 
}//ð�ս��� 
if(a==2)//�̵�
{
cout<<endl<<"����"<<money<<"Ԫ"; 
cout<<endl<<"1--����10Ԫ(���鲻Ҫ��) 2--����ҩˮ(˲������)30Ԫ 3--����ҩˮ(˲������2)50Ԫ 4--�˳�";
cin>>b;
if(b==1)
{
if(money>=10) 
{
cout<<endl<<"����˧���ԣ��Կ�����ǰ��";
return 0;
}
else
cout<<endl<<"Ǯ������"; 
} 
if(b==2) 
{
if(money>=30)
{
money-=30;
xue+=100;
cout<<endl<<"����ɹ���Ѫ��һ�ٵ�";
cout<<endl<<"�㻹��"<<xue<<"��Ѫ"; 
}
else
cout<<endl<<"Ǯ������"; 
}
if(b==3) 
{
if(money>=50)
{
money-=50;
xue+=200;
cout<<endl<<"����ɹ���Ѫ�Ӷ��ٵ�";
cout<<endl<<"�㻹��"<<xue<<"��Ѫ";
}
else
cout<<"Ǯ������"; 
} 
} //�̵���� 

if(a==3)//��ʾ״̬ 
{
cout<<endl<<endl<<"Ѫ��"<<xue<<"��"<<" ����"<<gong<<"�� ";
cout<<endl<<ji<<"�� "<<"����"<<50-jin<<"�㾭������"<<" ����"<<money<<"Ԫ"<<endl; 
}//��ʾ״̬���� 
}//��������� 
cout<<endl<<"��Ӯ�ˣ�"; 
}
else cout<<" �����ë!"; 
return 0;
}
