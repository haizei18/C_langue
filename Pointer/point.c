/*************************************************************************
	> File Name: point.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月12日 星期六 15时30分16秒
 ************************************************************************/
//函数指针

#include<stdio.h>

int add(int a, int b) {
    return a + b;
}

typedef int (*func)(int, int);


int main() {
    func fun = (func)add;
    printf("%d\n",fun(3, 4));
    return 0;
}
