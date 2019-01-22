/*************************************************************************
	> File Name: binary_search.c
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2019年01月09日 星期三 18时30分17秒
 ************************************************************************/

#include<stdio.h>
//长度为n的数组查找数字x的下标
#define VERSION 4
#if VERSION == 4

int binary_search(int *arr, int n, int x) {
    int head = 0, tail = n - 1, mid;
    mid = (head + tail) >> 1;
    while (head <= tail) {
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] > x) {
            tail = mid - 1;
        } else {
            head = mid + 1;
        }
        mid = (head + tail) >> 1;
    }
    return -1;
}
#else 
int binary_search(int *arr, int n, int x) {
    printf("slow\n");
    return -1;
}
#endif

int main() {
    int arr[3] = {1, 3, 4};
    int n = binary_search(arr, 3, 4);
    printf("%d\n", n);
    return 0;
}
