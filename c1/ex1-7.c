#include <stdio.h>
// copy input to output, replace each string of 1 or more blanks
// with a single blank
int main()
{
    long nc;
    int c;

    nc = 0;
    while ((c = getchar()) != EOF){
        printf("%s", c);
    }
}
