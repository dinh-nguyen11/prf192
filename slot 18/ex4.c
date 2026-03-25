#include <stdio.h>

struct Book {
    int id;
    char name[50];
    float price;
};

int main() {
    struct Book b[100];
    int n;

    printf("Nhap so luong book: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nBook %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &b[i].id);

        printf("Name: ");
        scanf(" %[^\n]", b[i].name); 

        printf("Price: ");
        scanf("%f", &b[i].price);
    }
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (b[i].price > b[maxIndex].price) {
            maxIndex = i;
        }
    }

    printf("\nBook co gia lon nhat:\n");
    printf("ID: %d\n", b[maxIndex].id);
    printf("Name: %s\n", b[maxIndex].name);
    printf("Price: %.2f\n", b[maxIndex].price);
    int x, found = 0;
    printf("\nNhap ID can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (b[i].id == x) {
            printf("Tim thay tai index: %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Not found");
    }

    return 0;
}