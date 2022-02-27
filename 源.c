#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		
//	ret = ret * i;
//		printf("%d", ret);
//	return 0;
//}
//计算阶乘的和
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d", sum);
//	
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = ret + sum;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}
// //元素下标查找
//1.int main()
//{
//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//int k = 7;
//int sz = sizeof(arr) / sizeof(arr[0]);
//int i = 1;
//for (i = 1; i <= sz; i++)
//{
//	if (k == arr[i])
//	{
//		printf("找到了，下标是:%d\n", i);
//		break;
//	}
//}
//if (k == sz)
//{
//	printf("找不到");
//}
//return 0;
//}
// 2.二分查找；
//int main()
//{
//	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	int k = 8;
//	while (left<=right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;;
//
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//多个字符从两端移动，向中间汇聚
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit ! ! ! !";
//	char arr2[] = "######################";
//	int left = 0;
//	int right = strlen(arr1);
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	
//	return 0;
//}
//模拟用户登录，只能登录三次
int main()
{
	int i = 0;
	char passward[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s",passward);
		if (strcmp(passward, "123456") == 0)
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("输入错误\n");
		}
		
	}
	if (i == 3)
	{
		printf("密码三次输入错误，退出程序");
	}
	return 0;
}