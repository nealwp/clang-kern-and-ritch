#define EOF 0

main()
{
    int c;

    c = getchar();
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}
