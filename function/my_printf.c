/*************************************************************************
	> File Name: my_printf.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月05日 星期六 18时03分04秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <inttypes.h>
#include <math.h>


int digit(long long x) {
    if (x == 0) return 1;
    return floor(log10(x)) + 1;
}

int my_printf(const char *frm, ...) {
    int cnt = 0;
    va_list arg;
    va_start(arg, frm);
    for (int i = 0; frm[i]; i++) {
        switch (frm[i]) {
            case '%': {
                i++;
                switch (frm[i]) {
                    case 'd': {
                        long long temp = va_arg(arg, int);
                        if (temp < 0) {
                            putchar('-'); cnt++;
                            temp = -temp;
                        }
                        int digit_temp = digit(temp);
                        while (temp) {
                            int num = temp / (int)pow(10, digit_temp - 1);
                            putchar(num + '0');
                            cnt++;
                            temp = temp % (int)pow(10, digit_temp - 1);
                            digit_temp--;
                        }
                        for (int i = 0; i < digit_temp; i++) {
                            putchar('0');
                            cnt++;
                        }
                        break;
                    }
                    default :
                    fprintf(stderr, "error : unknow %%%c\n",frm[i]);
                    exit(1);
                }   
            } break;
            default :putchar(frm[i]);
            cnt++;
        }
    }
    va_end(arg);
    return cnt;
}

int main() {
    int n = 123;
    my_printf("%d\n", my_printf("hello world\n"));
    my_printf("%d\n", my_printf("n = %d\n", n));
    my_printf("%d\n", my_printf("n = %d\n", 12000));
    my_printf("%d\n", my_printf("n = %d\n", 0));
    my_printf("%d\n", my_printf("n = %d\n", -567));
    my_printf("%d\n", my_printf("n = %d\n", INT32_MAX));
    my_printf("%d\n", my_printf("n = %d\n", INT32_MIN));
    return 0;
}

