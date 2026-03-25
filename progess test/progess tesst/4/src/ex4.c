#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int findLargestEvennumber(int a[],int n){
	int max;
	int found=0;
	for (int i=0;i<=n;i++){
		if(a[i]%2==0){
			if (found==0 || a[i]>max){
				max=a[i];
				found=1;
			}
	}
}
if (found==0){
	return -1;
}
return max;}
int main() {
	

  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n,a[100];
scanf("%d",&n);
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
}

  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
int result=findLargestEvennumber(a,n);
if(result==-1){
	printf("There are no even numbers in %d elements",n);
}  else{
	printf("%d",result);
}
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
