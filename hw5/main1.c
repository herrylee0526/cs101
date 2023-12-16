#include <stdio.h>

int main() {
    int n = 7;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n * 2 - 1; j++) {
            if (j <= n - i || j >= n + i) {
                printf(" ");
            }else if(j==14){
                printf("%d",i);
            }
            else {
                printf("%d ", i);
                j++;
            }
        }
        printf("\n");
    }

    return 0;
}

