#include<stdio.h>
#include<math.h>
int main(){
	float n;
	int count=0;
	while(1) {
	if (count==5){
//	while(count<5){//
		printf("nhap vao n ");
	
		while(scanf("%f",&n)!=1||n<=0||n>1000){
	    printf("nhap lai: ");
	    fflush(stdin); 
	}
	printf("da xong xs: %.2f\n",sqrt(n));
	count++;
}
}
printf("\nDa xong, xuat sac");
return 0;
}