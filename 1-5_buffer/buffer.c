#include <stdio.h>

int main(){
    printf("buffer:\n");
    int c;
    c = getchar();
    while (c != EOF){ //EOF == Fin del archivo
        putchar(c);
        c = getchar();
    }
    return 0;
    
}