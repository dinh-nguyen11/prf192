#include<stdio.h>
int getinput(){
	int n;
	printf("nhap n ");
	scanf("%d",&n);
	return n;
}
  
//viet ham nhap
int nhapInt(){
int soInt;
printf("nhap so int");
while(scanf("%d",&soInt)!=1|| soInt<=0){
	printf("nhap sai!\nNhap lai: ");
	fflush(stdin);
}
return soInt;
}
int sumDivisors(int n){
	int i, sum=0;
	for (i=1; i<=n;i++ ){
		if(n%i==0){
			sum+=i;
		}
	}
	return sum;
}
int main (){
	int n=getinput();
	int result=sumDivisors( n);
	printf("%d\n",result);
	return 0;
}