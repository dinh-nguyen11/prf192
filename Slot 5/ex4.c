#include<stdio.h>
int main (){
	int N, t, T;
	printf("N : ");
	scanf("%d",&N);
	if (N<=100 && N>0){
		t=950;
		
		//printf("so tien :%d",t);
	}
	else if ( N>100 && N<=150){
		t=1250;
		//printf("so tien :%d",t);
	}
	    else if (N>150 && N<=200){
	    	t=1350;
	    //	printf("so tien :%d",t);
		}
		   else {
		   t = 1550;
		   //printf("so tien :%d",t);
		   }
 printf("so tien :%d",t);
 return 0;
}