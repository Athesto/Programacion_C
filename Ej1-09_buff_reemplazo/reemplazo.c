#include <stdio.h>

int main(){

    int c,last_c;
    while((c = getchar()) != EOF){
        if(c != ' ' ||  c != last_c){
            putchar(c);
        }
        last_c=c;
    }
    return 0;
}