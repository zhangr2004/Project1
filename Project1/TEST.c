#define _CRT_SECURE_NO_WARNINGS 1
////��һ���ô��룬�������
////printfʹ����Ҫ����ͷ�ļ�#include<stdio.h>
#include<stdio.h>
////
////int main()
////{
////	printf("hello,c++");
////
////	return 0;
////}
////ctrl+f5���д���
////���� \n ����
////һ�����������ҽ���һ��main����
////��������  
////�ַ���������char
////����int
////������short int ��short
////������long
////��������long long
////�����ȸ�����float
////˫���ȸ�����double
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
////sizeof=�ؼ���=������  �������ͻ��߱�����ռ�ռ��С
////sizeof��λ�����ֽ� byte
////������е�λ
////1.����λ-bit ��СΪһ��0��1
////2.�ֽ�-byte 1byte=8bit
////3.kb 1kb=1024byte
////4.mb 1mb=1024kb
////5.gb 1gb=1024mb
////6.tb 1tb=1024gb
////7.pb 1pb=1024tb
////       8.11
////#include <stdio.h>
////int main()
////{
////	//������һ������
////	//int�Ǳ������ͣ�age�Ǳ�������
////	int age = 17;
////	double weight = 90.00;
////	age = age + 1;
////	weight = weight - 20.00;
////	printf("%d\n", age);
////	printf("%lf\n", weight);
////	return 0;
////}
////%d - ����
////%f - float
////%lf - double
////��������Ҳ������
//   //�����ķ���
////�ֲ�����
////ȫ�ֱ���
//
////#include <stdio.h>
////int a = 100;
//////��������ı���Ϊȫ�ֱ���
////
////int main()
////{
////	//������{}�ڵı���Ϊ�ֲ�����
////	int a = 10;
////	printf("%d\n", a);
////	return 0;
////}
////�ֲ�������ȫ�ֱ������ֳ�ͻʱ���ֲ�����
////ʵ��д����ʱ������ȫ�ֱ�����ֲ�����������ͬ
////scanf�����뺯��
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
//���������������������
//�ֲ��������÷�Χֻ�ڱ������ڷ�Χ
//ȫ�ֱ������÷�Χ����������
//ִ���Դ�������ڴ�����֮��

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
////��������
////��������������ָ���Ǳ����Ĵ���������֮���ʱ���
////�ֲ�����������ֲ���Χ->�뿪�ֲ���Χ
////ȫ�ֱ������������������
//
//
////����
////1.���泣��
////2.const���εĳ�����
////3.#define����ı�ʶ������
////4.ö�ٳ���
////#define max 999
////enum Sex
////{
////	//���ֱ�����δ������ȡֵ
////	male = 5,//����ֵ
////	famale,
////	secret
////};
////
////
////int main()
////{
////	   //���泣����
////	/*114514;
////	"birthday";*/
////	   //const���εĳ�����
////	/*const int num = 200;
////	num = 40;*///ϵͳ������Ϊconst���α��������޸ģ���ʱnum��Ϊ������
////	//��const���ι��ı�����Ȼ�����ǳ���
////	   //#define����ı�ʶ������
////	/*int a = max;
////	printf("%d\n", a);
////	return 0;*/
////	   //ö�ٳ���������һһ�оٵĳ���
////	//ö�ٹؼ��� enum 
////	printf("%d\n", male);
////	printf("%d\n", famale);
////	printf("%d\n", secret);
////	
////}


////    8.13
////�ַ���->��˫������������һ���ַ�
//// �ַ����Ľ�����־��һ��\0��ת���ַ����������ַ�������
////int main()
////{
////	"zhang";
////	return 0;
////}
////strlenʹ��ҲҪ����ͷ�ļ� #include <string.h>
//#include <string.h>
//
//int main()
//{
//	//�ַ����飺һ����ͬ���͵�Ԫ��
//	//�ַ����ڽ�β��������\0���ַ�
//	/*char arr[] = "hello";*/
//	char arr1[] = "zhang";
//	char arr2[] = { 'z', 'h', 'a', 'n', 'g'};
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//	//���ַ�������
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