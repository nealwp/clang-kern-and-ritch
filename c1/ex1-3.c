#include <stdio.h>
// print a heading above the temperature table
int main()
{
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%s\t%s\n", "Fahr.", "Cels");
    printf("===============\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        /* %4.0 -> at least 4 chars, no decimals. %6.1 -> at least 6 chars, one decimals */
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
