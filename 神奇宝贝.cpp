#include <bits/stdc++.h>
#include <windows.h>
#include <iostream>
using namespace std;
int main() {
	cout<<"\n���"; 
	system("color f0");//���úڵװ��֣�˳��
	printf("\
���汦��\n\
n\
�����ߣ�������\n\n");
	Sleep (1000);
	printf("�ܾ���ǰ����һ���ֵ�--С���Сˮ������һֱ�����汦����ʦΪĿ�꣬���Ͻ���ս����\n\n");
	Sleep (1000);
	printf("��ˮ���ݣ��������������˶Ի���ĳ�ޡ�\n\n");
	Sleep (1000);
	printf("���ã�һ����ս�������ˡ�\n\n");
	Sleep (1000);
	printf("��ս��������ҹ����������غϡ����ڣ�Сˮ�ĸ�ŷ����С���ù������ӡ�ڻ�ɽ�ס�\n\n");
	Sleep (1000);
	printf("һ�죬�����������һ�������������и����㣺\n\
����ƽֻ�Ƕ��ݵģ�����һ�ո�ŷ�������ѹ�������\n\n\
˵�գ��㽫���汦���򽻸����㡣\n\n");
	Sleep(1000);
	printf("һ���µĹ�����������Ļ...\n\n");
	Sleep(1000);
	char mz[11];//ʮ���ַ�
	char jiaochen ,mxp,mx,ms,shop,pl,gl1,gl2,gl3,gl4,gd;
	long long sj,xue1,xue2,xue3,xue4,xue5,xue6,xue7,xue8,xue9,xue10,gj=15,xue=200,s2,db,bd1,dbm,gl,dj=0;
	float s1,money=100;
	printf(" ������֣�");
	cin>>mz;
	printf("�Ƿ���Ҫ�̳̣���Y or N��\n");
	cin>>jiaochen;
	if( (jiaochen != 'Y'&&jiaochen!='y') && (jiaochen != 'N'&&jiaochen!='n') ) { //�������
		cout<<"���䣡"<<endl;
	}
	if((jiaochen=='Y')||(jiaochen=='y')) { //�̳�
		printf("�װ���%s��\n����1�������ð��ģʽ��\n����2��������̵�ģʽ��\n����3�������״̬��ʾģʽ��\n�ս���ʱ��100Ԫ���ú��������ɣ�\nûǮ�ͽ���ð��ģʽ���׬Ǯ�ɣ������淨�ȴ��㷢��...\n", mz);
	}//�̳���
	while(1) { //������
loop:
		printf("\n\n1--ð��ģʽ 2--�̵�ģʽ 3--״̬��ʾģʽ 4--�Ĳ�ģʽ 5--����ģʽ");
		cin>>ms;
		if(ms=='1') { //ð��ģʽ
			printf(" E--�˳�\n 1--Ƥ�������\n 2--��ô�˵����Ƥ����\n 3--�л�������\n 4--��ú���\n 5--����������ţ�\n 6--mage����Ƥ��\n 7--���ȫ����˵����\n 8--��ŷ���⿪��ӡ\n 9--���޺���mage������˹x,y&z\n A--��ս������mage��ŷ��x,y&z\n");
			cin>>mx;
			if(mx=='E'||mx=='e') {
				goto loop;
			}
			if(mx == '1') {
				//1
				xue1=50;
				while(xue1>0) {
					printf("Ƥ����˹������Ƿ����ܣ�(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"���ܳɹ���"<<endl;
							break;
						} else {
							xue-=10;
							printf("����ʧ�ܣ��㱻����10��Ѫ��ʣ%d��Ѫ��\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue1-=gj;
						xue-=10;
						printf("������汦��������10��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue1);
					}
					if(xue <= 0) {
						printf("������汦��ʧȥ��ս��������");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue1 <= 0) {
					money+=30;
					dj+=25;
					printf("��Ӯ�ˣ���30Ԫ��25���飬����%.2fԪ��%d����", money,dj);
				}
			}//1��
			if(mx == '2') {
				//2
				xue2=100;
				while(xue2>0) {
					printf("Ƥ������˹������Ƿ����ܣ�(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"���ܳɹ���"<<endl;
							break;
						} else {
							xue-=20;
							printf("����ʧ�ܣ��㱻����20��Ѫ��ʣ%d��Ѫ��\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue2-=gj;
						xue-=20;
						printf("������汦��������20��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue2);
					}
					if(xue <= 0) {
						printf("������汦��ʧȥ��ս��������");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue2 <= 0) {
					money+=60;
					dj+=50;
					printf("��Ӯ�ˣ���60Ԫ��50���飬����%.2fԪ,%d����", money,dj);
				}
			}//2��
			if(mx == '3') {
				//3
				xue3=200;
				while(xue3>0) {
					printf("��������˹������Ƿ����ܣ�(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"���ܳɹ���"<<endl;
							break;
						} else {
							xue-=40;
							printf("����ʧ�ܣ��㱻����40��Ѫ��ʣ%d��Ѫ��\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue3-=gj;
						xue-=40;
						printf("������汦��������40��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue3);
					}
					if(xue <= 0) {
						printf("������汦��ʧȥ��ս��������");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue3 <= 0) {
					money+=120;
					dj+=100;
					printf("��Ӯ�ˣ���120Ԫ��100��������%.2fԪ,%d����", money,dj);
				}
			}//3��
			if(mx == '4') {
				//4
				xue4=400;
				while(xue4>0) {
					printf("�������˹������Ƿ����ܣ�(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"���ܳɹ���"<<endl;
							break;
						} else {
							xue-=80;
							printf("����ʧ�ܣ��㱻����80��Ѫ��ʣ%d��Ѫ��\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue4-=gj;
						xue-=80;
						printf("������汦��������40��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue4);
					}
					if(xue <= 0) {
						printf("������汦��ʧȥ��ս��������");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue4 <= 0) {
					money+=240;
					dj+=200;
					printf("��Ӯ�ˣ���240Ԫ��200����,����%.2fԪ,%d����", money,dj);
				}
			}//4��
			if(mx == '5') {
				//5
				xue5=800;
				while(xue5>0) {
					printf("����������ţ����˹������Ƿ����ܣ�(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"���ܳɹ���"<<endl;
							break;
						} else {
							xue-=160;
							printf("����ʧ�ܣ��㱻����160��Ѫ��ʣ%d��Ѫ��\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue5-=gj;
						xue-=160;
						printf("������汦��������160��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue5);
					}
					if(xue <= 0) {
						printf("������汦��ʧȥ��ս��������");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue5 <= 0) {
					money+=480;
					dj+=400;
					printf("��Ӯ�ˣ���480Ԫ��400����,����%.2fԪ,%d����", money,dj);
				}
			}//5��
			if(mx == '6') {
				//6
				xue6=800;
				while(xue6>0) {
					printf("mage����Ƥ����˹������Ƿ����ܣ�(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"���ܳɹ���"<<endl;
							break;
						} else {
							xue-=320;
							printf("����ʧ�ܣ��㱻����320��Ѫ��ʣ%d��Ѫ��\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue6-=gj;
						xue-=320;
						printf("������汦��������3200��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue6);
					}
					if(xue <= 0) {
						printf("������汦��ʧȥ��ս��������");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue6 <= 0) {
					money+=960;
					dj+=800;
					printf("��Ӯ�ˣ���960Ԫ��800����,����%.2fԪ,%d����", money,dj);
				}
			}//6��
			if(mx == '7') {
				//7
				xue7=1600;
				while(xue7>0) {
					printf("ȫ�����޳��˹������Ƿ����ܣ�(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"���ܳɹ���"<<endl;
							break;
						} else {
							xue-=640;
							printf("����ʧ�ܣ��㱻����640��Ѫ��ʣ%d��Ѫ��\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue7-=gj;
						xue-=640;
						printf("������汦��������6400��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue7);
					}
					if(xue <= 0) {
						printf("������汦��ʧȥ��ս��������");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue7 <= 0) {
					money+=1980;
					dj+=1600;
					printf("��Ӯ�ˣ���1980Ԫ��1600����,����%.2fԪ,%d����", money,dj);
				}
			}//7��
			if(mx == '8') {
				//8
				xue8=3200;
				while(xue8>0) {
					printf("mage������˹x,y&z`���˹������Ƿ����ܣ�(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"���ܳɹ���"<<endl;
							break;
						} else {
							xue-=1280;
							printf("����ʧ�ܣ��㱻����1280��Ѫ��ʣ%d��Ѫ��\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue8-=gj;
						xue-=1280;
						printf("������汦��������12800��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue8);
					}
					if(xue <= 0) {
						printf("������汦��ʧȥ��ս��������");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue8 <= 0) {
					money+=3960;
					dj+=3200;
					printf("��Ӯ�ˣ���3960Ԫ��3200����,����%.2fԪ,%d����", money,dj);
				}
			}//8��
			if(mx == '9') {
				//9
				xue9=6400;
				while(xue9>0) {
					printf("��ŷ�����˹������Ƿ����ܣ�(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"���ܳɹ���"<<endl;
							break;
						} else {
							xue-=2560;
							printf("����ʧ�ܣ��㱻����2560��Ѫ��ʣ%d��Ѫ��\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue9-=gj;
						xue-=25600;
						printf("������汦��������25600��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue9);
					}
					if(xue <= 0) {
						printf("������汦��ʧȥ��ս��������");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue9 <= 0) {
					money+=7980;
					dj+=6400;
					printf("��Ӯ�ˣ���7980Ԫ��6400����,����%.2fԪ%d����", money,dj);
				}
			}//9��
			if(mx == 'a'||mx=='A' ) {
				//10
				xue10=12800;
				while(xue10>0) {
					printf("������mage��ŷ��x,y&z���˹������Ƿ����ܣ�(Y or N)");
					cin>>mxp;
					srand((unsigned)time(NULL));
					sj = rand();
					if(mxp == 'Y'||mxp=='y') {
						if(sj%2==0) {
							cout<<"���ܳɹ���"<<endl;
							break;
						} else {
							xue-=5120;
							printf("����ʧ�ܣ��㱻����5120��Ѫ��ʣ%d��Ѫ��\n", xue);
						}
					}
					if(mxp == 'N'||mxp=='n') {
						xue10-=gj;
						xue-=51200;
						printf("������汦��������51200��Ѫ��ʣ%d��Ѫ��\n���˱�����%d��Ѫ��ʣ%d��Ѫ��\n",xue,gj,xue10);
					}
					if(xue <= 0) {
						printf("������汦��ʧȥ��ս��������");
						Sleep(10000000);
						return 0;
					}
				}
				if(xue10 <= 0) {
					money+=15960;
					dj+=12800;
					printf("��Ӯ�ˣ���1556Ԫ��12800����,����%.2fԪ,%d����", money,dj);
				}
			}//10��

		}//ð��ģʽ��
		if(ms=='2') { //�̵�ģʽ
			printf("\n E--�˳�\n 1--����ҩˮI(��20������)--40Ԫ\n 2--����ҩˮII(��40������)--80Ԫ\n 3--����ҩˮIII(��80������)--160Ԫ\n 4--����ҩˮI(��160��Ѫ)--40Ԫ\n 5--����ҩˮII(��320��Ѫ)--80Ԫ\n 6--����ҩˮIII(��640��Ѫ)--160Ԫ\n 7--��������\n����Ǯ�����Զ�����");
			cin>>shop;
			if( (shop == '1') && (money >= 40) ) {
				gj += 20;    //1
				money-=40;
				printf("\n\n�ɹ�������%d�㹥��,%.2fԪ\n" ,gj,money);
			}
			if( (shop == '2') && (money >= 80) ) {
				gj += 40;    //2
				money-=80;
				printf("\n\n�ɹ�������%d�㹥��,%.2fԪ\n" ,gj,money);
			}
			if( (shop == '3') && (money >= 160) ) {
				gj += 80;    //3
				money-=160;
				printf("\n\n�ɹ�������%d�㹥��,%.2fԪ\n" ,gj,money);
			}
			if( (shop == '4') && (money >= 40) ) {
				xue += 160;    //4
				money-=40;
				printf("\n\n�ɹ�������%d��Ѫ,%.2fԪ\n" ,xue,money);
			}
			if( (shop == '5') && (money >= 80) ) {
				xue += 320;    //5
				money-=80;
				printf("\n\n�ɹ�������%d��Ѫ,%.2fԪ\n" ,xue,money);
			}
			if( (shop == '6') && (money >= 160) ) {
				xue += 640;    //6
				money-=160;
				printf("\n\n�ɹ�������%d��Ѫ,%.2fԪ\n" ,xue,money);
			}
			if(shop=='e'||shop=='E')goto loop;
			if( shop == '7') {
				//7
				printf("\n E--�˳�\n 1--������ҩˮ\n 2--������ҩˮ");
				cin>>pl;
				if(pl=='e'||pl=='E')goto loop;
				if(pl == '1') {
					printf("������Ҫ�ӵĹ�����");
					cin>>s2;
					s1 = s2/20.00*40;
					if(money >= s1) {
						gj+=s2;
						money-=s1;
						printf("\n\n�ɹ�������%d�㹥��,%.2fԪ\n" ,gj,money);
					}
				}
				if(pl == '2') {
					printf("������Ҫ�ӵ�Ѫ��");
					cin>>s2;
					s1 = s2/160.00*40;
					if(money >= s1) {
						xue+=s2;
						money-=s1;
						printf("\n\n�ɹ�������%d��Ѫ,%.2fԪ\n" ,xue,money);
					}
				}
			}//7��
		}//�̵�ģʽ��
		if(ms=='3') { //״̬��ʾģʽ
			printf("\n����%d��Ѫ��%d�㹥����%.2fԪ��\n" ,xue,gj,money);
		}//״̬��ʾģʽ
		if( (ms!='1') && (ms!='2') && (ms!='3') &&(ms!='4')&&(ms!='5')) {
			cout<<"\n����ĺ��Ӳ��Ǻú��ӡ�";
		}
		if(ms=='4') {
			printf("\n���Ķ����ʱ�����ˣ�����������������֣�");
			cin>>db;
			printf("\n��������Ķ�ע��");
			cin>>dbm;
			srand((unsigned)time(NULL));
			bd1 = rand();
			if( bd1 % 2 == dbm % 2 && money >= dbm) {
				printf("\n��Ӯ�ˣ��Ӷ�ע��1.5����");
				money = money+0.5*dbm;
			}
			if( bd1 % 2 != dbm % 2 && money >= dbm) {
				printf("\n�����ˣ���ȥ��ע��");
				money-=dbm;
			}
		}
		if(ms=='5') {
gly:
			printf("\n (EEEE--�˳�) ���������Ա����(��λ)��");
			cin>>gl1>>gl2>>gl3>>gl4;
			if((gl1=='E'&&gl2=='E'&&gl3=='E'&&gl4=='E')||(gl1=='e'&&gl2=='e'&&gl3=='e'&&gl4=='e'))goto loop;
			if(gl1=='0'&&gl2=='8'&&gl3=='2'&&gl4=='5') {
				system("cls");
g1:
				printf("\n �ɹ���\n (E--�˳�)����%d��Ѫ��%d�㹥����%.2fԪ��\n 1--��Ѫ��\n 2--�Ĺ���\n 3--�Ľ�Ǯ\n",xue,gj,money);
				cin>>gd;
				if(gd=='1')goto gd1;
				if(gd=='2')goto gd2;
				if(gd=='3')goto gd3;
			} else {
				system("cls");
				printf("\n����\n");
				goto gly;
			}
		}
	}//�������� 1221
gd1:
	printf("������Ѫ��");
	cin>>gl;
	xue=gl;
	goto g1;
gd2:
	printf("�����빥����");
	cin>>gl;
	gj=gl;
	goto g1;
gd3:
	printf("�������Ǯ��");
	cin>>gl;
	money=gl;
	goto g1;
	return 0;
}
