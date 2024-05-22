#include "stdio.h"
#include "string.h"
#include "windows.h" // 使用 Sleep 函数需要包含这个头文件
#include "time.h"
#include "stdlib.h"

//int main() {
//    char arr1[] = "Welcome to xiaomi!!!!";
//    char arr2[] = "#####################";
//
//    int left = 0;
//    int right = strlen(arr2) - 1;
//
//    while (left <= right) { // 修正 while 循环条件
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right]; // 修改为 arr1[right] 而不是 arr1[left]
//        printf("%s\n", arr2);
//        Sleep(1000); // 使用 Sleep 函数
//        //清空屏幕
////        system("cls");//system是一个库函数，可以执行系统命令
//        left++;
//        right--;
//    }
//    return 0;
//}


//#define PASSWORD "your_password"
//#define MAX_TRIES 3
//
//int main() {
//    char input[50];
//    int attempts = 0;
//    int login_success = 0;
//
//    while (attempts < MAX_TRIES) {
//        printf("Enter your password: ");
//        scanf("%s", input);
//
//        if (strcmp(input, PASSWORD) == 0) {
//            printf("Login successful!\n");
//            login_success = 1;
//            break;
//        } else {
//            printf("Incorrect password. Try again.\n");
//        }
//
//        attempts++;
//    }
//
//    if (!login_success) {
//        printf("Too many failed attempts. Exiting...\n");
//    }
//
//    return 0;
//}

//电脑产生一个随机数(1~100)
//猜数字
//猜大了
//猜小了
//直到猜对了结束

void menu()
{
    printf("****************************\n");
    printf("********   1.play   ********\n");
    printf("********   0.play   ********\n");
    printf("****************************\n");
}
void game()
{
    int guess = 0;
    //1.生成随机数
    int ret = rand() % 100 + 1;//生成随机数的函数 0~RAND_MAX
//    printf("%d\n", ret);
    //2.猜数字
    while (1) {
        printf("请猜数字:>");
        scanf("%d", &guess);
        if (guess < ret)
        {
            printf("猜小了\n");
        }
        else if (guess > ret)
        {
            printf("猜大了\n");
        }
        else
        {
            printf("猜对了\n");
            break;
        }
    }
}
//指针
//int *P = NULL;
//int a = 0;
int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d", &input);
        switch (input) {
            case 1:
                game();//猜数字的整个逻辑
                printf("猜数字\n");
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误，重新选择！\n");
                break;
        }
    } while (input);
    return 0;
}