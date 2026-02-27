#include<stdio.h>
void inASCII(){
	char c;
	for (c='A';c<='Z';c++){
		printf("%c : %d\n",c,c);
	}
	return inASCII;
}
int main (){
	inASCII();
	return 0;
}