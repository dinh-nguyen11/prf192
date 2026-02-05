#include<stdio.h>
#include<math.h>
int main (){
    int n, bin = 0, p = 1;
    printf("nhap n: ");
if (scanf("%d",&n)!=1 || n<0){
	printf("nhap sai");
	return 0;
}
if ( n==0){
	printf("0");
	return 0;
}
    while (n > 0) {
        bin = bin + (n % 2) * p;
        n /= 2;
        p *= 10;
    }

    printf("%d", bin);
    return 0;
}


