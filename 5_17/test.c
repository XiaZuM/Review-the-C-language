#include "stdio.h"

//int main()
//{
////    int a = 10;//自动变量
//    auto int a = 10;//自动变量
//
////    int for = 0;//error
////    int 2b = 0;//error
//
//    return 0;
//}

//类型重命名
//typedf unsigned int uint;
//
//typedf struct Node
//{
//    int data;
//    struct Node* next;
//}Node;
//
//int main()
//{
//    unsigned int num1 = 0;
//    uint num2 = 1;
//
//    struct Node n1;
//    Node n2;
//
//    return 0;
//}

//static
//1.修饰局部变量
//static修饰局部变量的时候，局部变量出了作用域，不销毁。本质上，static修饰局部变量的时候，改变了变量的存储位置的。影响了变量的生命周期，生命周期变长，和程序的生命周期一样
//2.修饰全局变量
//3.修饰函数

//void test()
//{
//    修饰局部变量
//    static int a = 1;
//    a++;
//    printf("%d\n", a);
//}
//
//int main()
//{
//    int i = 0;
//    while(i < 10)
//    {
//        test();
//        i++;
//    }
//
//    return 0;
//}

//修饰全局变量
//extern int g_val;
//
//int main()
//{
////    int g_val = 10;
//    printf("%d\n", g_val);
//    return 0;
//}

//static 修饰函数
//extern  int Add(int x, int y);
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int z = Add(a, b);
//    printf("%d\n", z);
//    return 0;
//}

int main()
{
    //寄存器变量
    register int num = 3;//建议3存放在寄存器中
    return 0;
}
