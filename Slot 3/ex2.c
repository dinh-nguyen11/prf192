//khai bao kieu ki tu tên kt, khởi gán giá trị cho biến này 
//In  ra :giá trị của biến;
// giá trị thập phân, giá trị hex, giá trị octal
// kích thước dữ liệu của biến kt
#include<stdio.h>
int main (){
	char kt = 'r';
	printf("%-10s %-10s %-10s %-10s %-10s %-10s\n","Ten bien","Gia tri","Dec", "Hex","Oct", "Size");
	printf("%-10s %-10c %-10d %-10x %-10o %-10lu\n","kt",kt,kt,kt,kt,sizeof(kt));
	printf("gia tri cua bien:%c\n",kt);
	printf("gia tri thap phan:%d\n",kt);
	printf("gia tri hex:%x\n",kt);
	printf("gia tri octal:%o\n",kt);
	printf("kich thuoc cua bien kt:%lu\n",sizeof (kt));
	return 0;
}
