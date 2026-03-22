////#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
////#include<stdlib.h>
////int main()
////{
////	int i=0, j=0;
////	scanf("%d,%d", &i, &j);
////	int max= i > j ? i : j;
////	int flag = 0;
////	while (max)
////	{
////		if (i %max  == 0 && j % max == 0)
////		{
////			printf("%d", max);
////			flag = 1;
////			break;
////		}
////		max--;
////	}
////	if (flag == 0)
////	{
////		printf("没找到！");
////	}
////	return 0;
////}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//    int i = 0, j = 0;
//
//    // 方法1：用空格分隔（推荐）
//    printf("请输入两个数（用空格分隔）: ");
//    scanf("%d %d", &i, &j);
//
//    // 或者方法2：用逗号分隔  
//    // printf("请输入两个数（用逗号分隔）: ");
//    // scanf("%d,%d", &i, &j);
//
//    int max = i > j ? i : j;
//    int flag = 0;
//
//    while (max)
//    {
//        if (i % max == 0 && j % max == 0)
//        {
//            printf("最大公约数是：%d\n", max);
//            flag = 1;
//            break;
//        }
//        max--;
//    }
//
//    if (flag == 0)
//    {
//        printf("没找到！");
//    }
//    return 0;
//}