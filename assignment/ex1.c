// 1. tạo file text''naitap1.txt'', ghi 1 số vào file này
#include<stdio.h>
int main(){
	FILE *fp;
	fp= fopen("baitap1.txt","w");
	if(fp==NULL){
		printf("Loi mo FILE");
		return 1;
	}
	int n;
	printf("Nhap vao so n: ");
	scanf("%d",&n);
	fprintf(fp,"Gia tri n: %d",n);
	//dong file
	fclose(fp);
	return 0;
}
