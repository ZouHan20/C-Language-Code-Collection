#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,10 };
	//½»»»Êý×é
	int arr[5] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	while (i<sz)
	{
		arr[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = arr[i];
		i++;
	}
	int j = 0;
	while (j<sz)
	{
		printf("%d ", arr1[j]);
		j++;
	}
	printf("\n");
	j = 0;
	while (j < sz)
	{
		printf("%d ", arr2[j]);
		j++;
	}
	return 0;
}