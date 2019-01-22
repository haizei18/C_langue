/*************************************************************************
	> File Name: x.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月11日 星期五 18时26分10秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>
//输出一个１６进制的位数到字符串中通过计算字符串的长度得出位数

int main() {
    char str[11];
    int n;
    char str1[] = "hello";
    int t = strlen(str1);
    printf("%lu\n", strlen(str1));
    while(~scanf("%d", &n)) {
        sprintf(str, "%x", n);
        printf("%lu\n", strlen(str));
    }
    return 0;
}
