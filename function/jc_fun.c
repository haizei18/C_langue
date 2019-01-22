/*************************************************************************
	> File Name: jc_fun.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月05日 星期六 14时34分39秒
 ************************************************************************/
//求n的阶乘

#include<stdio.h>

int jc_fun(int n) {
    if (n == 1) return 1;
    return jc_fun(n - 1) * n;
}


int main() {
    int n;
    while(~scanf("%d", &n)) {    
        printf("%d\n", jc_fun(n));
    }
}

