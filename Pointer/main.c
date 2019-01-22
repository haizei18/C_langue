/*************************************************************************
	> File Name: main.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月12日 星期六 15时47分51秒
 ************************************************************************/

#include<stdio.h>
//main函数的实现,argc记录参数的个数,argc记录传入的参数,env记录环境变量。

int main(int argc, char *argv[], char*env[]) {
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    for (char **p = env; p[0] != NULL; p++) {
        printf("%s\n", p[0]);
    }
    return 0;
}
