#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n, i,a[100];
int j,k=0, b[100];
if (scanf("%d",&n)!=1||n<=0){
	  printf("OUTPUT:\n");
printf("Invalid input");return 0;}
for (i=0;i<n;i++){
	scanf("%d",&a[i]);
if(a[i]%2==0){
	b[k]=a[i];
	k++;
}}

for(i=0;i<k-1;i++)
 for(j=i+1;j<k;j++){
 	if(b[i]<b[j]){
	int temp=b[i];
	b[i]=b[j];
	b[j]=temp;}
}
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  for(i=0;i<k;i++){
  printf("%d\n",b[i]);}
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
