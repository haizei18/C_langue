/*************************************************************************
	> File Name: gcd_fun.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月05日 星期六 15时34分54秒
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b) {
    if (!b) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    while(~scanf("%d%d", &a, &b)) {
        printf("%d\n", gcd(a,b));
    }
    return 0;
}
