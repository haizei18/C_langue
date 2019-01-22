/*************************************************************************
	> File Name: function.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月05日 星期六 16时16分40秒
 ************************************************************************/

#include<stdio.h>

#define P(func) {\
    printf("%s = %d\n", #func, func);\
}

int is_prime(int x);
int max_int(int n, ...);

int main() {
    for (int i = 2; i <= 100; i++) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }
    P(max_int(5, 2, 5, 10, 4, 29));
    P(max_int(4, 7, 8, 9, 10));
    return 0;
}
