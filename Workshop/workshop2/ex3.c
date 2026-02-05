#include<stdio.h>
#include<math.h>
int main(){
 int  n;
 int i;
 
	printf("nhap vao n ");
	while(scanf("%d",&n)!=1|| n<1||n>10){
		printf("nhap lai");
		fflush(stdin);
	}
	for(i=0;i<n;i++){
		printf("%d ", i);
	}
		for(i=1;i<=n;i++){
			printf("\n%d * %d= %d",n,i,n*i);
		}
return 0;	
}