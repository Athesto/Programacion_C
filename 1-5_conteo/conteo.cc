//En el libro no se especifica como se genera el caracter EOF
//https://stackoverflow.com/questions/3646255/problem-with-example-1-5-2-in-kr-book-on-c
//En stackoverflow encontré que se puede generar con `Ctrl`+`D` en linux y `Ctrl`+`Z` en Windows

#include <stdio.h>
int main(){
    long nc;
    nc = 0;
    while(getchar() != EOF)
        ++nc;
    printf("%ld\n",nc);
        
    return 0;
}