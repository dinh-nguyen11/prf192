#include<stdio.h>
#include<math.h>
int main(){
	int kq, n, i=0, laChinhphuong=0;
	printf("nhap so n: ");
	kq=scanf("%d",&n);
	if 	(kq!=1 || n<0){
	printf("nhap sai");
	return 0;}
	 while(i*i<=n){
		if(i*i==n){
		 laChinhphuong=1;
		  break;
	}
	i++;
}
	if(laChinhphuong){
		printf("la so chinh phuong");
	}
		else printf("khong la sao chinh phuong");
	return 0;
}



