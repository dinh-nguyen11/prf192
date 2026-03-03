#include<stdio.h>
int is_Prime(int n){
	int i;
	if (n<2){
		return 0;
	}else
	for (i=2;i<n;i++){
		if (n%i==0){
			return 0;}
	}
	return 1;
}
int main (){
	int n,a,b,i;
	printf("nhap a: ");
	if (scanf("%d",&a)!=1){
		printf("Error!");
		while (getchar() != '\n');
    	return 0;
	}
	printf("nhap b: ");
	if (scanf("%d",&b)!=1){
		printf("Error!");
		while (getchar() != '\n');
    	return 0;}
    	printf("Cac so nguyen to trong [%d, %d] la:\n",a,b);
    	for (i=a;i<=b;i++){
    		if (i!=2&&i%2==0)
    		continue;
		if (is_Prime(i))
		printf("%d", i);
	}
return 0;
}