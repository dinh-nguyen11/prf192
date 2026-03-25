#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
typedef struct Point{
		int x;
		int y;
	}Point;
	void nhapDiem(Point a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap diem %d:\n", i+1 );
        printf("x y ");
        scanf("%d", &a[i].x,&a[i].y);
    }}
    void inDiem(Point a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("(%d, %d)\n", a[i].x, a[i].y);
    }}
    void diemLonHon(Point a[], int n) {
    printf("\nCac diem co y > x:\n");
    for (int i = 0; i < n; i++) {
        if (a[i].y > a[i].x) {
            printf("(%d, %d)\n", a[i].x, a[i].y);}}
}
int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    Point a[100];
    nhapDiem(a, n);

    
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 printf("\nDanh sach diem:\n");
    inDiem(a, n);
    diemLonHon(a, n);
  
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}