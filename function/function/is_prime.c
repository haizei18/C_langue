/*************************************************************************
	> File Name: is_prime.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月05日 星期六 16时22分58秒
 ************************************************************************/

#include<stdio.h>
#include<stdarg.h>

int is_prime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}


int max_int(int n, ...) {
    va_list arg;
    va_start(arg, n);
    int ans = 0;
    while (n--) {
        int temp = va_arg(arg, int);
        if (temp > ans) ans = temp;
    }
    va_end(arg)
    return ans;
}
