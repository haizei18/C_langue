/*************************************************************************
	> File Name: strcut.cpp
	> Author:zhangrui 
	> Mail:772962518@qq.com
	> Created Time: 2018年10月04日 星期四 10时26分16秒
 ************************************************************************/

#include<iostream>
using namespace std;
struct test {
    char a;
    short b;
    int c;
    double d;
};
//每个数据成员存储的起始位置要从该成员(每个成员本身)大小的整数倍开始(比如int在32位机为４字节,则要从４的整数倍地址开始存储)
int main(){
    struct test a;
    printf("sizeof(person) : %d\n", sizeof(struct person));
    printf("%p %p %p %p", &a.a, &a.b,&a.c, &a.c);
    return 0;

}
