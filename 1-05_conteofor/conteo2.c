#include <stdio.h>

/* Cuenta los caracteres de la entrda; 2a. versión
*/

int main(){
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
    ;
    printf("%.0f\n", nc);
    return 0;
}