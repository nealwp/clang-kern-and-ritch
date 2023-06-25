#include <stdio.h>
#define MAXLINE 200

/* reverse input one line at a time */

int reverse(char[], int);

int reverse(char s[], int len)
{
    char temp[len]; 
    int i = len - 1;
    int j = 0;

    while(i >= 0) {
        temp[j] = s[i];
        --i;
        ++j;
    }

    while(i <= (len - 1)) {
        s[i] = temp[i];
        ++i;
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
            reverse(line, len);
            printf("%s\n", line);
            len = 0;
        } else {
            line[len] = c;
            len++;
        }
    }

}
