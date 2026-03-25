#include <stdio.h>

typedef struct sinhvien{
    int id;
    char name[50];
    float grade;
} sinhvien;

int main(){
    FILE *fp;
    fp = fopen("baitap3.txt", "w");

    if(fp == NULL){
        printf("Loi mo FILE");
        return 1;
    }

    sinhvien sv;

    printf("Nhap id: ");
    scanf(" %d", &sv.id);

    printf("Nhap name: ");
    scanf(" %[^\n]", sv.name);

    printf("Nhap grade: ");
    scanf(" %lf", &sv.grade);

    // ghi vào file
    fprintf(fp, " %d\n %s\n %.1f\n", sv.id, sv.name, sv.grade);

    fclose(fp);

    return 0;
}
