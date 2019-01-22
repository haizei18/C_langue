/*************************************************************************
	> File Name: str.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月11日 星期五 19时19分18秒
 ************************************************************************/

#include<stdio.h>
#include <inttypes.h>
#define unit64_t size_t //定义无符号６４位整型

int strcmp(const char *str1, const char *str2) {
    size_t i = 0;
    for (; str1[i] && str2[i]; i++) {
        if (str1[i] - str2[i]) return str1[i] - str2[i];
    }
    return str1[i] - str2[i];
}

size_t strlen(const char *str) {
    size_t i = 0;
    while (str[i]) i++;
    return i;
}

//前n位比较
int strncmp(const char *str1, const char *str2, size_t n) {
    size_t i = 0;
    while (i < n && str1[i] && str2[i] && str1[i] == str2[i]) i++;
    if (i == n) return 0;
    return str1[i] - str2[i];
}

int main() {
    char str1[] = "hello", str2[] = "hello haizei", str3[] = "hallo";
    printf("%d\n", strcmp(str1, str3));
    printf("%"PRIu64"\n", strlen(str2));  //无符号６４位整型输出格式还可以用　%lu
    printf("%d\n", strncmp(str1, str2, 7));
    return 0;
}
