#include<stdio.h>
#include<math.h>
int main (){
	float n;
	while (n<=0 || n>=1000){
		printf("nhap vao n: ");
		scanf(" %f",&n);
	}
	printf("can bac hai cua n : %.2f",sqrt(n));
return 0;
}