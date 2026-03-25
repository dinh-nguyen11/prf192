#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int a,b;
double x;
scanf("%d %d",&a,&b);
x=pow(a,b);


  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%.0lf",x);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
