#include "stdio.h"
#include <math.h>

//int main()
//{
//    //输入数据
//    int year, month, date = 0;
//    scanf("%4d%2d%2d", &year, &month, &date);
//
//    //输出数据
//    printf("year=%d\n", year);
//    printf("month=%02d\n", month);
//    printf("date=%02d\n", date);
//
//    return 0;
//}

//int main()
//{
//    int id = 0;
//    float c = 0.0f;
//    float math = 0.0f;
//    float english = 0.0f;
//    scanf("%d;%f,%f,%f", &id, &c, &math, &english);
//    printf("%d %.2f %.2f %.2f", id, c, math, english);
//    return 0;
//}

//int main()
//{
//    int n = printf("Hello World!");
//    printf("\n%d\n", n);
//    return 0;
//}

//int main()
//{
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello World!\" << endl;");
//    return 0;
//}

//int main() {
//    int numbers[4] = {0};
//    int max = 0;
//
//    printf("请输入4个数:\n");
//    for (int i = 0; i < 4; i++) {
//        printf("数%d: ", i + 1);
//        scanf("%d", &numbers[i]);
//    }
//
//    // 假设第一个数是最大的
//    max = numbers[0];
//
//    // 遍历数组找出最大的数
//    for (int i = 1; i < 4; i++) {
//        if (numbers[i] > max) {
//            max = numbers[i];
//        }
//    }
//
//    printf("最大的数是: %d\n", max);
//
//    return 0;
//}

//int main() {
//    double radius, volume = 0.0;
//    const float PI = 3.1415926;
//
//    // 提示用户输入球体半径
//    printf("请输入球体的半径(0≤n≤15): ");
//    scanf("%lf", &radius);
//
//    // 检查输入的半径是否在有效范围内
//    if (radius < 0 || radius > 15) {
//        printf("输入的半径不在有效范围内(0≤n≤15).\n");
//        return 1;
//    }
//
//    // 计算球体体积
//    volume = (4.0 / 3.0) * PI * pow(radius, 3);
//
//    // 输出结果
//    printf("半径为%.2f的球体体积是: %.3lf\n", radius, volume);
//
//    return 0;
//}

//int main() {
//    int weight, height_cm = 0;
//    float height_m, bmi = 0.0f;
//
//    // 读取输入，体重（公斤）和身高（厘米）
//    scanf("%d %d", &weight, &height_cm);
//
//    // 转换身高单位，从厘米到米
//    height_m = height_cm / 100.0;
//
//    // 计算BMI值
//    bmi = weight / (height_m * height_m);
//
//    // 格式化输出，保留两位小数
//    printf("%.2f\n", bmi);
//
//    return 0;
//}

//int main()
//{
////    int i = 1;
////    while (i <= 10)
////    {
////        printf("%d ", i);
////        i++;
////    }
//    for (int i = 1; i < 10; i++) {
//        if(5 == i)
//        {
////            break;
//            continue;
//        }
//        printf("%d ", i);
//    }
//    return 0;
//}

//for循环的判断部分省略意味这判断会恒成立
int main()
{
//    for(;;)
//    {
//        printf("hehe\n");
//    }

    int i = 0;
    int j = 0;
    int n = 0;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            n++;
            printf("hehe%d\n", n);
        }
    }
    return 0;
}