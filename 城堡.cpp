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
gameover:printf("游戏结束。");
printf("按回车键继续");
user_input=getchar();
if(user_input=13)
goto start;

a1:printf("现在游戏开始。");
user_input=getchar();
printf("你住在山中的木屋里。");
wait();
printf("某天早上，你刚要出门，却发现不远处有一座从未见过的城堡。");
wait();
printf("出于好奇，你走近了它。");
wait();
goto a4;
a2:printf("突然，方孔中射出无数支箭，你被射死了。");
wait();
printf("End01:城堡不喜欢没礼貌的孩子");
wait();
goto gameover;
a3:cls();
printf("你又敲了三下门，门打开了。");
wait();
printf("门里面是一个略昏暗的大厅，墙壁上的火把提供了照明。");
wait();
printf("就在你慢步走进去时，门在你身后关上了。\n");
printf("1-试着打开门逃出去\n");
printf("2-继续前进");
s3:wait();
switch(user_input)
{
case '1':goto a10;
case '2':goto a13;
default:goto s3; 
}
a4:cls();
printf("你来到城堡前。");
wait();
printf("城堡看起来很古老，古旧的红色木门紧关着。\n");
wait();
printf("1-推门进去\n");
printf("2-敲三下门试试\n");
printf("3-我不想进去了");
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
printf("你用力拉把手，喀哒一声，门没有开，地面却崩塌了。");
wait();
printf("你掉了下去，在这下面满满的尖刺在等着你。");
wait();
printf("End03:城堡不喜欢胆小的孩子。");
wait();
goto gameover;
a6:cls();
printf("你推开那扇门，里面是一个小房间.");
wait();
printf("墙壁上插着一支火把。");
wait();
printf("地上的阶梯似乎通向地下室.\n");
wait();
printf("1-从阶梯下去\n");
printf("2-先把火把丢下去");
s6:wait();
switch(user_input)
{
case '1':goto a11;
case '2':goto a12;
default:goto s6;
}
a7:printf("桌子上有一个金色的碗和银色的碗，里面都盛满了汤。\n");
wait();
printf("1-喝金碗里的汤\n");
printf("2-喝银碗里的汤\n");
printf("3-继续探索");
s7:wait();
switch(user_input)
{
case '1':goto a17;
case'2':goto a14;
case'3':goto a19;
default:goto s7;
}
a8:cls();
printf("你推开门，门里是一间狭小的房屋，正对的墙上有很多方孔。\n");
wait();
goto a2;
a9:system("cls");
printf("走廊的尽头是一个房间，你看到一张长长的餐桌。\n");
wait();
goto a7;
a10:cls();
printf("你试图推门，推不开。");
wait();
printf("你看到门上的把手，想到了这门可能是要向后拉。");
wait();
goto a5;
a11:cls();
printf("你走了下去，下面空荡荡的什么也没有。");
wait();
printf("在你感到呼吸困难的时候已经晚了。");
wait();
printf("你死于窒息。");
wait();
printf("End04:城堡不喜欢粗心的孩子。");
wait();
goto gameover;
a12:cls();
a=2;
printf("你把火把丢下去，火把很快熄灭了。");
wait();
printf("你庆幸你没有直接走下去，退回到了大厅。\n");
wait();
printf("1-走上台阶\n");
printf("2-去走廊");
s12:wait();
switch(user_input)
{
case '1':goto a18;
case '2':goto a9;
default:goto s12;
}
a13:cls();
printf("大厅里光线略有些昏暗。");
wait();
printf("你看到正对着你的是一扇门，在你的左边是螺旋向上的台阶，右边是一条走廊。\n");
wait();
printf("1-进入那扇门\n");
printf("2-走上台阶\n");
printf("3-去走廊那边看看");
s13:wait();
switch(user_input)
{
case '1':goto a6;
case '2':goto a18;
case '3':goto a9;
default:goto s13;
}
a14:cls();
printf("你喝光了银碗里的汤，看到碗底刻着的字。");
printf("\n【厨房的橱柜下面】");
wait();
printf("你走向厨房.");
goto a20;
a15:cls();
printf("你敲了三下门，门一点反应都没有。\n");
wait();
printf("1-再敲三下门\n");
printf("2-推门进去\n");
printf("3-不想进去了");
s15:wait();
switch(user_input)
{
case '1':goto a3;
case '2':goto a8;
case '3':goto a16;
default:goto s15;
}
a16:cls();
printf("你并没有进入城堡，而是回到家中。");
wait();
printf("城堡持续存在了几天，在那之后，你发现城堡不见了。");
wait();
printf("你忘记了这座城堡曾经存在过，继续着原来的生活。");
wait();
printf("End02:城堡不喜欢没有冒险精神的孩子。");
wait();
goto gameover;
a17:cls();
printf("你端起金碗，一饮而尽。");
wait();
printf("你很快就察觉到了腹中的异样，你中毒身亡。");
wait();
printf("End05:城堡不喜欢馋嘴的孩子。");
wait();
goto gameover;
a18:cls();
printf("你走上楼梯，在你面前的是一条过道。");
wait();
printf("左边是一扇双开的门，右边是一扇单开的门。\n");
wait();
printf("1-进入双开的门\n");
printf("2-进入单开的门\n");
printf("3-沿着这条走廊向前走");
s18:wait();
switch(user_input)
{
case '1':goto a26;
case '2':goto a27;
case '3':goto a28;
default:goto s18;
}
a19:cls();
printf("你发现这房间的尽头通向近似厨房的房间。");
wait();
printf("你进去搜索了一圈，一无所获。");
wait();
printf("于是你回到了大厅。\n");
wait();
printf("1-去楼上\n");
if(a==2)
printf("2-走进中间的房间（已探索）");
else
printf("2-走进中间的房间");
s19:wait();
switch(user_input)
{
case '1':goto a18;
case '2':goto a19s;
default:goto s19;
}
a19s:if(a==2)
{
printf("由于那里的地下室过于危险，你还是决定上楼。");
wait();
goto a18;
}
else
goto a6;
a20:printf("你来回走了两圈，找到了厨房。");
wait();
printf("你望向橱柜下方，找到了一封信。\n");
b=1;
wait();
printf("1-拆开看看\n");
printf("2-就这样回到大厅并上楼\n");
if(a==2)
printf("3-走进大厅中间的房间（已探索）");
else
printf("3-走进大厅中间的房间");
s20:wait();
switch(user_input)
{
case '1':goto a25;
case '2':goto a18;
case '3':goto a19s;
default:goto s20;
}
a21:cls();
printf("你拿起《魔法入门》。");
wait();
printf("里面都是奇怪的符号，看不懂。");
wait();
goto a29;
a22:cls();
printf("你把《机关》从书架抽出来。");
wait();
printf("...");
wait();
printf("突然，书架向你倒了下来。");
wait();
printf("你被压在了下面。");
wait();
printf("你的头被砸出血了，临死大呼:“果然是机关啊！”");
wait();
printf("End07:城堡不喜欢投机取巧的孩子。");
wait();
goto gameover;
a23:cls();
printf("你翻开《城堡常识》。");
wait();
printf("书上说这城堡是有灵性的，还有一系列对城堡主人的介绍。");
wait();
d=1;
goto a29;
a24:cls();
printf("你翻开那本书，书中奇怪的图案令你感到不适。");
wait();
printf("你的心脏剧烈地跳动，你死了。");
wait();
printf("End08:城堡不喜欢不听劝告的孩子。");
wait();
goto gameover;
a25:cls();
printf("你拆开信封，里面一股粉尘使你不停咳嗽。");
wait();
printf("里面的纸条写着:您订购的毒粉，请验收。");
wait();
printf("End06:城堡不喜欢窥探隐私的孩子。");
wait();
goto gameover;
a26:cls();
printf("你推开了门，这个房间看起来像一个藏书室。");
wait();
printf("面很多书架平行地摆放着，每个书架上的书看起来是一样的。");
wait();
printf("你擦了擦书脊上的灰尘，勉强看清了书名。");
wait();
goto a29;
a27:cls();
printf("你打开了那扇门。");
wait();
printf("门里的房间很小，桌子上一个玻璃沙漏中燃烧着火焰。");
wait();
printf("周围是大大小小的试管，烧瓶，里面装着各种颜色的液体。");
wait();
printf("这时，一只老鼠出现在你的视野，它感受到了你的存在，一扭头逃走了。");
wait();
printf("但是，它的动作碰倒了一个塞住的绿色瓶子。\n");
wait();
printf("1-把瓶子扶起来\n");
printf("&quot;2-不管它");
s27:wait();
switch(user_input)
{
case '1':goto a30;
case '2':goto a31;
default:goto s27;
}
a28:cls();
printf("你来到了走廊的尽头");
wait();
goto a32;
a29:cls();
printf("你要阅读哪本书？\n");
wait();
printf("1-《魔法入门》\n");
printf("2-《机关》\n");
printf("3-《城堡常识》\n");
printf("4-《千万别读这个》\n");
printf("5-算了");
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
printf("要去哪里？\n");
wait();
printf("1-对面单开门的房间\n");
printf("2-沿走廊走下去");
s2a:wait();
switch(user_input)
{
case '1':goto a27;
case '2':goto a28;
default:goto s2a;
}
a30:cls();
printf("你一把抓住这个瓶子。");
wait();
printf("瓶子里装满了绿色液体，标签上写着易爆物品。");
wait();
c=1;
printf("你决定拿着它。");
wait();
printf("现在要去哪里？\n");
wait();
printf("1-对面那扇双开的门\n");
printf("2-走向走廊的深处");
s30:wait();
switch(user_input)
{
case '1':goto a26;
case '2':goto a28;
default:goto s30;
}
a31:cls();
printf("瓶子慢慢滚到桌子边缘，然后摔在地上。");
wait();
printf("瓶子里的是不稳定物质，爆炸并引起了连锁反应。");
wait();
printf("你被炸死了。");
wait();
printf("End09:城堡不喜欢冷漠的孩子。");
wait();
goto gameover;
a32:cls();
printf("在你面前站着一副盔甲。");
wait();
printf("不知为什么，它自己动了起来。");
wait();
printf("它向你移动并试图用手里的剑把你杀死！\n");
wait();
printf("1-试着用拳头打它\n");
printf("2-尝试逃跑\n");
if(c==1)
printf("3-试着把易爆物质扔向它");
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
printf("走廊在这里向左转弯。");
wait();
printf("走过这个拐角向前，你看见你的左侧有一扇门，前方则是螺旋向上的楼梯。\n");
wait();
printf("1-进入那个房间\n");
printf("2-走上楼梯");
s33:wait();
switch(user_input)
{
case '1':goto a40;
case '2':goto a41;
default:goto s33;
} 
a34:cls();
printf("你打开衣柜，里面一片漆黑。");
wait();
printf("这时，突然从里面走出一个骨瘦如柴的男子，缓缓走到床边坐下。");
wait();
if(b==1)
{
printf("“有我的信？”他用沙哑的声音问。");
wait();
goto a47;
}
goto a38;
a35:cls();
printf("床头柜里有两粒不知名的药丸。");
wait();
printf("出于戒备你并没有尝试");
wait();
goto a39;
a36:cls();
printf("你站在镜子前。");




wait();
printf("你突然发现，镜子里的你是一具骷髅！");
wait();
printf("你受到了惊吓，连忙转过头去。");
wait();
goto a39;
a37:cls();
printf("宝座的扶手上放着一顶镶嵌着宝石的金色王冠。\n");
wait();
printf("1-把它戴在头上\n");
printf("2-试着把它带回家\n");
printf("3-试着擦拭王冠");
s37:wait();
switch(user_input)
{
case '1':goto a46;
case '2':goto a48;
case '3':goto a54;
default:goto s37;
}
a38:cls();
printf("他看到你，叹了一口气，回到了衣柜中。");
wait();
printf("你把柜门关上了。");
wait();
a39:cls();
printf("你要翻看哪里？\n");
wait();
printf("1-衣柜\n");
printf("2-床头柜\n");
printf("3-梳妆镜\n");
printf("4-离开");
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
printf("你推开门，里面是一间卧室。");
wait();
printf("或许有什么值得寻找的东西？");
wait();
goto a39;
a41:cls();
printf("]你走上台阶，来到三层。");
wait();
printf("正对你的是一扇红色金边的大门，你毫不犹豫地走了进去。");
wait();
goto a45;
a42:cls();
printf("你掏出小瓶子丢向它。");
wait();
printf("......");
wait();
printf("轰——");
wait();
printf("它在一声爆炸后化作了无意义的废铁。");
wait();
printf("你越过这堆废铁继续前进");
wait();
goto a33;
a43:cls();
printf("你用拳头砸向它，它毫发无损 C语言简易文字冒险游戏源代码_文库下载https://www.wenkuxiazai.com/doc/0d6314f1ee06eff9aff8076e-5.html ，你却感觉到拳头的疼痛。");
wait();
printf("它好像被激怒了，挥剑向你砍来。");
wait();
printf("你被砍死了。");
wait();
printf("End10:城堡不喜欢自不量力的孩子。");
wait();
goto gameover;
a44:cls();
printf("你不顾一切地逃到大厅，跑到最开始的门口。");
wait();
goto a10;
a45:cls();
printf("门里面长长的红地毯延伸出去，末端是一个装饰华丽的宝座。");
wait();
printf("你走近了它。");
wait();
goto a37;
a46:cls();
printf("你把王冠戴在了头上。");
wait();
printf("这时，你突然发现你旁边还有一个人。");
wait();
printf("在你发现他的时候，他已经飞速地跑开了。\n");
wait();
printf("1-追上他\n");
printf("2-不管他");
s46:wait();
switch(user_input)
{
case '1':goto a52;
case '2':goto a53;
default:goto s46;
}
a47:cls();
printf("你把信塞给他。");
wait();
printf("他看到信点了点头，对你念了一堆不知所云的咒语就回到衣柜里了。");
wait();
printf("你决定上楼。");
wait();
goto a50;
a48:cls();
printf("你拿着王冠，跑到城堡的大门处。");
wait();
printf("你试着推门，门纹丝不动。");
wait();
printf("这时，你听到轰隆隆的响声。");
wait();
printf("回头一看，那盔甲重新组合起来了。");
wait();
printf("它一剑劈中了你。");
wait();
printf("End11:城堡不喜欢贪财的孩子。");
wait();
goto gameover;
a49:cls();
printf("他告诉你他就是城堡的主人。");
wait();
printf("他还告诉了你这城堡的诅咒:");
wait();
printf("一旦戴上王冠就会成为城堡的主人，在下一个访客来到这里之前，是无法走出城堡的。");
wait();
printf("如果你戴上了王冠，他就会得到解放。\n");
wait();
printf("1-我想戴上王冠，解开他的束缚。\n");
printf("2-我要尝试打破这个诅咒，即使付出生命的代价。");
s49:wait();
switch(user_input)
{
case '1':goto a53;
case '2':goto a61;
default:goto s49;
}
a50:cls();
printf("你跑上楼梯，正对着你的是一扇红色金边的大门。");
wait();
printf("你毫不犹豫走了进去。");
goto a55;
a51:cls();
printf("你快步来到二楼，进入了藏书室。");
wait();
if(d=1)
goto a56;
else
goto a57;
a52:cls();
printf("你试图追上他，可惜他跑得飞快，很快就从大门冲出去了。");
wait();
printf("你再想出去，发现大门又关得紧紧的。");
wait();
printf("无奈之中你不知道接下来该做什么。");
wait();
printf("不过王冠似乎在指引你去二楼那个双开门的房间，也就是藏书室。");
wait();
goto a51;
a53:cls();
printf("你坐在宝座上。");
wait();
printf("不知为何王冠似乎在指引你去二楼那个双开门的房间，也就是藏书室。");
wait();
goto a51;
a54:cls();
printf("你用袖子擦拭了几下王冠，王冠上的宝石闪了一下。");
wait();
printf("这时，你脑内传来声音：你可以离开了。\n");
wait();
printf("1-戴上王冠\n");
printf("2-离开城堡");
s54:wait();
switch(user_input)
{
case '1':goto a46;
case '2':goto a60;
default:goto s54;
}
a55:cls();
printf("在大门里，一条长长的红地毯通向前方.");
wait();
printf("红地毯的尽头是装饰华美的宝座，宝座上有一个人。");
wait();
printf("他见到你，很快站了起来。");
wait();
printf("你向他打招呼，他很诧异你能够看到他。");
wait();
printf("这时，你注意到了宝座上放着一顶镶嵌着宝石的金色王冠。\n");
wait();
printf("1-戴上王冠\n");
printf("2-把王冠带出城堡\n");
printf("3-试着擦拭王冠\n");
printf("和那个人交谈");
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
printf("你再次打开《城堡常识》。");
wait();
printf("发现上面的文字变得清晰了。");
wait();
printf("你开始阅读这本书。");
wait();
goto a58;
a57:cls();
printf("你随手拿了一本书，书名叫《城堡常识》。&quot;");
wait();
a58:cls();
printf("书上说这城堡是遭受诅咒的城堡。");
wait();
printf("戴上王冠后将永远无法离开城堡或摘下王冠，并且来访者无法看到城堡主人。");
wait();
printf("到有人踏入了这座城堡才可以摘下王冠。");
wait();
printf("只有来访者戴上了王冠，上一任主人才可以走出城堡。");
wait();
a59:cls();
printf("你又阅读了《魔法基础》，读得很顺利。");
wait();
printf("学会了如何控制这座城堡在空中飞翔。");
wait();
printf("你每天在这里过着奢华的生活，现在你就是城堡的主人。");
wait();
printf("很多年过去了，你已经驾驶城堡去了无数地方，但没有别人敢进入城堡。");
wait();
printf("End12:城堡喜欢孤独的孩子。");
wait();
goto gameover;
a60:cls();
printf("你来到大门前，轻推大门，大门缓缓打开了。");
wait();
printf("你回到家，背后传来一声轻轻的叹息。");
wait();
printf("城堡存在了几天，然后悄无声息地消失了 。");
wait();
printf("你继续了平常的生活。");
wait();
printf("End13:城堡喜欢质洁的孩子。");
wait();
goto gameover;
a61:cls();
printf("你把你的想法说给那个人听，他同意了，并提出了一个方案。");
wait();
printf("他带你来到二楼那个单开门的房间，那里储存着大量不稳定的魔法药剂。");
wait();
printf("你们将所有容器打开，将其中的液体倾倒满整个城堡。");
wait();
printf("最后，你把最后一只绿色的瓶子用力摔在地上。");
wait();
printf("瓶子引发了连锁反应，爆炸和火焰吞没了你们两个人。");
wait();
printf("城堡轰然倒塌，诅咒被打破了。");
wait();
printf("End14:城堡喜欢你。");
wait();
goto gameover;
return 0;
}
