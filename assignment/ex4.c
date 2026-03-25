#include<stdio.h>
typedef struct sinhvien{
	int id;
	char name[30];
	float grade;
}sinhvien;
int main(){
	FILE *fp;
	fp= fopen("baitap4.txt","w");
	if(fp==NULL){
		printf("Loi mo FILE");
		return 1;
	}
	int n;
	printf("Nhap so sinh vien: ");
	scanf("%d",&n);
 sinhvien a[100];
 for(int i=0;i<n;i++){
 	printf("sinh vien %d:\n ",i+1);
 	printf("ID: ");
 	scanf("%d",&a[i].id);
 	getchar ();
 	printf("Name: ");
 	scanf("%[^\n]", a[i].name);
 	printf("Grade: ");
 	scanf("%f",&a[i].grade);
 	getchar ();
 }
	fprintf(fp,"Gia tri n: %d\n",n);
	 for(int i=0;i<n;i++){
        fprintf(fp," %d\n %s\n %.1f\n",
                a[i].id, a[i].name, a[i].grade);
    }
	//dong file
	fclose(fp);
	return 0;}