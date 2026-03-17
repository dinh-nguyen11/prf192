#include <stdio.h>

int main() {
    char str[100];
    char target, replace;
    int i = 0, count = 0;

    printf("INPUT:\n");
    scanf("%s", str);      
    scanf(" %c", &target); 
    scanf(" %c", &replace);
    while (str[i] != '\0') {
        if (str[i] == target) {
            str[i] = replace;
            count++;
        }
        i++;
    }

    printf("\nOUTPUT:\n");
    printf("%d\n", count);

    if (count > 0) {
        printf("%s", str);
    }

    return 0;
}