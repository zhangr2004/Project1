#define _CRT_SECURE_NO_WARNINGS 1
//    8.25
//do while���
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
//���ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//����Ŀ��
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//��һ��Ԫ���±�
//	int right = sz - 1;//���һ��Ԫ���±�
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//����
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
//			printf("���ҳɹ�%d",mid);
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
//		arr2[right] = arr1[right];//Ԫ���滻
//		printf("%s\n", arr2);
//		Sleep(1000);//����һ��
//		system("cls");//�����Ļ
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
//			printf("���������룺");
//			scanf("%s", a);
//			if (strcmp(a,"zhang")==0)//�ַ����Ƚϲ���ʹ�á�==������Ӧ��ʹ�ú���strcmp,�ַ�����ͬʱ�����0.
//			{
//				break;
//			}
//		}
//	if (3 > i)
//	{
//		printf("��½�ɹ�");
//	}
//	if (3 <= i)
//	{
//		printf("��½ʧ��");
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
//sqrt() �������ڼ��㿪ƽ��,ʹ��ǰ��Ҫ����
// goto ��䣺�ܶ�ʱ�򲻻�ʹ�ã�����ʹ�õĳ�������
//int main()
//{
//flag:
//	printf("���Ǹ��ձ�");
//	goto flag;
//	return 0;
//}
//goto�������break��ʹ�ù���ᵼ�³������
//�ػ�����shutdown -s -t 60
//ȡ���ػ�shutdown -a
//C�����е�system����ר����ִ��ϵͳ����
#include <string.h>
#include <stdlib.h>
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//again:	
//	printf("��ĵ��Խ���һ�����ڹػ�������'���Ǹ�ɵ��'����ֹ�ػ�\n");
//	scanf("%s", arr);
//	if (strcmp(arr, "���Ǹ�ɵ��") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}