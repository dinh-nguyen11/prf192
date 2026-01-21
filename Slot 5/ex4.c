#include<stdio.h>
int main (){
	int N, t, T;
	printf("N : ");
	scanf("%d",&N);
	if (N<=100 && N>0){
		T=950;
		t=N*950;
		//printf("so tien :%d",t);
	}
	else if ( N>100 && N<=150){
		T=1250;
		t=1250*(N-100)+950*100;
		//printf("so tien :%d",t);
	}
	    else if (N>150 && N<=200){
	    	T=1350;
	    	t=100*950+50*1250+(N-150)*1350;
	    //	printf("so tien :%d",t);
		}
		   else {
		   T = 1550;
		   t=100*950+50*1250+50*1350+(N-200)*1550;
		   //printf("so tien :%d",t);
		   }
 printf("so tien :%d",t);
 return 0;
}