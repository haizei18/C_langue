/*************************************************************************
	> File Name: printf-1.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月04日 星期五 20时47分31秒
 ************************************************************************/
//打印一个带空格的字符串
#include<stdio.h>
int main() {
    char str[100] = {0};
    while(~scanf("%[^\n]s", str)) { 
        getchar();
        printf("%s\n", str);
    }
    return 0;
}
