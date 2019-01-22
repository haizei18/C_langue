/*************************************************************************
	> File Name: test.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月12日 星期六 14时24分35秒
 ************************************************************************/

#include<stdio.h>
struct Data {
    int x, y;
};

int main() {
    struct Data a[2] = {1, 2, 3, 4}, *p = a;
    printf("%d\n", (p + 1)->x);
    printf("%d\n", a[1].x);
    printf("%d\n", (*(a + 1)).x);
    printf("%d %d\n", (*(p + 1)).x, (&a[0] + 1)->x);
    return 0;
}
