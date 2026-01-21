#include<stdio.h>
int main() {
	int a,b;
	printf("nhap so thuc\n");
	scanf("%d.%d",&a,&b);
	printf("gia tri da nhap :%d.%d\n",a,b);
	printf("phan nguyen la :%d\n",a);
	printf("phan thuc la : 0.%d\n",b);
	return 0;
}