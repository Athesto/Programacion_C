#include <stdio.h>
#define MAXLINES 1000

int getline(char s[], int lim);
void reverse(char s[]);

int main(){
    char msg[MAXLINES] = "\0";
    getline(msg, MAXLINES);
    reverse(msg);
    printf("%s\n", msg);
    return 0;
}

int getline(char to[], int lim){
    int i = 0;
    while(i < lim - 1 && (to[i] = getchar()) != EOF)
        i++;
    to[i]='\0';
    return i;
}

void reverse(char s[]){
    int i = 0, c;
    while(s[i] != '\0')
        i++;
    for(int j = 0; j < i>>1; j++){
        c = s[j];
        s[j] = s[i-1-j];
        s[i-1-j] = c;
    }
}