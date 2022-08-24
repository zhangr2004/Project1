#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
extern int h;
//int main()
//{
//	printf("%d\n", h);
//	return 0;
//}


//8.14
//转义字符
//1.   \'  用于表示字符常量
//当你想在屏幕上打印符号’时，需要加上\进行转义
//int main()
//{
//	printf("%c", '\'');
//	return 0;
//}
//2.   \t  水平制表符，等同于tab键
//3.   \a  警告符，发出警示音
//int main()
//{
//	printf("\a");
//	return 0;
//}
//转义字符很多，无需一一掌握
//特殊：  \符后加三个八进制数字表示一个八进制数,\x符后加两个十六进制数字表示一个16进制数
//int main()
//{
//	printf("%d", '\20');
//	printf("%d", '\x50');
//	return 0;
//}
//转义字符在字符长度计算中算作一个字符


//     8.15
//选择语句  if else
//int main()
//{
//	char input = 'y';//存储字符用char
//	printf("你是笨比吗?（y/n）\n");
//	scanf("%c", &input);
//	if (input == 'y')//一个‘=’含义为赋值，条件比较需要两个‘=’，即‘==’
//		printf("你好，笨比\n");
//	else//也可使用  if(input=='n') ,但此时输入y和n以外的字符不会有反应
//		printf("胡扯\n");
//	return 0;
//}
//循环语句while
//int main()
//{
//	int money = 0;
//	while (money < 10000)
//	{     printf("氪金%d\n", money);
//	      money++;
//	 }//while后有多条指令时需加大括号，否则只执行之后的第一条指令
//	if (money == 10000)
//		printf("万氪带佬");
//	return 0;
//}
//函数
//Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}//设定函数，返回结果值
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum=Add(a, b);//引用函数，简化繁复操作
//	printf("%d", sum);
//	return 0;
//}
//数组--一组相同类型元素集合
//int main()
//{
//	int arr[5] = { 1,3,5,7,9 };//创建了数组并存储5个元素
//	char ch[5] = { 'a','b','c' };//元素未满--不完全初始化，剩余未满元素默认为0
//   //访问数组时用下标访问，第一个元素下标为0，第二个为1，以此类推
//	printf("%d", arr[2]);
//	int i = 0;
//	while (i < 5)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}//以此方式访问数组中所有元素
//	return 0;
//}


//     8.16
//操作符（初识）
//算术操作符: + - * / %
//移位操作符：>>右移操作符，<<左移操作符
// 位操作符：&按位与， |按位或， ^按位异或。
// 赋值操作符：=，+=，-=，*=，/=，&=，|=，^=,<<=,>>=
//int main()
//{
//	//int a = 9 / 2;  
//	// printf("%d", a);最终结果为4，int引入的是整型
//	//float a = 9 / 2;  
//	//printf("%f",a);最终结果仍为4.000，因为整型9和2的缘故，程序进行了整型运算
//	//float a = 9 / 2.0;
//	//printf("%f",a);最终结果为4.500
//	//int a = 9 % 2;
//	//printf("%d",a);//最终结果为1，% -- 取模（余数）
//    
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = a << 1;
//	printf("%d", b);
//	return 0;
//}
//移位操作符是在数字二进制表示方法上进行移位，上面的2用二进制表示方法为32个比特位的00000000000000000000000000000010，左移一位后就是00000000000000000000000000000100，对应数字4，所以b打印的结果是4.

//a += 5 <=> a = a + 5


//     8.17
//关键字
//关键字不能做变量名
//auto 自动 每个局部变量都是auto修饰的
//int main()
//{
//	auto int a = 10;//a自动生成，自动销毁 - 自动变量，一般情况下auto会省略
//	return 0;
//}
//register 寄存器关键字
//int main()
//{
//	register int b = 100;//建议b的值存放在寄存器中
//	//计算机中数据存放在硬盘、内存、网盘、高速缓存、寄存器中
//	//寄存器
//	//高速缓存
//	//内存
//	//硬盘
//	//网盘         从下往上造价越来越高，速度越来越快，空间越来越小
//	//大量/频繁使用的数据放入寄存器能使效率更高
//
//
//	return 0;
//}
//typedef 类型重定义
//typedef const int c_int;//简化指令
//int main()
//{
//	const int a = 500;
//	c_int a = 500;//两种表达方式效果相同
//	return 0;
//}
//static 静态的
   //1.static修饰局部变量，改变局部变量的生命周期
   //2.static修饰全局变量，使得全局变量只能在自己所在的源文件内使用
   //3.static修饰函数，使得函数只能在自己所在的源文件内使用
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d\t", a);
//}
//
//int main()
//{
//	int c = 0;
//	while (c < 10)
//	{
//		test();
//		c++;
//	}
//	return 0;
//}//未使用static修饰变量，最终结果为打印10个2
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\t", a);
//}
//
//int main()
//{
//	int c = 0;
//	while (c < 10)
//	{
//		test();
//		c++;
//	}
//	return 0;
//}//static修饰变量a后输出结果为2-11，原因是变量a经过了static的修饰，在test执行结束后不会被销毁，继续进入第二次循环。
//static Add(int x, int y)
//{
//	return x + y;
//}
//   常量和宏
//define是一个预处理指令
//1.定义符号（常量）
//2.定义宏
//#define Add(X,Y) X+Y//定义宏
//int main()
//{
//	printf("%d",Add(3, 4));
//	return 0;
//}


//        8.18
//指针
//操作系统 32/64位：32/64根地址线 - 物理上的，真实存在的线，通电时正电为一，负电为零.
//电信号转化为数字信号：0/1组成的二进制序列，共有2^32/64种序列，每个序列都可以作为内存单元的地址
//一个内存单元的大小是一个字节，因此32位操作系统支持的最大内存为4GB
//int main()
//{
//	int a = 10;
//	printf("%p", &a);//%p专用于打印地址
//	int * pa = &a;//pa用于存放地址，称为指针变量
//	//星号说明pa是指针变量，int说明指向的对象（即变量a）的类型
//	*pa = 20;//解引用操作，通过储存在pa中的地址找到a
//	return 0;
//}
/*int main()
{
	printf("%d\n",sizeof(char*));
	printf("%d\n",sizeof (short*)) ;
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n",sizeof(float*));
	printf("%d\n", sizeof(double*));

	return 0;
}*///指针变量大小都相同
//结构体
//让C语言创建新的类型
//struct book
//{
//	char name[20];//成员变量
//	float price;
//
//};
//int main()
//{
//	struct book a = { "c语言从入门到入坟",50.0 };//结构体的创建和初始化
//	printf("%f\n", a.price);
//	struct book * pa = &a;//存指针方式,结构体指针
//	printf("%s\n", pa->name);
//	return 0;
//}



//    8.23
//int F(int a,int b)
//{
//	if (a >= b)
//		return  a;
//	else
//		return b;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int max = F(x, y);
//	printf("%d",max);
//	return 0;
//}
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//	return 0;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 5 == 0)
//		printf("YES");
//	else
//		printf("NO");
//
//	return 0;
//}
//语句
//顺序结构  选择结构   循环结构
//分支语句 if else
//由一个分号隔开的就是一条语句
//  &&符号表示“且”关系
//C语言中0表示假，非0表示真
//当程序运行到return时会直接终止，不会继续向下运行
//int main()//判断一个数是否是奇数
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = a % 2;
//	if (1 == b)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (100 >= i)
//	{
//		
//		int x = i % 2;
//		if (1 == x)
//		{
//			printf("%d\n", i);
//			i++;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	return 0;
//}
//         8.24
//分支语句 switch 
//switch语句中只能用整型变量
//switch允许嵌套使用
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//	default:
//		printf("不知道");
//		break;
//	}
//	return 0;
//}
// 循环语句 while
//在while循环中，break用于永久终止循环
//在while循环中，continue的作用是跳过本次循环
//EOF-end of lile  文件结束标志
//getchar 输入一个字符
//outchar 输出一个字符  输入ctrl+z使getchar读取结束
//键盘上的操作会先被录入到缓冲区，接下来由程序读取
//例：
//int main()
//{
//	char password[20] = {0};
//	printf("请输入密码\n");
//	scanf("%s", password);//在输入回车触发scanf指令时会在缓冲区留下换行符\n
//	printf("请确认密码（Y/N）");
//	int ch = getchar();//getchar本质是读取缓冲区字符，此时的getchar会自动读取缓冲区的\n并进入if判定
//	if ('Y' == ch)//用\n判定的结果进入else，导致输入Y和N之前就会显示确认失败
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//	return 0;
//}

//解决方法
// 一是在正式使用的getchar前再插入getchar指令来清空缓冲区
//例：
/*int main()
{
	char password[20] = {0};
	printf("请输入密码\n");
	scanf("%s", password);
	printf("请确认密码（Y/N）");
	getchar();
	int ch = getchar();
	if ('Y' == ch)
	{
		printf("确认成功");
	}
	else
	{
		printf("确认失败");
	}
	return 0;
}*///但该方法在一些情况下依然会失效，如密码中含有空格，则scanf只读取空格之前的内容，留下的内容也会导致出现bug
//二是使用while循环语句将全部元素读取干净
//例
//int main()
//{
//	char password[20] = {0};
//	printf("请输入密码\n");
//	scanf("%s", password);
//	printf("请确认密码（Y/N）");
//	int a = 0;
//	while ((a = getchar()) != '\n')
//	{
//		;
//	}//使用while循环直到清除空格
//	int ch = getchar();
//	if ('Y' == ch)
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//	return 0;
//}//此方法读取的password只能读到空格之前
//符号||以为数学中的或
//for循环
//int main()
//{
//	int a = 0;//此处变量a初始化的值会影响循环结果
//	while (a < 10)
//	{
//		printf("%d", a);
//		a++;
//	}
//	return 0;
//}
//上述循环用for语句的表示方式是
//int main()
//{
//	int a = 0;
//	for (a = 1;10 >= a;a++)
//	{
//		printf("%d ", a);
//	}
//	return 0;
//}
//一些变种：
//int main()
//{
//	for (;;)
//	{
//		printf("乐 ");
//	}
//	return 0;
//}//无限循环
