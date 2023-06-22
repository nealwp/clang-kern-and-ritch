#include <stdio.h>
#define MAXLINE 100

/* correctly print length of arbitrarily long lines, and as much as possible of the text */

int getline2(char[], int);
void copy(char[], char[]);

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


void copy(char s1[], char s2[])
{
    int i;

    i = 0;
    while ((s2[i] = s1[i]) != '\0') {
        ++i;
    }
}

int main()
{
    int len, max;
    char line[MAXLINE], save[MAXLINE];

    max = 0;
    while ((len = getline2(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(line, save);
        }
    }


    if (max > 0) {
        printf("%d: %s\n", max, save);
    }
}
