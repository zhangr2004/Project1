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