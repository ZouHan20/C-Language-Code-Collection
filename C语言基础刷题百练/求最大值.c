//#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int max = 0;
//void cmp_arr(int arr[10],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] - arr[i + 1]>0)
//		{
//			max = arr[i];
//		}
//		if (arr[i] - arr[i + 1]<0)
//		{
//			max = arr[i + 1];
//		}
//	}
//	printf("%d", max);
//}
//void scan(int arr[10],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d",(arr+i));
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("please input ten stastic in it !");
//	scan(arr,sz);
//	cmp_arr(arr,sz);
//	return 0;
//}
//int main()
//{
//	int i = 2000;
//	while (i >= 1000)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//		}
//		i--;
//	}
//	return 0;
//}
int main()
{
	double sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum +=(i % 2 ? 1.0/i : -1.0/i);
	}
	printf("%lf ", sum);
	return 0;
}