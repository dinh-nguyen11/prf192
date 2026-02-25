#include <stdio.h>

int main() {
    int n, sum = 0;

    while (1) {
        if (scanf("%d", &n) != 1) {
            printf("Nhap sai\n");
            break;
        }

        if (n == 0)
            break;

        if (n > 0)
            sum += n;
    }
    printf("%d", sum);
    return 0;
}



