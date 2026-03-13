#include <stdio.h>

void swap3(int *a, int *b, int *c){
    int temp;

    temp = *a;   // lưu a ban đầu
    *a = *c;     // a nhận giá trị của c
    *c = *b;     // c nhận giá trị của b
    *b = temp;   // b nhận giá trị a ban đầu
}
void swap2(int *x,int *y){
	int temp;
	temp=*x;// luu x ban dau
	*x=*y;//x nhan gia tri y
	*y=temp;//y nhan gia tri x ban dau
	}
int main(){

    int a,b,c;
    int x,y;

    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d",&x,&y);

    swap3(&a,&b,&c);
    swap2(&x,&y);

    printf("%d %d %d\n",a,b,c);
    printf("\n%d %d",x,y);

    return 0;
}