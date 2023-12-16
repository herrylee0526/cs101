#include <stdio.h>

int main() {
    int n = 12345;
    int t3 =n / 10000;
    int t2 = (n / 1000)-(10*t3);
    int h = (n % 1000) / 100;
    int t1 = (n % 100) / 10;
    int u = n % 10;
    int r = t3 * 10000 + u * 1000 + h * 100 + t1 * 10 + t2;

    printf("原始數字：%d\n", n);
    printf("調換後的數字：%d\n", r);

    return 0;
}