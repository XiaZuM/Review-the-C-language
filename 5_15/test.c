#include "stdio.h"
#include "string.h"

//1.字面常量
//2.const修饰的常变量
//3.define定义的标识符常量
//4.枚举常量

//int main() {
////    30;
////    3.14;
////    'w';//字符
////    "abc";
//
////    const int a = 10;//在C语言中，const修饰的a，本质是变量，但是不能直接修改，有常量的属性。
////    a = 20;
////    printf("%d\n", a);//20
//
//    const int n = 10;//本质是变量
//    int arr[n] = {0};
//
//    return 0;
//}

//#define MAX 100
//#define STR "abcdef"
//
//int main()
//{
////    printf("%d\n", MAX);
////    int a = MAX;
////    printf("%d\n", a);
////    printf("%s\n", STR);
//    MAX = 200;//error
//
//    return 0;
//}

//枚举常量
//enum Color
//{
//    //枚举常量
//    RED,
//    GREEN,
//    BLUE
//};
//
////性别
//enum Sex
//{
//    MALE,
//    FEMALE,
//    SECRET
//};
//int main()
//{
//    //三原色
//    //Red Green Blue
//    int num = 10;
//    enum Color c = RED;
////    RED = 10;
//    printf("%d\n", c);
//    enum Sex s = MALE;
//
//    return 0;
//}

//int main()
//{
////    //10 - int
////    //char 字符类型
////    //'a';
////    char ch = 'w';
////    //字符串
////    //C语言中没有字符串类型
////    "abcdef";
//    char arr1[] = "abcdef";//7 最后有个\0
//    char arr2[] = {'a','b','c','d','e','f','\0'};
//
//    printf("%d\n", strlen(arr1));//6
//    printf("%d\n", strlen(arr2));
//
////    int len = strlen("abc");//求字符串长度的一个函数，string length
////    printf("%d\n", len);
////    printf("%s\n", arr1);
////    printf("%s\n", arr2);
//
//    return 0;
//}

//int main()
//{
//    printf("abcn");
//    printf("abc\n");
//    printf("abc\\n");
//    return 0;
//}

//int main()
//{
//    printf("abc0def");
//    printf("abc\0def");
//    return 0;
//}

//转义字符
//三字母词
//??) --> ]
//??{ --> [

//%d - 打印整形
//%c - 打印字符
//%s - 打印字符串
//%f - 打印float类型的数据
//%lf - 打印double类型的数据
//%zu - 打印sizeof的返回值

//int main()
//{
////    printf("%s\n", "(are you ok??)");
////    //(are you ok]
////    printf("%s\n", "(are you ok\?\?)");
////    //(are you ok??)
////    printf("%c\n", '\'');
////    printf("\"");
//
////    printf("abc\\0def");
//
////    printf("c:\\test\\test.c");
////    printf("\a");
////    printf("abc\ndef");
////    printf("%c\n", '\130');//0*8+3*8+1*8*8=88
////    printf("%d\n", 'X');
////    printf("%c\n", '\x60');//0*16+6*96=96
////    printf("%d\n", '`');
//
////    printf("%d\n", strlen("qwer t"));//6
////    printf("%d\n", strlen("c:\test\628\test.c"));//14 8不在8进制里面
//
//
//    return 0;
//}

/* C语言的注释风格
int main()
{
    //int a = 10;


    int a = 10;
    int b = 20;


    //创建指针变量p，并赋值为NULL
    int* p = NULL;
    return 0;
}
*/

//int main()
//{
//    //int a = 10;
//    //C++的注释风格
//    return 0;
//}

//
//1.注释可以梳理思路
//2.对复杂的代码进行解释
//3.写代码的时候注释，是帮助自己，帮助别人的
//

//int main()
//{
//    //接受输入
//    //处理数据
//    //输出
//    return 0;
//}

//int main()
//{
//    int input = 0;
//    printf("加入xiaomi\n");
//    printf("要好好学习吗？");
//    scanf("%d", &input);
//    if (input == 1)
//    {
//        printf("好offer\n");
//    }
//    else
//    {
//        printf("卖红薯\n");
//    }
//
//    return 0;
//}

//int main()
//{
//    int line = 0;
//    printf("加入xiaomi\n");
//
//    while (line < 20000)
//    {
//        printf("写代码:%d\n", line);
//        line++;
//    }
//    if (line == 20000)
//    {
//     printf("拿个好offer\n");
//    }
//    else
//    {
//        printf("继续加油\n");
//    }
//
//    return 0;
//}

//int SUM(int x, int y)
//{
////    int z = x + y;
////    return z;
//    return x + y;
//}
//
//
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//
//    scanf("%d %d", &num1, &num2);
////    int sum = num1 + num2;
//    int sum = SUM(num1, num2);
//    int a = 100;
//    int b = 200;
//    int sumab = SUM(a, b);
//
//    printf("%d\n%d\n", sum, sumab);
//
//    return 0;
//}

//int main()
//{
////    int a = 10;
////    int b = 11;
////    int c = 12;
////    //0~9
////    int d = 0;
////    int e = 1;
////    //...
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    char ch[];
//    double dou[];
////    printf("%d", arr[1]);
//    int i = 0;
//    while(i < 10)
//    {
//        printf("%d ", arr[i]);
//        i++;
//    }
//
//    return 0;
//}

//int main()
//{
////    int a = 7 / 2;
////    int b = 7 % 2;//取模
////    printf("%d\n", a);
////    printf("%d\n", b);
//    // 除号/的两端都是整数的时候，执行的是整数处罚，如果两端只要有一个浮点数，就是执行浮点数的除法
//    float a = 7 / 2.0;
//    int b = 7 % 2;//取模
//    //取模操作符的两端只能是整数
//
//    printf("%.2f\n", a);
//    printf("%d\n", b);
//    return 0;
//}

int Add(int x, int y)
{
    int z = 0;
    z = x + y;
    return z;
}

int main()
{
    int a = 10;
    int b = 20;
    int c = Add(a, b);
    return 0;
}
