#include<stdio.h>
int calculate_taxi_fare(float distance){
	float fee=0;
	if(distance<0){
		return -1;}
	if (distance<=1 && distance>0){
		fee=distance*15.000;	}
		else if (distance>1 && distance<=30){
			fee=15.000+12.000*(distance -1);
		} else if (distance>30){
			fee=15.000+29*12.000+10.000*(distance-30);}
		return fee;
}
int main(){
	float distance;
	printf("khoang cach ");
	if (scanf("%f",&distance)!=1){
		printf("Error");
		return 0;}
		float cost=calculate_taxi_fare(distance);
	if (cost<0){
		printf("ERROR!");
	}
else{printf("%.3f",cost);
}
	return 0;
}

