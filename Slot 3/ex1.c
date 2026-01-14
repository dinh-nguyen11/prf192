//khai bao va khoi tao gia tri cho 2 so a ,b nguyen
// khai bao bien kq
// hay in ket qua : +,-,*,/ cua a,b
#include<stdio.h>
int main (){
	int a= 7;
	int b=2;
	float kq;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	kq= a+b;
	printf("%d+%d=%.0f\n",a,b,kq);
	kq= a-b;
	printf("%d-%d=%.0f\n",a,b,kq);
	kq=a*b;
	printf("%d*%d=%.0f\n",a,b,kq);
	kq=(float)a/b;
	printf("%d/%d=%.2f\n",a,b,kq);
	return 0;
}