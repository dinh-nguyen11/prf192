#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Function to check if a number is a prime number
int isPrime(int n) {
    //@STUDENT: WRITE YOUR CODE HERE
   if (n<2){
   	return 0;
   }
   for(int i=2;i*i<n;i++)
   	if(n%i==0)
   		return 0;
   return 1;
    
}
void displayPrime(int arr[], int size){
	int i;
	int found=0;
	for(i=0;i<size;i++){
		if (isPrime(arr[1])){
			scanf("%d ",&i);
			found =1;
		}
		if(found==0){
			printf("not found");
		}
		
	}
}

// Function to count prime number numbers in an array
int countPrimes(int arr[], int size){
    int count = 0;

    for(int i = 0; i < size; i++){
        if(isPrime(arr[i]) == 1){
            count++;
        }
    }

    return count;
}

int main() {
  system("cls");
  
  // Fixed Do not edit anything here.
  printf("INPUT:\n");
  //@STUDENT:ADD YOUR CODE FOR INPUT HERE:
   int n, i;
  int invalid=0;
  if (scanf("%d",&n)!=1|| n<=0){
  	invalid=1;
  }
  int a[n];
  for(i=0;i<n;i++){
  	scanf("%d",&a[i]);
  }
    printf("\nOUTPUT:\n");
  if (invalid==1){
  	printf("invalid input");
  	return 0;}
  int result =countPrimes(a,n);
  printf("%d",result);
  
  
  
  // Fixed Do not edit anything here.
  //printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}