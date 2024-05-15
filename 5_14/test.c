//c语言代码中一定要有main函数
//主函数

//printf是一个库函数
//专门用来打印数据

//std - 标准
//i - input
//0 - output

#include "stdio.h"

//C语言规定
//main函数有且仅有一个
//标准的主函数的写法
//int main(void) {//int 整形 void 告诉main没有参数
//    printf("hehe\n");
//    return 0;//0 整数
//}

//1byte(字节) = 8bit(比特位)
//int main(){
//    printf("%d\n", sizeof (char));//1byte 8bit
//    printf("%d\n", sizeof (short));//2byte 16bit
//    printf("%d\n", sizeof (int));//4
//    printf("%d\n", sizeof (long));//4
//    printf("%d\n", sizeof (long long));//8
//    printf("%d\n", sizeof (float));//4
//    printf("%d\n", sizeof (double));//8
//    return 0;
//}

//int main() {
//    int age = 20;
//    double price = 66.6;
//    printf("%d\n", age);
//    printf("%f\n", price);
//    return 0;
//}

//变量和常量的概念
//变量分为 - {}内部定义的变量
//局部变量 - {}外部定义的变量
//

//int b = 20;//全局变量
//
//int main() {
////    short age = 20;//年龄
////    int hign = 100;//身高
////    float weight = 88.5;//体重
//
//    int a = 10;//局部变量
//    return 0;
//}

//int a = 100;
//
//int main() {
//
//    int a = 10;
//    printf("a=%d\n", a);//a=10 当全局变量和局部变量名字相同的情况下，局部优先
//    return 0;
//}

//但是建议不要将全局变量和局部变量名字写成一样的

//写一个代码，计算两个整数的和
//scanf是一个输入函数
//printf是一个输出函数
//int main() {
//    int num1 = 0;
//    int num2 = 0;//初始化
//
//    //输入两个整数
//    scanf("%d %d", &num1, &num2);
//    //求和
//    int sum = num1 + num2;
//    //输出
//    printf("%d\n", sum);
//    return 0;
//}

//变量的作用域
//局部变量的作用域是变量所在的局部变量
//全局变量的作用域是在整个工程

//变量的生命周期
//局部变量的生命周期是进入作用域生命周期开始，出作用域生命周期结束
//全局变量的生命周期是整个工程的生命周期

//int main() {
//    {
//        int a = 100;
//        printf("%d\n", a);
//    }
//    printf("%d\n", a);
//    return 0;
//}

//声明来着外部的符号
//extern int a;
//
//void test() {
//    printf("test-->%d\n", a);
//}
//
//int main() {
//    test();
//    {
//        printf("a=%d\n", a);
//    }
//    printf("a=%d\n", a);
//    return 0;
//}


