#include<stdio.h>
int main (){
	float a, b ,c ,Max;
	printf("a, b, c :");
	scanf("%f %f %f",&a, &b, &c);
	if (a>b && a>c){
		Max=a;
	}
	
	 else if (b>a && b>c){
	 	Max=b;
	 }
	        else { Max=c;
			}
    printf("gia tri lon nhat: %.2f",Max);
return 0;
}