#include <stdio.h>

int main() {
    for (int i = 1; i <= 9 * 9; i++) {
        printf("%d*%d=%d\t", (i - 1) / 9 + 1, (i - 1) % 9 + 1, ((i - 1) / 9 + 1) * ((i - 1) % 9 + 1));
        
        if (i % 9 == 0) {
            printf("\n");
        }
    }

    return 0;
}
