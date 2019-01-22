/*************************************************************************
	> File Name: bc_func.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月05日 星期六 15时58分18秒
 ************************************************************************/
//传入一串数字输出最大的一个数
//变参函数

#include<stdio.h>
#include<stdarg.h>

int max_int (int num, ...) {
    int ans = 0, temp;
    va_list arg;
    va_start(arg, num);
    while(num--) {
        temp = va_arg(arg, int);
        if (temp > ans) ans = temp;
    }
    va_end(arg);
    return ans;
}

int main() {
    printf("%d\n", max_int(3, 23, 52, 8));
    return 0;
}
