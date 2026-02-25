#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
int n,i;
float fact=1.0,sum=0.0;
  if (scanf("%d",&n)!=1 || n<0){
  printf("Error");
  return 0;}
  else{
  	if(n==0){
  		printf("Error: n must be greater than 0.");
	  }else {
	
  	for(i=1;i<=n;i++){
  		fact*=i;
  		sum+=1.0/fact;}
  

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 printf("%.3f",sum);}
  
}
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
