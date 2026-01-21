#include<stdio.h>
int main (){
	int x;
	printf("so nguyen x: ");
	scanf("%d",&x);
	int preX = x;
	if (x<0)
	x=-x;
	printf("|%d|=%d\n",preX,x);
	printf("can bac hai cua x :%.2f\n",sqrt(x));
    return 0;
}