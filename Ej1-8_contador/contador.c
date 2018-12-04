
#include <stdio.h>

int main(){
    int c,tab,ln,space;

    tab=0;
    ln=0;
    space=0;
    while((c=getchar())!=EOF){
        switch(c){
            case '\n': ln++; break;
            case '\t': tab++; break;
            case ' ': space++; break;
            default: break;
            
        }
    }
    printf("spaces: %d \ntabs: %d \nnlines: %d\n",space,tab,ln);

    return 0;
}