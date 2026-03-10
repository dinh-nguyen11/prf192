#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Define matrix dimensions
#define ROWS 2
#define COLS 3

/**
 * TODO: Implement the function to calculate the sum of each row.
 * @param matrix: Input 2D integer array.
 * @param result: Output 1D int array to store the sum of each row.
 */
void findRowSum(int matrix[ROWS][COLS], int result[ROWS]) {
    int i,j,sum;

    for (i=0;i<ROWS;i++){
    	sum=0;
     for (j=0;j<COLS;j++){
       if(scanf("%d",&matrix[i][j])!=1){
       	printf("ERROR!");return;
	   }
	   sum+=matrix[i][j];}
	   result[i]=sum;}
}
/**
 * TODO: Implement the function to display the result array.
 */
void displayResults(int result[ROWS]) {
	int i;
    for(i=0;i<ROWS;i++){
    	printf("%d\n",result[i]);}
}
int main() {
    system("cls");
    printf("INPUT:\n");	
    //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
   int matrix[ROWS][COLS];
    int result[ROWS];
    findRowSum(matrix,result);
    displayResults(result);
    // OUTPUT: Hiển thị kết quả ra màn hình
    
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}