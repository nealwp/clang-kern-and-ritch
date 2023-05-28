#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
    float fahr, celsius;

    fahr = LOWER;
    while (fahr <= UPPER) {
        celsius = (5.0/9.0) * (fahr-32.0);
        /* %4.0 -> at least 4 chars, no decimals. %6.1 -> at least 6 chars, one decimals */
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
}
