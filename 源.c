#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
//����n�Ľ׳�
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
//����׳˵ĺ�
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
// //Ԫ���±����
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
//		printf("�ҵ��ˣ��±���:%d\n", i);
//		break;
//	}
//}
//if (k == sz)
//{
//	printf("�Ҳ���");
//}
//return 0;
//}
// 2.���ֲ��ң�
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
//			printf("�ҵ��ˣ��±���:%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}
//����ַ��������ƶ������м���
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
//ģ���û���¼��ֻ�ܵ�¼����
int main()
{
	int i = 0;
	char passward[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf("%s",passward);
		if (strcmp(passward, "123456") == 0)
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
		
	}
	if (i == 3)
	{
		printf("����������������˳�����");
	}
	return 0;
}