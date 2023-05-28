main()
{
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("%s\t%s\n", "C", "F");
    printf("===============\n");
    /* (c × 9/5) + 32 = f */
    while (celsius <= upper) {
        fahr = (celsius * (9.0/5.0)) + 32; 
        /* %4.0 -> at least 4 chars, no decimals. %6.1 -> at least 6 chars, one decimals */
        printf("%4.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
