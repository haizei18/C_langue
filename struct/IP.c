/*************************************************************************
	> File Name: IP.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月12日 星期六 10时00分36秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

//将四个字节的字符存入到一个共用体中共用体中有一个整型变量通过整型的格式输出就可以将IP装整型

union Ip {
    unsigned int num;
    unsigned char arr[4];
};

int main() {
    Ip ip;
    /*int a, b, c, d;
    while (~scanf("%d.%d.%d.%d", &a, &b, &c, &d)) {
        ip.ip.arr[0] = a;
        ip.ip.arr[1] = b;
        ip.ip.arr[2] = c;
        ip.ip.arr[3] = d;
        printf("%d\n", ip.num);
    }*/
    int num[4];
    while (~scanf("%d.%d.%d.%d", num, num + 1, num + 2, num + 3)) {
        Ip ip;
        for (int i = 3; i >= 0; i--) {
            ip.arr[i] = num[i];
        }
        printf("%d\n", ip.num);
    }
    return 0;
}

