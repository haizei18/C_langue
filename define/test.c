/*************************************************************************
	> File Name: test.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月09日 星期三 20时25分57秒
 ************************************************************************/

#include<stdio.h>
#define DEBUG //定义DEBUG宏
#ifdef DEBUG　//如果定义了则执行下面代码段
#define P(a) { \
    printf("[%d : %s]%s : %d\n", __LINE__, __FILE__, #a, a); \
}　// 输出a所在的行号，文件名，内容和返回的值

#else　//如果没有则执行下面代码段
#define P(a) {}
#endif　// 结束宏定义

int main() {
    int n;
    while (~scanf("%d", &n)) {
        int sum = (1  + n) * n / 2;
        P(n);
        printf("%d\n", sum);
    }
    return 0;
}
