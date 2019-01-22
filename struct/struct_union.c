/*************************************************************************
	> File Name: struct_union.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月12日 星期六 11时03分37秒
 ************************************************************************/
//实现存储和输出任意类型的数组

#include<stdio.h>
#include<time.h>
#include<stdlib.h>


struct Number {
    int type; // 0-> int, 1 -> float
    union {
        int num1;
        float num2;
    } N;
};

void set(Number *n, int num) {
    n->type = 0;
    n->N.num1 = num;
}

void set(Number *n, float num) {
    n->type = 1;
    n->N.num2 = num;
}

void print(Number *n) {
    switch (n->type) {
        case 0:printf("%d\n", n->N.num1); break;
        case 1:printf("%f\n", n->N.num2); break;
    }
    return ;
}

int main() {
    #define MAX_N 20
    Number arr[MAX_N];
    srand(time(0)); //设置随机种子
    for (int i = 0; i < MAX_N; i++) {
        int op = rand() % 2;
        switch (op) {
            case 0: {
                int value = rand() % 100;
                set(arr + i, value);
            } break;
            case 1: {
                float value = 1.0 * (rand() % 10000) / 10000 * 100;
                set(arr + i, value);
            } break;
        }
    }
    for (int i = 0 ; i < MAX_N; i++) {
        print(arr + i);
    }
    return 0;
}
