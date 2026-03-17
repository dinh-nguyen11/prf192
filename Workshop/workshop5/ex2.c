#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("INPUT:\n");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0') {
        if (str[length] == '\n') break;
        length++;
    }
    printf("OUTPUT:\n");
    for (int i = length - 1; i >= 0; i--) {
    printf("%c",str[i]);
    }

    return 0;
}