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