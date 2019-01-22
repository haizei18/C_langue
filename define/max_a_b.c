/*************************************************************************
	> File Name: max_a_b.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月09日 星期三 20时15分03秒
 ************************************************************************/

#include<stdio.h>

#define P(a) {\
    printf("%s = ", #a); printf("%d\n", (a));\
}


#define MAX(a, b) ({ \
    __typeof(a) __a = a; \
    __typeof(b) __b = b; \
    (__a) > (__b) ? (__a) : (__b); \
}) // 宏定义代码段要用\ 链接每句代码后面都加分号。

int main() {
    int a = 7;
    P(a);
    P(MAX(2, 3));
    P(5 + MAX(2, 3));
    P(MAX(2, MAX(3, 4)));
    P(MAX(2, 3 > 4 ? 3 : 4));
    P(MAX(a++, 6));
    P(a);
    return 0;
}
