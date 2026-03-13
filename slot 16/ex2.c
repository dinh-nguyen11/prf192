#include <stdio.h>

int isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
       c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        return 1;
    return 0;
}

int countVowel(char *p){
    int count = 0;

    while(*p != '\0'){
        if(isVowel(*p)){
            count++;
        }
        p++;   // di chuy?n pointer
    }

    return count;
}

int main(){

    char s[100];

    fgets(s,100,stdin);

    printf("%d",countVowel(s));

    return 0;
}