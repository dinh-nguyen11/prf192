#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
	int soMay, soNguoi, kq;
	srand(time(NULL));
	soMay=rand()%10+1;
	//printf("%d\n",soMay);//
	 while (1) {
        printf("Nhap so ban doan: ");
        kq = scanf("%d", &soNguoi);
        if (kq != 1) {
            printf("Nhap sai!\n");
            return 0;
        }
        if (soNguoi > soMay) {
            printf("Nho hon\n");
        } else if (soNguoi < soMay) {
            printf("Lon hon\n");
        } else {
            printf("Chinh xac! Ban da doan dung \n");
            break;
        }
    }
return 0;
}
