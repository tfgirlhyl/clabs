#include <stdio.h>

int main()
 {
    printf("TEMPTURE\n");
   float celsius , fahr ;
    int lower ,upper, step;

    lower = 0;
    upper = 100;
    step = 5;

    celsius = lower;
    printf("celsius\tfahr\n");
    while (celsius <= upper){
        fahr =(9*celsius)/5+32;
        printf("%3.0\t%6.1\n", celsius,fahr);
        celsius = celsius + step;
        
    }
}
