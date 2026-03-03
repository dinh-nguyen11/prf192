#include<stdio.h>
float calculate_salary(float hours, float rate){
	float fee=0;
	if (hours<0||rate<0){ 
		return -1;
	}else{
	 if (hours<=40){
		fee=hours*rate;}
		else {
			fee=40*rate+(hours-40)*1.5*rate;}
	return fee;}
}
int main (){
	float hours, rate;
	printf("hours rate :");
	if (scanf("%f %f",&hours,&rate)!=2){
		printf("Nhap lai!");
		return 0;}
	 float salary=calculate_salary(hours,rate);
	 if(salary<0){
	 	printf("Error");}
	 else {printf("%.3f",salary);}
return 0;
}