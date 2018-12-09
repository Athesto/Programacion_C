#include <stdio.h>
#define SIZE 10
#define IN 1
#define OUT 0


int main(){
    int len_words[SIZE];
    int c, max_len = 0, counter = 0, state = OUT;

    for (int i = 0; i < SIZE; ++i)
        len_words[i]=0;
    
    while((c = getchar()) != EOF){
        if( c == '\n' || c == '\t' || c == ' '){
            state = OUT;
        } else if (state == OUT){
            state = IN;
            if (counter < SIZE)
                len_words[counter]++;
            else
                len_words[SIZE-1]++;
            counter = 0;

        } else{
            counter++;
            
    }
    }

    for(int i = 0; i<SIZE; ++i)
        if( len_words[i]>max_len)
            max_len = len_words[i];
    
    printf("Max: %d\n", max_len);
    for(int y=max_len;y>0;--y){
        for(int i=0; i<SIZE; ++i)
            printf("%c ",(len_words[i]>y)?'*':' ');
        putchar('\n');
    }

    for(int i = 0; i<SIZE; ++i)
        printf("%d ", i+1);

    putchar('\n');
    return 0;
}