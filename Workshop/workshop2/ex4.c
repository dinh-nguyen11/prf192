#include<stdio.h>
#include<math.h>
int main (){
	int n, dao=0,kq,am=0;
	printf("nhap so n: ");
	kq=scanf("%d",&n);
	if(kq!=1){
		printf("nhap sai");
		return 0;
	}
	if (n<0){
		am=1;
		n=-n;
	}
	while(n!=0){
		dao=dao*10+n%10;
		n=n/10;
	}
	if (am){
		dao=-dao;
	}
printf("%d",dao);
return 0;
}


