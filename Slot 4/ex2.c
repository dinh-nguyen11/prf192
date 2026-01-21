#include<stdio.h>
//khai bao 3 bien ngay,thang,nam
//nhap ngay/thang/nam
int main (){
	int ngay,thang,nam;
	scanf("%d/%d/%d ",&ngay ,&thang,&nam);
	printf("%02d/%02d/%d", ngay, thang, nam);
	return 0;
}