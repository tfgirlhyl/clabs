#include <stdio.h>
int main(void)
{
    printf("TENPTURE\n");
    int celsius,fahr;
    lower=0;
    upper=100;
    step=5;
    celsius=lower;
    printf("celsius\tfahr\n");
    while(celsius<=upper){
        fahr=9*celsius/5+32;
        printf("%d\t%d\n",celsius,fahr);
        celsius=celsius+step;
    }
}