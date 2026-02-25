#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
  int x,y,i,sum=0;
  
  if (scanf("%d %d",&x,&y)!=2){
  	printf("Error!");
  	return 0;
  }
  if (x<y) {
  	for (i=x ;i<=y;i++){
  	if(i%2 !=0){
  		sum+=i;}
  	}
  }
  

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d",sum);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
