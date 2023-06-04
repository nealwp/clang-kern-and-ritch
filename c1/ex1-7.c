#include <stdio.h>
// copy input to output, replace each string of 1 or more blanks
// with a single blank
int main()
{
    long nc;
    int c;
    int isSpace = 0;

    nc = 0;
    while ((c = getchar()) != EOF){
        
        if(!isSpace && c == ' ') {
            isSpace = 1;
            printf("%c", c);
            continue;
        } 

        if(isSpace && c != ' ') {
            isSpace = 0;
            printf("%c", c);
            continue;
        }
        
        if(isSpace && c == ' ') {
            continue;
        } 
        
        if(!isSpace && c != ' ') {
            printf("%c", c);
        }
    }
}
