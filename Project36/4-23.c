////BC77有序序列插入一个数
//#include<stdio.h>
////#include<algorithm>
////#include<stdio.h>
//int main() 
//{
//    int* arr;//数组
//    int n = 0;//个数
//    scanf("%d", &n);
//    arr = (int*)malloc(sizeof(int) * (n + 1));//根据k的大小来规定数组的大小
//    int number = 0;//插入的数字
//    for (int i = 0; i < n; i++) 
//    {//输入有序数
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &number);//输入要插入的数
//    int j = n;//赋值用于存储插入位置，和遍历数组
//    for (; arr[j - 1] > number; j--)
//    {//从后往前遍历数组
//        arr[j] = arr[j - 1];//大数都往后移动
//    }//移动结束后j存储的即为空出来的插入位
//    arr[j] = number;
//    for (int i = 0; i < n + 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//BC78筛选素数    将2-n的正整数放数组中，将数组中2之后的所有能被2整除的书清0，
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
//			a[i - 2] = i;//存储
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
//79 图像相识度
////80验证登录  比较字符串 strcmp
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
////BC81学好c++
//#include<stdio.h>
//int main()
////{
////	printf("i will learn c++ well!");
////	return 0;
////}
////BC82计算问题
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
////BC83被5整除
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
////BC84计算yde得值
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
////BC85包含数字9的数  和是不是闰年一样
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
//BC86奇偶数
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