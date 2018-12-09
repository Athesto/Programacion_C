#include <stdio.h>
#define VSIZE ('~'-' '+1)
int main(){
    int c,max_val = 0, domain[VSIZE];
    for(int i = 0; i<VSIZE;i++)
        domain[i]=0;

    while((c = getchar()) != EOF)
        if(c > ' ')
            domain[c - ' ']++;

    for(int i = 0; i < VSIZE; i++)
        if(domain[i]>max_val)
            max_val = domain[i];

    for(int y = max_val; y > 0; y--){
        for(int i = 0; i < VSIZE; i++)
            printf("%c",(domain[i]>y)?'*':' ');
        putchar('\n');
    }
    for(int i = 0; i <= VSIZE; ++i)
        printf("%c", i + ' ');
    putchar('\n');


    return 0;
}