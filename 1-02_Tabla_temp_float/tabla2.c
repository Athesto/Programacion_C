#include <stdio.h>
/* imprime la tabla Fahrenheit-Celsius
    para fahr = 0,20,...,300 */
int main(){
    float fahr, celcius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper){
        celcius = 5.0*(fahr-32.0)/9.0;
        printf("%3.0f\t%6.1f\n", fahr, celcius);
        fahr= fahr+step;

    }
    return 0;
}