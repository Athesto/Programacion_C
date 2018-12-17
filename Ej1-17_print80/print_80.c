#include <stdio.h>
#define MAXLINE 1000
int getline(char line[], int maxline);
void append(char to[], char from[]);
/* imprime la linea de entrada más larga */

int main(){
    int len, max;
    char line[MAXLINE];
    char msg[MAXLINE] = "\0";

    max = 0;
    while((len = getline(line, MAXLINE)) > 0)
        if(len > 80){
            max = len;
            append(msg, line);
        }
    if( max > 0) /*hubo una línea*/
        printf("%s", msg);
    return 0;

}

/*getline: lee una linea en s, regresa su longitud*/

int getline(char s[], int lim){
    int c, i;
    for( i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    
    if( c == '\n'){
        s[i] = c;
        ++i;

    }
    s[i] = '\0';
    return i;
}

/* append: copia 'from' en 'to'; supone que to es lo suficientemente grande */

void append(char to[], char from[]){
    int i = 0, j = 0;
    while(to[j] != '\0')
        j++;
    while((to[i+j] = from[i]) != '\0') 
        ++i; 
}