#include <stdio.h>

int main() {
    char str[200];
    int i = 0;
    int digit = 0, letter = 0, other = 0;
    printf("INPUT:\n");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            digit++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') ||
                 (str[i] >= 'A' && str[i] <= 'Z')) {
            letter++;
        }
        else if (str[i] != '\n') { 
            other++;
        }
        i++;
    }
    printf("\nOUTPUT:\n");
    printf("%d\n", digit);
    printf("%d\n", letter);
    printf("%d", other);
    return 0;
}