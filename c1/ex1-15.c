#include <stdio.h>
#define MAXLINE 200

/* print all lines longer than 80 chars */

int getline2(char[], int);

int getline2(char s[], int lim)
{
    int c, i;    

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim) {
            s[i] = c;
        } 
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }
   
    s[i] = '\0';
    return(i);
}

int main()
{
    int len;
    char line[MAXLINE]; 

    while ((len = getline2(line, MAXLINE)) > 0) {
        if (len > 80) {
            printf("%d: %s\n", len, line);
        }
    }

}
