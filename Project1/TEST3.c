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
int main()
{
	int i = 1;
	
	
		for(i = 1;3 >= i;i++)
		{
			char a[20] = { 0 };
			printf("���������룺");
			scanf("%s", a);
			if (strcmp(a,"zhang")==0)//�ַ����Ƚϲ���ʹ�á�==������Ӧ��ʹ�ú���strcmp,�ַ�����ͬʱ�����0.
			{
				break;
			}
		}
	if (3 > i)
	{
		printf("��½�ɹ�");
	}
	if (3 <= i)
	{
		printf("��½ʧ��");
	}
	return 0;
}