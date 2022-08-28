#define _CRT_SECURE_NO_WARNINGS 1
//    8.25
//do while语句
#include <stdio.h>
//int main()
//{
//	int a = 1;
//	do
//	{
//		printf("%d ", a);
//		a++;
//	} while (10 >= a);
//	return 0;
//}
//int main()
//{
//	long n = 0;
//	scanf("%d", &n);
//	long long a = n;
//	while (1 < n)
//	{
//		a = a * (n - 1);
//		n--;
//	}
//	printf("%d", a);
//    return 0;
//}
//int main()
//{
//	int i = 0, a = 1, n = 0;
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		a *= i;
//	}
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int i = 0, a = 1, sum = 0, ret = 1;
//	for (i = 1;10 >= i;i++)
//	{
//		for (a = 1,ret = 1;a <= i;a++)
//		{
//			ret *= a;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//查找目标
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//第一个元素下标
//	int right = sz - 1;//最后一个元素下标
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//二分
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("查找成功%d",mid);
//			break;
//		}
//	}
//	return 0;
//}
//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "zhang!!!!!!\0";
//	char arr2[] = "###########\0";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];//元素替换
//		printf("%s\n", arr2);
//		Sleep(1000);//休眠一秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//	return 0;
//}
#include <string.h>
//int main()
//{
//	int i = 1;
//	
//	
//		for(i = 1;3 >= i;i++)
//		{
//			char a[20] = { 0 };
//			printf("请输入密码：");
//			scanf("%s", a);
//			if (strcmp(a,"zhang")==0)//字符串比较不能使用“==”，而应该使用函数strcmp,字符串相同时会输出0.
//			{
//				break;
//			}
//		}
//	if (3 > i)
//	{
//		printf("登陆成功");
//	}
//	if (3 <= i)
//	{
//		printf("登陆失败");
//	}
//	return 0;
//}

//     8.26
//int main()
//{
//	int i;
//	for (i = 1;100 >= i;i++)
//	{
//		if ((i % 3) == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i, a, b, ret = 0;
//	scanf("%d %d", &a, &b);
//	for (i = 1;i <= a||i<=b;i++)
//	{
//		if (a% i == 0 && b % i == 0)
//		{
//			ret = i;
//		}
//	}
//	printf("%d", ret);
//	return 0;
//}


//#include <math.h>
//int main()
//{
//	int i=100, j=0;
//	for (i = 100;i <= 200;i++)
//	{
//		for (j = 2;j < i;j++)
//		{
//			if (0 == i % j)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//      8.28
//sqrt() 函数用于计算开平方,使用前需要引用
// goto 语句：很多时候不会使用，必须使用的场景不多
//int main()
//{
//flag:
//	printf("我是个烧饼");
//	goto flag;
//	return 0;
//}
//goto语句无视break；使用过多会导致程序混乱
//关机程序shutdown -s -t 60
//取消关机shutdown -a
//C语言中的system（）专用于执行系统命令
#include <string.h>
#include <stdlib.h>
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//again:	
//	printf("你的电脑将在一分钟内关机，输入'我是个傻逼'以阻止关机\n");
//	scanf("%s", arr);
//	if (strcmp(arr, "我是个傻逼") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}