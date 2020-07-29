#include <stdio.h>

main() 
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("celsius=0,20, ... 300に対する摂氏-華氏対応表\n\n");
    printf("celsius\tfahr\n");
    printf("---------------\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9 * celsius + 160) / 5;
        printf("%d\t%d\n", celsius, fahr);
        celsius = celsius + step;
    }
}
