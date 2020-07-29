#include <stdio.h>

main() 
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("fahr=0,20, ... 300に対する華氏-摂氏対応表\n\n");
    printf("fahr\tcelsius\n");
    printf("---------------\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
