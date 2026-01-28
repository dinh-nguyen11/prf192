#include<stdio.h>
int main (){
 float t,km,p,c;
 printf("nhap km:");
if (scanf("%f",&km) !=1 || km<0) {
	printf("nhap sai kieu du lieu km");
	return 0;
}
 printf("nhap phut: ");
 scanf("%f",&p);
 if (p<0){
 	printf("nhap sai phut!");
 	return 0;
 }
 	c=0;
   if (p>5) {
     c=(p-5)*1.000; 
    }
     if (km<=0.5) {
 	  t=c+12.000;
      }
      else if ( km<=30){
 	    t=c+12.000+(km-0.5)*15.000;
         }
         else {
 	     t=c+12.000+29.5*15.000+(km-30)*12.000;
 }
 printf("%-10s %-10s %-10s\n","So km", "So phut du", "Tong tien");
 printf("%-10.0f %-10.0f %-10.3f\n",km,p,t);
 return 0;
}
