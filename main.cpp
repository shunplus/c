#include <cstdio>

int main() {
    printf("学习C语言");
//打印基本数据类型
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(long long));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(long double));
    printf( "=============\n");


    printf("%d\n",-1);
    printf("%u\n",-1);
    char  c=128;
    printf( "=============\n");
    printf("%d\n",c);
    printf("%hhd\n",c);
    printf("%hd\n",c);
    printf("%hu\n",c);
    return 0;
}
