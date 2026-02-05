#include<stdio.h>
int main (){
	int soDU=10000000;
	int luaChon, rutTien;
	while( soDU>0){
		printf("\nsoDU hien tai:  %d",soDU);
		printf("\n1.rut tien");
		printf("\n0.thoat");
		printf("\nLua chon ");
		if (scanf("%d",&luaChon)!=1){
			printf("vui long nhap lai");
			return 0;}
		if(luaChon==0){
			break;
		}else if (luaChon==1){
			printf("nhap so tien rut ");
			scanf("%d",&rutTien);
			if (soDU>rutTien && rutTien>0){
				soDU-=rutTien;
			}else {
			printf("khong hop le");}
	}
		else{printf("Lua chon khong phu hop\n");}
	}
	if (soDU<0){
		printf("\nso du khong du.KET THUC");}
return 0;	
}
