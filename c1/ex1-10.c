#include <stdio.h>
// print words from input, one per line
#define YES 1
#define NO  0

int main()
{
    int c, inword;

    inword = NO;
    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            inword = NO;
            printf("%c", '\n');
        } else if (inword == NO) {
            inword = YES;
            printf("%c", c);
        } else if (inword == YES) {
            printf("%c", c);
        }
        
    }
}
