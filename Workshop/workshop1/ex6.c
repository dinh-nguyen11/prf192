#include<stdio.h>;
int main (){
	float cc,gk,ck,T;
	char chu;
	scanf("%f %f %f",&cc, &gk, &ck);
	T=cc*0.1+gk*0.3+ck*0.6;
	if (T>=8){
		chu='A';
	 }else if (T<8 && T>=6){
		chu='B';
	  } else if (T<6 && T>=4){
		chu='C';
	     }else if (T<4 && T>=2){
		chu='D';
	      }else chu='F';
	if (cc,gk,ck>=4 && chu !='F'){
		printf("DAT!");
	}else printf("Khong DAT!");
return 0;
}