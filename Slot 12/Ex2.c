#include<stdio.h>
int getinput(){
	int n;
	printf("");
	scanf("%d",&n);
	return n;
}
 int traMax3(int a, int b, int c){
 	int max;
 	max=a;
 	if(b>max) {max =b;}
 	if(c>max){max =c;}
 	return max;
	 
 }
 int main (){
 	int a,b,c;
 	a=getinput();
 	b=getinput();
 	c=getinput();
 	int result=traMax3(a,b,c);
 	printf("%d",result);
 	return 0;
 }