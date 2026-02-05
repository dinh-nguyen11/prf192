#include<stdio.h>
int main (){
int a, b,kq;
scanf("%d%d", &a, &b);
if (a==0 && b==0){
	printf("khong ton tai UCLN");
	return 0;
}
if (a<0) a=-a;
if (b<0) b=-b;

while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
}
printf("UCLN = %d", a);
return 0;
}
