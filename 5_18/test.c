#include "stdio.h"

//define定义标识符常量
//#define NUM 10

//define定义宏
//宏是有参数的
//#define Add(x,y) (x+y)
//
////int Add(int x, int y)
////{
////    return x+y;
////}
//
//
//int main()
//{
////    printf("%d\n", NUM);
////    int n = NUM;
////    printf("%d\n", n);
////    int arr[NUM] = {0};
//
//    int a = 10;
//    int b = 20;
//    int c = Add(a, b);
//    printf("%d\n", c);
//
//    return 0;
//}

//int main()
//{
//
//    int a = 10;//我向内存申请四个字节，存储10
////    &a;//取地址操作符
////    printf("%p\n", &a);
//    int* p = &a;
//    //p就是指针变量
//    *p = 20;//解引用操作符，意思就是通过p中存放的地址，找到p所指向的对象。*p就是p指向的对象
//    printf("%d\n", a);
//
////    char ch = 'w';
////    char* pc = &ch;
//
//
//
//    return 0;
//}

//int main()
//{
////    int* p;
////    char* p2;
//    //不管是什么类型的指针，都是在创建指针变量
//    //指针变量是原来存放地址的
//    //地址变量的大小取决于一个地址存放的时候需要多大空间
//    //32位机器上的地址：32bit位 - 4byte，所以指针变量的大小是4个字节
//    //64位机器上的地址：64bit位 - 8byte，所以指针变量的大小8是个字节
//    printf("%zu\n", sizeof(char*));
//    printf("%zu\n", sizeof(int*));
//    printf("%zu\n", sizeof(short*));
//    printf("%zu\n", sizeof(float *));
//    printf("%zu\n", sizeof(double *));
//    return 0;
//}

//学生
//struct Stu
//{
//    //成员
//    char name[20];
//    int age;
//    char sex[10];
//    char phone[12];
//};
//void print(struct Stu* ps)
//{
//    printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).phone);
//    //->
//    //结构体指针变量->成员名
//    printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->phone);
//}
//int main()
//{
//    struct Stu s = {"张三", 20, "男", "12345678"};
//    //结构体对象.成员名
//    printf("%s %d %s %s\n", s.name, s.age, s.sex, s.phone);
//    print(&s);
//
//    return 0;
//}

//int main()
//{
//    int a, b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d\n", (a/b), (a%b));
//    return 0;
//}

//判断一个数是否为奇数
//int main()
//{
//    int num = 0;
//    printf("请输入一个不为0的整数：\n");
//    scanf("%d", &num);
//    if(1 == (num%2))
//    {
//        printf("该整数为奇数\n");
//    }
//    else
//    {
//        printf("该整数为偶数\n");
//    }
//    return 0;
//}

//输出1-100之间的奇数
//int main()
//{
//    int n = 100 ;
//    while (n >= 0)
//    {
//        if(1 == (n%2)) {
//            printf("%d ", n);
//        }
//        n--;
//    }
//
//    return 0;
//}

//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
////    if(1 == day)
////    {
////        printf("星期一\n");
////    }
////    else if(2 == day)
////    {
////        printf("星期二\n");
////    }
////    else if(3 == day)
////    {
////        printf("星期三\n");
////    }
////    else if(4 == day)
////    {
////        printf("星期四\n");
////    }
////    else if(5 == day)
////    {
////        printf("星期五\n");
////    }
////    else if(6 == day)
////    {
////        printf("星期六\n");
////    }
////    else if(7 == day)
////    {
////        printf("星期日\n");
////    }
//
//    switch (day) {
//        case 1:
//            printf("星期一\n");
//            break;
//        case 2:
//            printf("星期二\n");
//            break;
//        case 3:
//            printf("星期三\n");
//            break;
//        case 4:
//            printf("星期四\n");
//            break;
//        case 5:
//            printf("星期五\n");
//            break;
//        case 6:
//            printf("星期六\n");
//            break;
//        case 7:
//            printf("星期日\n");
//            break;
//    }
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    switch (n) {
//        case 1:
//        case 2:
//        case 3:
//        case 4:
//        case 5:
//            printf("weekday\n");
//            break;
//        case 6:
//        case 7:
//            printf("weekend\n");
//            break;
//        default:
//            printf("输入错误\n");
//            break;
//    }
//    return 0;
//}

//int main()
//{
//    while (1)
//    {
//        printf("hehe\n");
//    }
//
//    return 0;
//}


//while循环中的
//break是用于永久的终止循环
//continue跳过本次循环后面的代码,直接去判断部分，进行下一次循环的判断
//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        i++;
//        if(5 == i)
//        {
////            break;
//            continue;
//        }
//        printf("%d ", i);
//    }
//    return 0;
//}

//int main()
//{
////    int ch = getchar();
////    printf("%c\n", ch);
////    putchar(ch);
//
////    int ch = 0;
////    while ((ch=getchar()) != EOF)
////    {
////        putchar(ch);
////    }
//
//    char password[20] = {0};
//    scanf("%s", &password);
//    int test = getchar();//读取'\n'
//    int ret = getchar();
//    if('Y' == ret)
//    {
//        printf("Yes\n");
//    }
//    else if('N' == ret)
//    {
//        printf("No\n", &ret);
//    }
//    return 0;
//}

//int main()
//{
//    char ch = '\0';
//    while ((ch = getchar()) != EOF)
//    {
//        if(ch < '0' || ch > '9')
//        {
//            continue;
//        }
//        putchar(ch);
//    }
//    return 0;
//}

//int main()
//{
//    char arr[] = {'73','32','99','110','32','100','111','32','105','116','33'};
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    while (i < sz)
//    {
//        printf("%c ", arr[i]);
//        i++;
//    }
//
//    return 0;
//}

