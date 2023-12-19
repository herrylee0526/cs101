#include<stdio.h>

int main()
{
    double PI = 4.0f;
    int h = -1;
    int i = 3;
    while (1){
        PI += (4.0/i)*h;
        h *=-1;
        i += 2;
        if (PI - 3.14159 > -0.0000001 && PI - 3.14159 < 0.0000001) break;
    }
    printf("%d %.5f", i, PI);
    return 0;
}