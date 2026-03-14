#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
int main()
{
	int num [] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int left= 0;
	int right = sizeof(num) / sizeof(num[0]) - 1;
	int ice = 0;
	scanf("%d", &ice);
	while (1)
	{
		int mid = (left + right) / 2;
		if (mid < ice)
			left = mid++;
		else if (mid > ice)
			right = mid--;
		else
		{
			printf("%d", *(num + mid-1));//*(num+mid)
			break;
		}
	}
	return 0;
}