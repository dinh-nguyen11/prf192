#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("INPUT:\n");
    fgets(str, sizeof(str), stdin);

    
    while (str[count] != '\0') {
        if (str[count] == '\n') break;
        count++;
    }
    printf("OUTPUT:\n%d",count);

    return 0;
}