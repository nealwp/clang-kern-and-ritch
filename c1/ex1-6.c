#include <stdio.h>

int main()
{
    long nc;
    int c;

    nc = 0;
    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n') {
            ++nc;
        }
    }
    printf("%ld\n", nc);
}