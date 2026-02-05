#include<stdio.h>
int main (){
	char op;
	int a,b;
	float T;
	int soDU;
	scanf("%d %d", &a, &b);
	scanf(" %c", &op);
	switch (op) {
		case '+':
		    T=a+b; 
			break;
		case '-':
			T=a-b;
			break;
		case '*':
			T=a*b;
			break;
		case '/':
			if (b==0){
			printf("khong the chia cho 0");
			return 0;
			}
			T=(float)a/b;
			printf("%d %c %d =%.2f",a,b,T);
			break;
		case '%':
			if (b==0){
				printf("khong the chia cho 0");
				return 0;
			}
		     soDU=a%b;
		    printf("%d %c %d =%d",a,op,b,soDU);
		    return 0;;
		default: printf("khong hop le");	
	}
printf("%d %c %d=%d",a,b,T);
return 0;
}