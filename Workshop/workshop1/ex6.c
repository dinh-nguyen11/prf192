#include<stdio.h>
int main (){
	float cc,gk,ck,T;
	char diemchu;
	printf("nhap diem chuyen can, giua ki, cuoi ki :");
	if(scanf("%f %f %f",&cc,&gk,&ck)!=3 || cc<0 || gk<0 || ck<0 ){
		printf("Nhap sai!");
		return 0;
	 }else T=cc*0.1+gk*0.3+ck*0.6;
	  if (T>=8.5 && T<=10){
		  diemchu='A';
	    }else if (T<8.5 && T>=7){
	    	diemchu='B';
	     } else if (T<7 && T>=5.5){
	    	diemchu='C';
	       }else if (T<5.5 && T>4){
	     	diemchu='D';
	         }else diemchu='F';
	if (cc>=4 && gk>=4 && ck>=4 && diemchu !='F'){
		printf("BAN DU DIEU KIEN TOT NGHIEP!");
	     }else printf("BAN KHONG DU DIEU KIEN TOT NGHIEP!");
return 0;
}