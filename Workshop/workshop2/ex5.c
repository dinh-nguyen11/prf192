#include<stdio.h>
#include<math.h>
int main (){
	int n, sum=0,kq;
	while (1){
		kq=scanf("%d",&n);
	if (kq!=1|| n<0){
		printf("nhap sai");
		return 0;
	}
		if (n==0)
		break;
	    if (n>0){
	    	sum+=n;
		}
	}
printf("%d",sum);
return 0;
}


