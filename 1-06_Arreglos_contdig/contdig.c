#include <stdio.h>
/* cuenta dígitos, epsacios blancos y otros */

int main(){
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    
    while((c = getchar()) != EOF)
        if('0' <= c && c <= '9' )
            ++ndigit[c-'0']; //conversión char2dig
        else if( c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;

    printf("dígitos = ");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", epacios blancos = %d, otros = %d\n", nwhite, nother);

            

}