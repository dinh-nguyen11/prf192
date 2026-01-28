#include<stdio.h>
int main (){
	float a,b,c,Max;
	printf("a : ");
	scanf("%f", &a);
	printf("b :");
	scanf("%f", &b);
	printf("c : ");
	scanf("%f", &c);
	Max=a;
	if (b>Max) 
	    Max=b;
    if (c>Max)
    	Max=c;
    printf("gia tri lon nhat:%.2f",Max);
return 0;
}