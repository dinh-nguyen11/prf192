#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
void show_menu() {
    printf("\n===== MENU =====\n");
    printf("1. Cong (+)\n");
    printf("2. Tru (-)\n");
    printf("3. Nhan (*)\n");
    printf("4. Chia (/)\n");
    printf("0. Thoat\n");
    printf("Nhap lua chon: ");
}
void processor(int choice) {
    double a, b, result;
    if (choice == 0) {
        printf("Goodbye!\n");
        return;
    }
    printf("Nhap so thu nhat: ");
    if (scanf("%lf", &a)!=1){
    	printf("Error!\n");
    	while (getchar() != '\n');
    	return;
	}
    printf("Nhap so thu hai: ");
    if (scanf("%lf", &b)!=1){
    	printf("Error!");
        while (getchar() != '\n');
    	return;	}
    switch (choice) {
        case 1:
            result = a + b;
            printf("Ket qua: %.2lf\n", result);
            break;
        case 2:
            result = a - b;
            printf("Ket qua: %.2lf\n", result);
            break;
        case 3:
            result = a * b;
            printf("Ket qua: %.2lf\n", result);
            break;
        case 4:
            if (b == 0) {
                printf("Khong the chia cho 0!\n");} else {
                result = a / b;
                printf("Ket qua: %.2lf\n", result);}
            break;
        default:
            printf("Lua chon khong hop le!\n");}
}
int main() {
    int choice;
    do {
        show_menu();
        scanf("%d", &choice);
        processor(choice);} while (choice != 0);
    return 0;
}