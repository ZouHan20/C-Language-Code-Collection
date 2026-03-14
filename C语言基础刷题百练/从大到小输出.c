//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//
//void print(int arr[],int i)
//{
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[3] = { 0 };
//	printf("输入三个整数");
//	int k = 0;
//	for (k = 0; k < 3; k++)
//	{
//		scanf("%d", &arr[k]);
//	}
//	int i = 0;
//	print(arr,i);
//	printf("\n");
//	for (i = 0; i < 3 - 1; i++)//2趟
//	{
//		int j = 0;
//		if (arr[i] > arr[i + 1])
//		{
//			j = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = j;
//		}
//
//	}
//	print(arr,i);
//	return 0;
//}