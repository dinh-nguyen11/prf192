#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n,a[100];
int count=0;
int i;
if(scanf("%d",&n)!=1 || n<=0){
    printf("Invalid input");
    return 0;}
for( i=0;i<n;i++){
    scanf("%d",&a[i]);}
int found=0;
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  for(i=0;i<n;i++){
    if(a[i]%2==0){
        int seen=0;
        for(int j=0;j<i;j++){
            if(a[j]==a[i]) seen=1;}
        if(!seen){
        	int count=0;
            for(int j=0;j<n;j++){
                if(a[j]==a[i]) count++;}
   printf("%d-%d\n",count,a[i]);
            found=1;}}}
if(!found) printf("Not found\n");
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
