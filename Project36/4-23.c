////BC77�������в���һ����
//#include<stdio.h>
////#include<algorithm>
////#include<stdio.h>
//int main() 
//{
//    int* arr;//����
//    int n = 0;//����
//    scanf("%d", &n);
//    arr = (int*)malloc(sizeof(int) * (n + 1));//����k�Ĵ�С���涨����Ĵ�С
//    int number = 0;//���������
//    for (int i = 0; i < n; i++) 
//    {//����������
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &number);//����Ҫ�������
//    int j = n;//��ֵ���ڴ洢����λ�ã��ͱ�������
//    for (; arr[j - 1] > number; j--)
//    {//�Ӻ���ǰ��������
//        arr[j] = arr[j - 1];//�����������ƶ�
//    }//�ƶ�������j�洢�ļ�Ϊ�ճ����Ĳ���λ
//    arr[j] = number;
//    for (int i = 0; i < n + 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//BC78ɸѡ����    ��2-n���������������У���������2֮��������ܱ�2����������0��
//#include<stdio.h>
//int main()
//{
//	int j = 0;
//	int i = 0;
//	int n = 0;
//	int a[100] = { 0 };
//	int sum = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 2; i <= n; i++)
//		{
//			a[i - 2] = i;//�洢
//		}
//		for (j = 2; j <= n; j++)
//		{
//			for (i = j - 1; i < n - 1; i++)
//			{
//				if (a[i] % j == 0)
//				{
//					a[i] = 0;
//				}
//			}
//		}
//		for (i = 0; i < n - 1; i++)
//		{
//			if (a[i] != 0)
//				printf("%d", a[i]);
//			else sum++;
//		}
//		printf("\n%d", sum);
//	}
//	return 0;
//}
//79 ͼ����ʶ��
////80��֤��¼  �Ƚ��ַ��� strcmp
////int strcmp(const char* str1, const char* str2);
//#include<stdio.h>
//int main()
//{
//	char name[30] = { 0 };
//	char word[30] = { 0 };
//	char a[] = "admin";
//	while (scanf("%s %s", &name, &word) != EOF)
//	{
//		if ((strcmp(name, a) == 0) && (strcmp(word, a) == 0))
//		{
//			printf("login success\n");
//		}
//		else
//		{
//			printf("login fail\n");
//		}
//	}
//	return 0;
////}
////BC81ѧ��c++
//#include<stdio.h>
//int main()
////{
////	printf("i will learn c++ well!");
////	return 0;
////}
////BC82��������
//#include<stdio.h>
//int main()
//{
//	int a,b,c,d = 0;
//	//int num = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
////	int ret = (a + b - c) * d;
////	printf("%d", ret);
////	return 0;
////}
////BC83��5����
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 5 == 0)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//
////}
////BC84����yde��ֵ
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	
//	while (scanf("%d", &i) != EOF)
//	{
//		if (i < 0)
//		{
//			printf("1");
//		}
//		else if (i == 0)
//		{
//			printf("0");
//		}
//		else
//		{
//			printf("-1");
//		}
//
//	}
//	return 0;
//}
////BC85��������9����  ���ǲ�������һ��
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int count = 0;
//	for (a = 1; a <=2019; a++)
//	{
//		if (a % 10 == 9 || a / 10 % 10 == 9 || a / 100 % 10 == 9 || a / 1000 == 9)
//		{
//			count++;
//			printf("%d ", count);
//			printf("%d \n", a);
//		}
//	}
//	return 0;
//}
//BC86��ż��
#include<stdio.h>
int main()
{
	int n;
	int k, m;
	scanf("%d", &n);
	k = n / 2;
	m = n - k;
	printf("%d %d", m, k);
	return 0;
}