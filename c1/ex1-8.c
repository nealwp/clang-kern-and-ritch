#include <stdio.h>
// replace tabs and backspaces with alligators
int main() 
{
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("%c%c%c", '>', '>', '>');
        } else if (c == '\b') {
            printf("%c%c%c", '<','<','<');
        } else {
            printf("%c", c);
        }
    }
}
