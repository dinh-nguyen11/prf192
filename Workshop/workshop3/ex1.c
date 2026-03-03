#include<stdio.h>
int is_leap_year(int year){
	if (year%400==0)
	return 1;
	else if (year%4==0 && year%100 !=0)
	return 1;
	else return 0;}
int get_days_in_month(int month,int year){
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		return 31;
		case 4: case 6: case 9: case 11:
			return 30;
		case 2:
			if (is_leap_year(year))
			return 29;
			else return 28;
			default: return -1;}}
int main (){
	int year, month;
	printf("month year :");
	if (scanf("%d %d",&month,&year)!=2){
		printf("Error!");
		return 0;}
	int days=get_days_in_month( month, year);
	printf("%d",days);
return 0;}


