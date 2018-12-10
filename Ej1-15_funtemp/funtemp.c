#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

float fahr2cel(float fahr);

int main(){ 
    int fahr;
    for(fahr = LOWER; fahr<UPPER; fahr +=STEP){
        printf("%3d %6.1f\n",fahr,fahr2cel(fahr));
        }
    printf("\n");
    return 0;
}

float fahr2cel(float fahr){
    return (5.0/9.0)*(fahr-32);
}
