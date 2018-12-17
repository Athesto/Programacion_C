#include <stdio.h>
#define MAXLINE 1000
int getline(char line[], int maxline);
void rmextra(char to[], char from[]);
/* imprime la linea de entrada más larga */

int main(){
    int len, max;
    char line[MAXLINE];
    char msg[MAXLINE];

    max = 0;
    while((len = getline(line, MAXLINE)) > 0){
        rmextra(msg, line);
        printf("%s\n", msg);

    }

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

/* rmextra: copia 'from' en 'to'; supone que to es lo suficientemente grande */

void rmextra(char to[], char from[]){
    int i = 0, j=0;
    while((to[i] = from[i]) != '\0')
       ++i;
    for(i; to[i] == '\n' || to[i] == '\t';--i)
        to[i]= '\0';
    


}