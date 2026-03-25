#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	typedef struct Point{
		int x;
		int y;
	}Point;
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d",&n);
  Point a[100];
  for (int i = 0; i < n; i++) {
        printf("Nhap diem %d:\n", i );
        printf("x = ");
        scanf("%d", &a[i].x);
        printf("y = ");
        scanf("%d", &a[i].y);
    }	
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (int i = 0; i < n; i++) {
        printf("(%d, %d)\n", a[i].x, a[i].y);
    }

 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}