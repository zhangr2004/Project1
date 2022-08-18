#define _CRT_SECURE_NO_WARNINGS 1
////第一次敲代码，跟随课上
////printf使用需要引用头文件#include<stdio.h>
#include<stdio.h>
////
////int main()
////{
////	printf("hello,c++");
////
////	return 0;
////}
////ctrl+f5运行代码
////代码 \n 换行
////一个工程中有且仅有一个main函数
////数据类型  
////字符数据类型char
////整型int
////短整型short int 或short
////长整型long
////长长整型long long
////单精度浮点型float
////双精度浮点型double
//
////int main()
////{
////	char ch = 'a';
////	int age = 20;
////	
////	return 0;
////}
//#include <stdio.h>
////int main()
////{
////	printf("%d\n",100);
////	printf("%d\n", sizeof(char));
////	printf("%d\n", sizeof(char));
////	printf("%d\n", sizeof(char));
////	return 0;
////}
////sizeof=关键字=操作符  计算类型或者变量所占空间大小
////sizeof单位——字节 byte
////计算机中单位
////1.比特位-bit 大小为一个0或1
////2.字节-byte 1byte=8bit
////3.kb 1kb=1024byte
////4.mb 1mb=1024kb
////5.gb 1gb=1024mb
////6.tb 1tb=1024gb
////7.pb 1pb=1024tb
////       8.11
////#include <stdio.h>
////int main()
////{
////	//创建了一个变量
////	//int是变量类型，age是变量名字
////	int age = 17;
////	double weight = 90.00;
////	age = age + 1;
////	weight = weight - 20.00;
////	printf("%d\n", age);
////	printf("%lf\n", weight);
////	return 0;
////}
////%d - 整型
////%f - float
////%lf - double
////长短整型也是整形
//   //变量的分类
////局部变量
////全局变量
//
////#include <stdio.h>
////int a = 100;
//////大括号外的变量为全局变量
////
////int main()
////{
////	//大括号{}内的变量为局部变量
////	int a = 10;
////	printf("%d\n", a);
////	return 0;
////}
////局部变量和全局变量名字冲突时，局部优先
////实际写代码时不建议全局变量与局部变量名字相同
////scanf是输入函数
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	a + b;
//	int sum = a + b;
//	printf("%d\n", sum);
//
//	return 0;
//}


// 8.12
//变量的作用域和生命周期
//局部变量作用范围只在变量所在范围
//全局变量作用范围是整个工程
//执行性代码必须在大括号之内

int h = 114514;
//#include <stdio.h>
////int main()
////{
////	int a = 200;
////	printf("a = %d\n", a);
////	printf("%d\n", h);
////	
////	
////	return 0;
////}
////生命周期
////变量的生命周期指的是变量的创建和销毁之间的时间段
////局部变量：进入局部范围->离开局部范围
////全局变量：程序的生命周期
//
//
////常量
////1.字面常量
////2.const修饰的常变量
////3.#define定义的标识符常量
////4.枚举常量
////#define max 999
////enum Sex
////{
////	//此种变量的未来可能取值
////	male = 5,//赋初值
////	famale,
////	secret
////};
////
////
////int main()
////{
////	   //字面常量：
////	/*114514;
////	"birthday";*/
////	   //const修饰的常变量
////	/*const int num = 200;
////	num = 40;*///系统报错，因为const修饰变量不可修改，此时num即为常变量
////	//被const修饰过的变量依然不算是常量
////	   //#define定义的标识符常量
////	/*int a = max;
////	printf("%d\n", a);
////	return 0;*/
////	   //枚举常量：可以一一列举的常量
////	//枚举关键字 enum 
////	printf("%d\n", male);
////	printf("%d\n", famale);
////	printf("%d\n", secret);
////	
////}


////    8.13
////字符串->用双引号括起来的一串字符
//// 字符串的结束标志是一个\0的转义字符，不计入字符串内容
////int main()
////{
////	"zhang";
////	return 0;
////}
////strlen使用也要引用头文件 #include <string.h>
//#include <string.h>
//
//int main()
//{
//	//字符数组：一组相同类型的元素
//	//字符串在结尾处隐藏了\0的字符
//	/*char arr[] = "hello";*/
//	char arr1[] = "zhang";
//	char arr2[] = { 'z', 'h', 'a', 'n', 'g'};
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//	//求字符串长度
//	/*int len=strlen("zhang");
//	printf("%d\n", len);*/
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}