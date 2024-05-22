#include "stdio.h"

//int main()
//{
//    int i = 1;
//
//    do {
////        i++;
//        if (i == 5)
//        {
////            break;
//            continue;
//        }
//        printf("%d\n", i);
//        i++;
//    } while (i <= 10);
//
//    return 0;
//}

//计算n的阶乘
//1*2*3*4*...*n
//int main()
//{
//    int n, m = 0;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        m = m*i;
//    }
//    printf("%d\n", n);
//    return 0;
//}

//计算1!+2!+3!+...+n!
//int main() {
//    int n = 0;
//    printf("请输入n的值：");
//    scanf("%d", &n);
//    int sum = 0;
//    int factorial = 1;
//    for (int i = 1; i <= n; i++) {
//        factorial *= i; // 计算阶乘
//        sum += factorial; // 将阶乘加到总和中
//    }
//
//    printf("1!+2!+3!+...+%d!的和为：%d\n", n, sum);
//
//    return 0;
//}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;
    int sz = sizeof(arr) / sizeof(arr[0]);

    int left = 0;
    int right = sz - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] < k) {
            left = mid + 1;
        } else if (arr[mid] > k) {
            right = mid - 1;
        } else {
            printf("%d\n", mid);
            return 0;
        }
    }
    printf("找不到\n");
//    for(i = 0; i < sz; i++)
//    {
//        if(arr[i] == k)
//        {
//            printf("%d\n", i);
//            break;
//        }
//    }
//    if(i == sz)
//    {
//        printf("找不到\n");
//    }
    return 0;
}

//int main()
//{
//
//    return 0;
//}
