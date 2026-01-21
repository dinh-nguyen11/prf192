#include<stdio.h>
int main (){
	char pt;
	int a,b;
  printf("nhap so a,b:");
  scanf("%d %d",&a,&b);
  printf("Nhap phep toan:");
  scanf(" %c",&pt);
  if (pt == '/') {
  	if (b!=0) {
  		printf("ket qua: %.2f\n", (float)a/b);
	  } else {
	  	printf("khong the chia cho 0\n");
	  }
  }
  system ("pause");
     return 0;
}