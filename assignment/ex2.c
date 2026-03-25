//
#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("baitap2.txt", "w");

    if (fp == NULL) {
        printf("Loi mo FILE");
        return 1;
    }

    int n, a[100];

    printf("Nhap vao so n: ");
    scanf("%d", &n);   // ✅ sửa ở đây

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    fprintf(fp, "Gia tri n: %d\n", n);

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%d ", a[i]);
    }

    fclose(fp);
    return 0;
}
