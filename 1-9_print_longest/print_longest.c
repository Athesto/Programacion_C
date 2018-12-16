/* Se cambio el getline por getnline por compatibilidad */
#include <stdio.h>
#define MAXLINE 1000
int getnline(char line[], int maxline);
void copy(char to[], char from[]);
/* imprime la linea de entrada más larga */

int main(){
    int len, max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = getnline(line, MAXLINE)) > 0)
        if(len > max){
            max = len;
            copy(longest, line);
        }
    if( max > 0) /*hubo una línea*/
        printf("%s", longest);
    return 0;

}

/*getnline: lee una linea en s, regresa su longitud*/

int getnline(char s[], int lim){
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

/* copy: copia 'from' en 'to'; supone que to es lo suficientemente grande */

void copy(char to[], char from[]){
    int i = 0;
    while((to[i] = from[i]) != '\0') 
        ++i; 
}