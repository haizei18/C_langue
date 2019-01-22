/*************************************************************************
	> File Name: printf.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月04日 星期五 20时10分49秒
 ************************************************************************/

//输入一个数字得到数字的位数

#include<stdio.h>
int main() {
    int n;
    FILE *fout = fopen("/dev/null", "w");
    char str[100] = {0};
    while (scanf("%d", &n) != EOF) {
        printf("%d\n", sprintf(str, "%d", n)); //sprintf存储到字符串中
        printf("%d\n", fprintf(fout, "%d", n));　//fprintf存储到空文件中
    }
    return 0;
}
