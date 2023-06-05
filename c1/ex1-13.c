#include <stdio.h>

int lower(c)
int c;
{
    // A-Z: 65-90
    // a-z: 97-122
    if (c >= 65 && c <= 90) {
        c += 32;
    }

    return(c);
}

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        printf("%c", lower(c));
    }
}
