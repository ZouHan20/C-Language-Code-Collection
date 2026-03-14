//#define _CRT_SECURE_NO_WARNINGS  1
//#include <stdio.h>
//#include <stdlib.h>
//
//// 加法函数
//int add(int x, int y) {
//    return x + y;
//}
//
//// 减法函数
//int sub(int x, int y) {
//    return x - y;
//}
//
//// 乘法函数
//int mul(int x, int y) {
//    return x * y;
//}
//
//// 除法函数
//int divi(int x, int y) {
//    if (y == 0) {
//        printf("错误：除数不能为零！\n");
//        return 0;
//    }
//    return x / y;
//}
//
//int main() {
//    int choice, num1, num2, result;
//
//    while (1) {
//        // 显示菜单
//        printf("1. 加法\n");
//        printf("2. 减法\n");
//        printf("3. 乘法\n");
//        printf("4. 除法\n");
//        printf("0. 退出\n");
//        printf("请输入你的选择: ");
//        scanf("%d", &choice);
//
//        if (choice == 0) {
//            break;
//        }
//
//        if (choice >= 1 && choice <= 4) {
//            printf("请输入两个操作数: ");
//            scanf("%d %d", &num1, &num2);
//
//            switch (choice) {
//            case 1:
//                result = add(num1, num2);
//                printf("结果: %d\n", result);
//                break;
//            case 2:
//                result = sub(num1, num2);
//                printf("结果: %d\n", result);
//                break;
//            case 3:
//                result = mul(num1, num2);
//                printf("结果: %d\n", result);
//                break;
//            case 4:
//                result = divi(num1, num2);
//                if (num2 != 0) {
//                    printf("结果: %d\n", result);
//                }
//                break;
//            default:
//                printf("无效的选择，请重新输入。\n");
//            }
//        }
//        else {
//            printf("无效的选择，请重新输入。\n");
//        }
//    }
//
//    return 0;
//}
