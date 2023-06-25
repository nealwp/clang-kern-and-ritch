#include <stdio.h>
#define MAXLINE 200
#define TRUE 1
#define FALSE 0

/* remove trailing blanks and tabs from each line; delete blank lines */

int trimwhites(char[], int);

int trimwhites(char s[], int len)
{
    int i = len - 1;

    while(i >= 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' )) {
        s[i] = '\0';
        --i;
    }

    return 0;
}

int main()
{
    int len, c;
    char line[MAXLINE]; 

    len = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            line[len] = '\0';
            trimwhites(line, len);
            printf("%s\n", line);
            len = 0;
        } else {
            line[len] = c;
            len++;
        }
    }

}
