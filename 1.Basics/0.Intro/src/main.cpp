
#include <stdio.h>


// int main(int argc, char *argv[]) //定义主函数参数
// {
//     int i;   //声明循环控制变量
//     printf("您输入的运行参数共有∶%d条\n", argc); //输出参数的条数 
//     for(i = 0 ; i < argc; i++)  //以参数的条数为条件循环
//         printf("%s\n", argv[i]);          //输出每条参数
//     return 0;
// }

// 另一种形式
int main(int argc, char** argv)
{
    printf("输入的参数共有: %d条\n", argc);
    for (int i = 0; i < argc; i++)
        printf("%s\n", argv[i]);
    return 0;
}

// int main(int argc, char** argv)
// {
//     int a = 10;
//     int b = 20;


//     printf("result= %d\n", a+b);
//     return 0;
// }







