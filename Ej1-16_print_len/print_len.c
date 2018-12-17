#include <stdio.h>
#define MAXLINE 10
int getline(char line[], int maxline);
/* imprime la linea de entrada más larga */

int main(){
    int len, c;
    char line[MAXLINE];

    while((len = getline(line, MAXLINE)) > 0){
        if(line[len-1] != '\n'){  /*Revisa si hubo una Nueva Linea*/
           line[len-1] = '\n';
           while((c = getchar())!=EOF && c != '\n') /* cuenta hasta encontrar una nueva linea o el fin del documento* */
                len++;
        }
        printf("(%3d) - %s\n", len, line);
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
