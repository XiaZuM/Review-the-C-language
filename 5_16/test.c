#include "stdio.h"
#include "string.h"

//printf输出小飞机
//int main()
//{
//    printf("     **\n");
//    printf("     **\n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *\n");
//    printf("    *  *\n");
//    return 0;
//}

//int main()
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//    return 0;
//}

//int main()
//{
//    printf("%d\n", strlen("c:\test\628\test.c"));
//    return 0;
//}

//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man\n");
//    return 0;
//}

//int main()
//{
//    printf("I lost my cellphone!\n");
//    return 0;
//}

//请计算表达式“(-8+22)*a-10+c/2”，其中，a=40，c=212。
//int Add(int x, int y)
//{
//    return (-8 + 22) * x - 10 + y / 2;
//}
//int main()
//{
//    int a = 10;
//    int c = 212;
//    int z = Add(a, c);
//    if (z - (int)z == 0)
//    {
//        printf("(-8+22)*a-10+c/2结果为一个整数:%d\n", z);
//    }
//    else
//    {
//        printf("结果不为整数\n");
//    }
//    return 0;
//}

//0 - 数字0
//'0' - 字符0 - ASCII值是48
//'\0' - 字符 - ASCII值是0
//EOF - end of file 文件的结束标志 值是-1

//int main()
//{
//    char arr1[] = {'a','b','c'};//随机值
//    char arr2[4] = {'a','b','c'};
//    //不完全初始化，剩余的部分默认初始化为0
//    printf("%d\n%d\n", strlen(arr1), strlen(arr2));
//    return 0;
//}

//int main()
//{
////    int arr[10] = {1};
//
////    int n = 0;
////    n = 10;
////    int arr[n] = {0};
//    //C99标准之前，数组的大小都是用常量或者变量表达式来指示
//    int arr1[10] = {0};//OK
//    int arr2[4 + 6] = {0};//OK
//    //C99标准之后，支持了变长数组，这个时候允许数字的大小是变量，但是这种指方式的数字是不能初始化的
//    int m = 100;
//    int arr3[m];
//
//    return 0;
//}

//int main()
//{
//    char arr[20] = "Hello World";
//    return 0;
//}

//写一个函数，求两个数的最大值
//int MAX(int x, int y)
//{
//    if(x > y)
//    {
//        return x;
//    }
//    else
//    {
//        return y;
//    }
//}
//int main()
//{
//    int num1, num2 = 0;
//    printf("输入连个整数：\n");
//    scanf("%d%d", &num1, &num2);
//    if(num1 == num2)
//    {
//        printf("两个整数一样大，都为%d\n", num1);
//    }
//    else
//    {
//        int Max = MAX(num1, num2);
//        printf("两个整数之间较大值为：%d", Max);
//    }
//    return 0;
//}

//int main()
//{
//    int x, y = 0;
//    scanf("%d", &x);
//    if(x > 0)
//    {
//        y = -1;
//        printf("%d\n", y);
//    }
//    else if(x < 0)
//    {
//        y = 1;
//        printf("%d\n", y);
//    }
//    else
//    {
//        y = 0;
//        printf("%d\n", y);
//    }
//    return 0;
//}

//int main()
//{
////    int a = 7 / 2;
////    int b = 7 % 2;//取模
////    printf("%d\n", a);
////    printf("%d\n", b);
//    //除号的两端都是整数的时候，执行的是整数的除法，如果两端主要有一个浮点数，就执行的是浮点数的除法
//    float a = 7 / 2.0;
//    int b = 7 % 2;//取模
//    //取模操作符的两个操作数只能是整数
//    printf("%.1f\n", a);
//    printf("%d\n", b);
//    return 0;
//}

//int main()
//{
//    int a = 0;//初始化
//    a = 20;//赋值
//
//    a = a + 3;//a=23
//    a += 3;
//
//    a -= 3;
//    a = a - 3;
//
//    return 0;
//}

//C语言中
//0表示假
//非0表示真

//int main()
//{
////    int flag = 0;
////    scanf("%d", &flag);
////    if(!flag)
////    {
////        printf("hehe\n");
////    }
//
////    int a = -10;
////    int b = -a;
////    printf("%d\n", b);
//
//    //sizeof是单目操作符
////    int a = 10;
////    printf("%d\n", sizeof(a));//4
////    printf("%d\n", sizeof(int));//4
////    printf("%d\n", sizeof a);//4
//
////    int arr[10] = {0};
////    printf("%d\n", sizeof(arr));//40 计算的是整个数组的大小，单位是字节
////    printf("%d\n", sizeof(arr[0]));//4
////    printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10 - 数组的元素个数
//
////    int a = 10;
////    int b = a++;//后置++，先使用，后++
////    int b = a;
////    a = a + 1;
////    printf("%d\n", b);//10
////    printf("%d\n", a);//11
//
////    int b = ++a;//前置++，先++，后使用
////    printf("%d\n", b);//11
////    printf("%d\n", a);//11
//
////    int a = 10;
////    int b = a--;//后置--，先使用，后--
////    b = a;
////    a = a - 1;
////    printf("%d\n", b);//10
////    printf("%d\n", a);//9
//
////    int b = --a;//前置--，先--，后使用
////    a = a - 1;
////    b = a;
////    printf("%d\n", b);//9
////    printf("%d\n", a);//9
//
//    int a = (int)3.14;
//    printf("%d\n", a);
//    //3.14 字面浮点数，编译器默认理解为double类型
//
//    return 0;
//}

//int main()
//{
//    int a = 10;
//    if(a == 3)
//    {
//        printf("hehe\n");
//    }
//
//    return 0;
//}

//int main()
//{
//    //&& 逻辑与 - 并且
//    //|| 逻辑或 - 或者
//
////    int a = 10;
////    int b = 20;
////    if(a && b)
////    {
////        printf("hehe\n");
////    }
//
////    int a = 0;
////    int b = 0;
////    if(a || b)
////    {
////        printf("hehe\n");
////    }
//
//    int a = 10;
//    int b = 20;
//
//    int c = a > b ? a : b;
//    printf("%d\n", c);
//
//    return 0;
//}

//逗号表达式就是逗号隔开的一串表达式
//逗号表达式的特点是：从左向右依次计算，整个表达式的结果是最后一个表达式的结果
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = 30;
//    int d = (c = a - 2, a = b + c, c - 3);
//    printf("%d\n", d);
//    return 0;
//}

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int n = 3;
//    arr[n] = 20;//[]就是小标引用操作数 arr和3就是[]的操作数
//
//    return 0;
//}

//int SUM(int x, int y)
//{
//    return x + y;
//}
//int main()
//{
//    int sum = SUM(2, 3);//()就是函数调用操作符，SUM 2 3都是()的操作数
//    return 0;
//}
