#include<cstdio>
#include<cstdlib>
#include<windows.h>
using namespace std;
int choice;
char a=0,b=0,c=0,d=0;
int user_input;
void wait()
{
Sleep(100);
user_input=getchar(); 
}
void cls()
{
Sleep(100);
system("cls"); 
}
int main(int argc, char *argv[])
{
start:cls();
goto a1;
gameover:printf("��Ϸ������");
printf("���س�������");
user_input=getchar();
if(user_input=13)
goto start;

a1:printf("������Ϸ��ʼ��");
user_input=getchar();
printf("��ס��ɽ�е�ľ���");
wait();
printf("ĳ�����ϣ����Ҫ���ţ�ȴ���ֲ�Զ����һ����δ�����ĳǱ���");
wait();
printf("���ں��棬���߽�������");
wait();
goto a4;
a2:printf("ͻȻ���������������֧�����㱻�����ˡ�");
wait();
printf("End01:�Ǳ���ϲ��û��ò�ĺ���");
wait();
goto gameover;
a3:cls();
printf("�������������ţ��Ŵ��ˡ�");
wait();
printf("��������һ���Ի谵�Ĵ�����ǽ���ϵĻ���ṩ��������");
wait();
printf("�����������߽�ȥʱ���������������ˡ�\n");
printf("1-���Ŵ����ӳ�ȥ\n");
printf("2-����ǰ��");
s3:wait();
switch(user_input)
{
case '1':goto a10;
case '2':goto a13;
default:goto s3; 
}
a4:cls();
printf("�������Ǳ�ǰ��");
wait();
printf("�Ǳ��������ܹ��ϣ��žɵĺ�ɫľ�Ž����š�\n");
wait();
printf("1-���Ž�ȥ\n");
printf("2-������������\n");
printf("3-�Ҳ����ȥ��");
s4:wait();
switch(user_input)
{
case'1':goto a8;
case'2':goto a15;
case'3':goto a16;
default:goto s4;
}
a5:printf("......");
wait();
printf("�����������֣�����һ������û�п�������ȴ�����ˡ�");
wait();
printf("�������ȥ���������������ļ���ڵ����㡣");
wait();
printf("End03:�Ǳ���ϲ����С�ĺ��ӡ�");
wait();
goto gameover;
a6:cls();
printf("���ƿ������ţ�������һ��С����.");
wait();
printf("ǽ���ϲ���һ֧��ѡ�");
wait();
printf("���ϵĽ����ƺ�ͨ�������.\n");
wait();
printf("1-�ӽ�����ȥ\n");
printf("2-�Ȱѻ�Ѷ���ȥ");
s6:wait();
switch(user_input)
{
case '1':goto a11;
case '2':goto a12;
default:goto s6;
}
a7:printf("��������һ����ɫ�������ɫ���룬���涼ʢ��������\n");
wait();
printf("1-�Ƚ��������\n");
printf("2-�����������\n");
printf("3-����̽��");
s7:wait();
switch(user_input)
{
case '1':goto a17;
case'2':goto a14;
case'3':goto a19;
default:goto s7;
}
a8:cls();
printf("���ƿ��ţ�������һ����С�ķ��ݣ����Ե�ǽ���кܶ෽�ס�\n");
wait();
goto a2;
a9:system("cls");
printf("���ȵľ�ͷ��һ�����䣬�㿴��һ�ų����Ĳ�����\n");
wait();
goto a7;
a10:cls();
printf("����ͼ���ţ��Ʋ�����");
wait();
printf("�㿴�����ϵİ��֣��뵽�����ſ�����Ҫ�������");
wait();
goto a5;
a11:cls();
printf("��������ȥ������յ�����ʲôҲû�С�");
wait();
printf("����е��������ѵ�ʱ���Ѿ����ˡ�");
wait();
printf("��������Ϣ��");
wait();
printf("End04:�Ǳ���ϲ�����ĵĺ��ӡ�");
wait();
goto gameover;
a12:cls();
a=2;
printf("��ѻ�Ѷ���ȥ����Ѻܿ�Ϩ���ˡ�");
wait();
printf("��������û��ֱ������ȥ���˻ص��˴�����\n");
wait();
printf("1-����̨��\n");
printf("2-ȥ����");
s12:wait();
switch(user_input)
{
case '1':goto a18;
case '2':goto a9;
default:goto s12;
}
a13:cls();
printf("�������������Щ�谵��");
wait();
printf("�㿴�������������һ���ţ������������������ϵ�̨�ף��ұ���һ�����ȡ�\n");
wait();
printf("1-����������\n");
printf("2-����̨��\n");
printf("3-ȥ�����Ǳ߿���");
s13:wait();
switch(user_input)
{
case '1':goto a6;
case '2':goto a18;
case '3':goto a9;
default:goto s13;
}
a14:cls();
printf("��ȹ��������������������׿��ŵ��֡�");
printf("\n�������ĳ������桿");
wait();
printf("���������.");
goto a20;
a15:cls();
printf("�����������ţ���һ�㷴Ӧ��û�С�\n");
wait();
printf("1-����������\n");
printf("2-���Ž�ȥ\n");
printf("3-�����ȥ��");
s15:wait();
switch(user_input)
{
case '1':goto a3;
case '2':goto a8;
case '3':goto a16;
default:goto s15;
}
a16:cls();
printf("�㲢û�н���Ǳ������ǻص����С�");
wait();
printf("�Ǳ����������˼��죬����֮���㷢�ֳǱ������ˡ�");
wait();
printf("�������������Ǳ��������ڹ���������ԭ�������");
wait();
printf("End02:�Ǳ���ϲ��û��ð�վ���ĺ��ӡ�");
wait();
goto gameover;
a17:cls();
printf("�������룬һ��������");
wait();
printf("��ܿ�Ͳ�����˸��е����������ж�������");
wait();
printf("End05:�Ǳ���ϲ������ĺ��ӡ�");
wait();
goto gameover;
a18:cls();
printf("������¥�ݣ�������ǰ����һ��������");
wait();
printf("�����һ��˫�����ţ��ұ���һ�ȵ������š�\n");
wait();
printf("1-����˫������\n");
printf("2-���뵥������\n");
printf("3-��������������ǰ��");
s18:wait();
switch(user_input)
{
case '1':goto a26;
case '2':goto a27;
case '3':goto a28;
default:goto s18;
}
a19:cls();
printf("�㷢���ⷿ��ľ�ͷͨ����Ƴ����ķ��䡣");
wait();
printf("���ȥ������һȦ��һ������");
wait();
printf("������ص��˴�����\n");
wait();
printf("1-ȥ¥��\n");
if(a==2)
printf("2-�߽��м�ķ��䣨��̽����");
else
printf("2-�߽��м�ķ���");
s19:wait();
switch(user_input)
{
case '1':goto a18;
case '2':goto a19s;
default:goto s19;
}
a19s:if(a==2)
{
printf("��������ĵ����ҹ���Σ�գ��㻹�Ǿ�����¥��");
wait();
goto a18;
}
else
goto a6;
a20:printf("������������Ȧ���ҵ��˳�����");
wait();
printf("����������·����ҵ���һ���š�\n");
b=1;
wait();
printf("1-�𿪿���\n");
printf("2-�������ص���������¥\n");
if(a==2)
printf("3-�߽������м�ķ��䣨��̽����");
else
printf("3-�߽������м�ķ���");
s20:wait();
switch(user_input)
{
case '1':goto a25;
case '2':goto a18;
case '3':goto a19s;
default:goto s20;
}
a21:cls();
printf("������ħ�����š���");
wait();
printf("���涼����ֵķ��ţ���������");
wait();
goto a29;
a22:cls();
printf("��ѡ����ء�����ܳ������");
wait();
printf("...");
wait();
printf("ͻȻ��������㵹��������");
wait();
printf("�㱻ѹ�������档");
wait();
printf("���ͷ���ҳ�Ѫ�ˣ��������:����Ȼ�ǻ��ذ�����");
wait();
printf("End07:�Ǳ���ϲ��Ͷ��ȡ�ɵĺ��ӡ�");
wait();
goto gameover;
a23:cls();
printf("�㷭�����Ǳ���ʶ����");
wait();
printf("����˵��Ǳ��������Եģ�����һϵ�жԳǱ����˵Ľ��ܡ�");
wait();
d=1;
goto a29;
a24:cls();
printf("�㷭���Ǳ��飬������ֵ�ͼ������е����ʡ�");
wait();
printf("���������ҵ������������ˡ�");
wait();
printf("End08:�Ǳ���ϲ������Ȱ��ĺ��ӡ�");
wait();
goto gameover;
a25:cls();
printf("����ŷ⣬����һ�ɷ۳�ʹ�㲻ͣ���ԡ�");
wait();
printf("�����ֽ��д��:�������Ķ��ۣ������ա�");
wait();
printf("End06:�Ǳ���ϲ����̽��˽�ĺ��ӡ�");
wait();
goto gameover;
a26:cls();
printf("���ƿ����ţ�������俴������һ�������ҡ�");
wait();
printf("��ܶ����ƽ�еذڷ��ţ�ÿ������ϵ��鿴������һ���ġ�");
wait();
printf("����˲��鼹�ϵĻҳ�����ǿ������������");
wait();
goto a29;
a27:cls();
printf("����������š�");
wait();
printf("����ķ����С��������һ������ɳ©��ȼ���Ż��档");
wait();
printf("��Χ�Ǵ��СС���Թܣ���ƿ������װ�Ÿ�����ɫ��Һ�塣");
wait();
printf("��ʱ��һֻ��������������Ұ�������ܵ�����Ĵ��ڣ�һŤͷ�����ˡ�");
wait();
printf("���ǣ����Ķ���������һ����ס����ɫƿ�ӡ�\n");
wait();
printf("1-��ƿ�ӷ�����\n");
printf("&quot;2-������");
s27:wait();
switch(user_input)
{
case '1':goto a30;
case '2':goto a31;
default:goto s27;
}
a28:cls();
printf("�����������ȵľ�ͷ");
wait();
goto a32;
a29:cls();
printf("��Ҫ�Ķ��ı��飿\n");
wait();
printf("1-��ħ�����š�\n");
printf("2-�����ء�\n");
printf("3-���Ǳ���ʶ��\n");
printf("4-��ǧ���������\n");
printf("5-����");
s29:wait();
switch(user_input)
{
case '1':goto a21;
case '2':goto a22;
case '3':goto a23;
case '4':goto a24;
case '5':goto a2a;
default:goto s29;
}
a2a:cls();
printf("Ҫȥ���\n");
wait();
printf("1-���浥���ŵķ���\n");
printf("2-����������ȥ");
s2a:wait();
switch(user_input)
{
case '1':goto a27;
case '2':goto a28;
default:goto s2a;
}
a30:cls();
printf("��һ��ץס���ƿ�ӡ�");
wait();
printf("ƿ����װ������ɫҺ�壬��ǩ��д���ױ���Ʒ��");
wait();
c=1;
printf("�������������");
wait();
printf("����Ҫȥ���\n");
wait();
printf("1-��������˫������\n");
printf("2-�������ȵ��");
s30:wait();
switch(user_input)
{
case '1':goto a26;
case '2':goto a28;
default:goto s30;
}
a31:cls();
printf("ƿ�������������ӱ�Ե��Ȼ��ˤ�ڵ��ϡ�");
wait();
printf("ƿ������ǲ��ȶ����ʣ���ը��������������Ӧ��");
wait();
printf("�㱻ը���ˡ�");
wait();
printf("End09:�Ǳ���ϲ����Į�ĺ��ӡ�");
wait();
goto gameover;
a32:cls();
printf("������ǰվ��һ�����ס�");
wait();
printf("��֪Ϊʲô�����Լ�����������");
wait();
printf("�������ƶ�����ͼ������Ľ�����ɱ����\n");
wait();
printf("1-������ȭͷ����\n");
printf("2-��������\n");
if(c==1)
printf("3-���Ű��ױ�����������");
s32:wait();
switch(user_input)
{
case '1':goto a43;
case '2':goto a44;
case '3':goto a32a;
default:goto s32;
}
a32a:if(c==1)
goto a42;
else
goto s32;
a33:cls();
printf("��������������ת�䡣");
wait();
printf("�߹�����ս���ǰ���㿴����������һ���ţ�ǰ�������������ϵ�¥�ݡ�\n");
wait();
printf("1-�����Ǹ�����\n");
printf("2-����¥��");
s33:wait();
switch(user_input)
{
case '1':goto a40;
case '2':goto a41;
default:goto s33;
} 
a34:cls();
printf("����¹�����һƬ��ڡ�");
wait();
printf("��ʱ��ͻȻ�������߳�һ�������������ӣ������ߵ��������¡�");
wait();
if(b==1)
{
printf("�����ҵ��ţ�������ɳ�Ƶ������ʡ�");
wait();
goto a47;
}
goto a38;
a35:cls();
printf("��ͷ������������֪����ҩ�衣");
wait();
printf("���ڽ䱸�㲢û�г���");
wait();
goto a39;
a36:cls();
printf("��վ�ھ���ǰ��");




wait();
printf("��ͻȻ���֣������������һ�����ã�");
wait();
printf("���ܵ��˾��ţ���æת��ͷȥ��");
wait();
goto a39;
a37:cls();
printf("�����ķ����Ϸ���һ����Ƕ�ű�ʯ�Ľ�ɫ���ڡ�\n");
wait();
printf("1-��������ͷ��\n");
printf("2-���Ű������ؼ�\n");
printf("3-���Ų�������");
s37:wait();
switch(user_input)
{
case '1':goto a46;
case '2':goto a48;
case '3':goto a54;
default:goto s37;
}
a38:cls();
printf("�������㣬̾��һ�������ص����¹��С�");
wait();
printf("��ѹ��Ź����ˡ�");
wait();
a39:cls();
printf("��Ҫ�������\n");
wait();
printf("1-�¹�\n");
printf("2-��ͷ��\n");
printf("3-��ױ��\n");
printf("4-�뿪");
s39:wait();
switch(user_input)
{
case '1':goto a34;
case '2':goto a35;
case '3':goto a36;
case '4':goto a41;
default:goto s39; 
}
a40:cls();
printf("���ƿ��ţ�������һ�����ҡ�");
wait();
printf("������ʲôֵ��Ѱ�ҵĶ�����");
wait();
goto a39;
a41:cls();
printf("]������̨�ף��������㡣");
wait();
printf("���������һ�Ⱥ�ɫ��ߵĴ��ţ��������ԥ�����˽�ȥ��");
wait();
goto a45;
a42:cls();
printf("���ͳ�Сƿ�Ӷ�������");
wait();
printf("......");
wait();
printf("�䡪��");
wait();
printf("����һ����ը������������ķ�����");
wait();
printf("��Խ����ѷ�������ǰ��");
wait();
goto a33;
a43:cls();
printf("����ȭͷ������������������ C���Լ�������ð����ϷԴ����_�Ŀ�����https://www.wenkuxiazai.com/doc/0d6314f1ee06eff9aff8076e-5.html ����ȴ�о���ȭͷ����ʹ��");
wait();
printf("�����񱻼�ŭ�ˣ��ӽ����㿳����");
wait();
printf("�㱻�����ˡ�");
wait();
printf("End10:�Ǳ���ϲ���Բ������ĺ��ӡ�");
wait();
goto gameover;
a44:cls();
printf("�㲻��һ�е��ӵ��������ܵ��ʼ���ſڡ�");
wait();
goto a10;
a45:cls();
printf("�����泤���ĺ��̺�����ȥ��ĩ����һ��װ�λ����ı�����");
wait();
printf("���߽�������");
wait();
goto a37;
a46:cls();
printf("������ڴ�����ͷ�ϡ�");
wait();
printf("��ʱ����ͻȻ�������Ա߻���һ���ˡ�");
wait();
printf("���㷢������ʱ�����Ѿ����ٵ��ܿ��ˡ�\n");
wait();
printf("1-׷����\n");
printf("2-������");
s46:wait();
switch(user_input)
{
case '1':goto a52;
case '2':goto a53;
default:goto s46;
}
a47:cls();
printf("�������������");
wait();
printf("�������ŵ��˵�ͷ����������һ�Ѳ�֪���Ƶ�����ͻص��¹����ˡ�");
wait();
printf("�������¥��");
wait();
goto a50;
a48:cls();
printf("���������ڣ��ܵ��Ǳ��Ĵ��Ŵ���");
wait();
printf("���������ţ�����˿������");
wait();
printf("��ʱ����������¡¡��������");
wait();
printf("��ͷһ�����ǿ���������������ˡ�");
wait();
printf("��һ���������㡣");
wait();
printf("End11:�Ǳ���ϲ��̰�Ƶĺ��ӡ�");
wait();
goto gameover;
a49:cls();
printf("�������������ǳǱ������ˡ�");
wait();
printf("��������������Ǳ�������:");
wait();
printf("һ���������ھͻ��Ϊ�Ǳ������ˣ�����һ���ÿ���������֮ǰ�����޷��߳��Ǳ��ġ�");
wait();
printf("�������������ڣ����ͻ�õ���š�\n");
wait();
printf("1-����������ڣ��⿪����������\n");
printf("2-��Ҫ���Դ���������䣬��ʹ���������Ĵ��ۡ�");
s49:wait();
switch(user_input)
{
case '1':goto a53;
case '2':goto a61;
default:goto s49;
}
a50:cls();
printf("������¥�ݣ������������һ�Ⱥ�ɫ��ߵĴ��š�");
wait();
printf("�������ԥ���˽�ȥ��");
goto a55;
a51:cls();
printf("��첽������¥�������˲����ҡ�");
wait();
if(d=1)
goto a56;
else
goto a57;
a52:cls();
printf("����ͼ׷��������ϧ���ܵ÷ɿ죬�ܿ�ʹӴ��ų��ȥ�ˡ�");
wait();
printf("�������ȥ�����ִ����ֹصý����ġ�");
wait();
printf("����֮���㲻֪������������ʲô��");
wait();
printf("���������ƺ���ָ����ȥ��¥�Ǹ�˫���ŵķ��䣬Ҳ���ǲ����ҡ�");
wait();
goto a51;
a53:cls();
printf("�����ڱ����ϡ�");
wait();
printf("��֪Ϊ�������ƺ���ָ����ȥ��¥�Ǹ�˫���ŵķ��䣬Ҳ���ǲ����ҡ�");
wait();
goto a51;
a54:cls();
printf("�������Ӳ����˼������ڣ������ϵı�ʯ����һ�¡�");
wait();
printf("��ʱ�������ڴ���������������뿪�ˡ�\n");
wait();
printf("1-��������\n");
printf("2-�뿪�Ǳ�");
s54:wait();
switch(user_input)
{
case '1':goto a46;
case '2':goto a60;
default:goto s54;
}
a55:cls();
printf("�ڴ����һ�������ĺ��̺ͨ��ǰ��.");
wait();
printf("���̺�ľ�ͷ��װ�λ����ı�������������һ���ˡ�");
wait();
printf("�������㣬�ܿ�վ��������");
wait();
printf("���������к������ܲ������ܹ���������");
wait();
printf("��ʱ����ע�⵽�˱����Ϸ���һ����Ƕ�ű�ʯ�Ľ�ɫ���ڡ�\n");
wait();
printf("1-��������\n");
printf("2-�����ڴ����Ǳ�\n");
printf("3-���Ų�������\n");
printf("���Ǹ��˽�̸");
s55:wait();
switch(user_input)
{
case '1':goto a46;
case '2':goto a48;
case '3':goto a54;
case '4':goto a49;
default:goto s55;
}
a56:cls();
printf("���ٴδ򿪡��Ǳ���ʶ����");
wait();
printf("������������ֱ�������ˡ�");
wait();
printf("�㿪ʼ�Ķ��Ȿ�顣");
wait();
goto a58;
a57:cls();
printf("����������һ���飬�����С��Ǳ���ʶ����&quot;");
wait();
a58:cls();
printf("����˵��Ǳ�����������ĳǱ���");
wait();
printf("�������ں���Զ�޷��뿪�Ǳ���ժ�����ڣ������������޷������Ǳ����ˡ�");
wait();
printf("������̤���������Ǳ��ſ���ժ�����ڡ�");
wait();
printf("ֻ�������ߴ��������ڣ���һ�����˲ſ����߳��Ǳ���");
wait();
a59:cls();
printf("�����Ķ��ˡ�ħ�������������ú�˳����");
wait();
printf("ѧ������ο��������Ǳ��ڿ��з��衣");
wait();
printf("��ÿ������������ݻ��������������ǳǱ������ˡ�");
wait();
printf("�ܶ����ȥ�ˣ����Ѿ���ʻ�Ǳ�ȥ�������ط�����û�б��˸ҽ���Ǳ���");
wait();
printf("End12:�Ǳ�ϲ���¶��ĺ��ӡ�");
wait();
goto gameover;
a60:cls();
printf("����������ǰ�����ƴ��ţ����Ż������ˡ�");
wait();
printf("��ص��ң�������һ�������̾Ϣ��");
wait();
printf("�Ǳ������˼��죬Ȼ��������Ϣ����ʧ�� ��");
wait();
printf("�������ƽ�������");
wait();
printf("End13:�Ǳ�ϲ���ʽ�ĺ��ӡ�");
wait();
goto gameover;
a61:cls();
printf("�������뷨˵���Ǹ���������ͬ���ˣ��������һ��������");
wait();
printf("������������¥�Ǹ������ŵķ��䣬���ﴢ���Ŵ������ȶ���ħ��ҩ����");
wait();
printf("���ǽ����������򿪣������е�Һ���㵹�������Ǳ���");
wait();
printf("���������һֻ��ɫ��ƿ������ˤ�ڵ��ϡ�");
wait();
printf("ƿ��������������Ӧ����ը�ͻ�����û�����������ˡ�");
wait();
printf("�Ǳ���Ȼ���������䱻�����ˡ�");
wait();
printf("End14:�Ǳ�ϲ���㡣");
wait();
goto gameover;
return 0;
}
